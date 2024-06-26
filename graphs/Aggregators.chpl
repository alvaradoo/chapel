module Aggregators {
  use List;
  use ReplicatedDist;
  use CopyAggregation;
  use AggregationPrimitives;

  // Declare our global frontier queues
  var Dfrontier = {0..1} dmapped new replicatedDist(); 
  var frontiers: [Dfrontier] list(int, parSafe=true);
  var frontiersIdx:int;
  
  // Sizes of buffer and their yielding frequences
  private const dstBuffSize = getEnvInt("CHPL_AGGREGATION_DST_BUFF_SIZE", 
                                        4096);
  private const yieldFrequency = getEnvInt("CHPL_AGGREGATION_YIELD_FREQUENCY", 
                                           1024);
  
  /*
    Aggregator to be utilized with Chapel lists in breadth-first search. 
    Designed using works from:
    (1) the `DstAggregator` that is in Arkouda and 
    (2) https://chapel-lang.org/CHIUW/2021/Rolinger.pdf.
  */
  record listDstAggregator {
    type eltType;
    type aggType = eltType;
    const bufferSize = dstBuffSize;
    const myLocaleSpace = LocaleSpace;
    var opsUntilYield = yieldFrequency;
    var lBuffers: [myLocaleSpace] [0..#bufferSize] aggType;
    var rBuffers: [myLocaleSpace] remoteBuffer(aggType);
    var bufferIdxs: [myLocaleSpace] int;

    proc ref postinit() {
      for loc in myLocaleSpace do 
        rBuffers[loc] = new remoteBuffer(aggType, bufferSize, loc);
    }

    proc ref deinit() { flush(); }

    proc ref flush() {
      for loc in myLocaleSpace do
        _flushBuffer(loc, bufferIdxs[loc], freeData=true);
    }

    inline proc ref copy(const loc, const in srcVal: eltType) {
      // Get identifier for buffer for specific locale.
      ref bufferIdx = bufferIdxs[loc];

      // Buffer the desired value. 
      lBuffers[loc][bufferIdx] = srcVal;
      bufferIdx += 1;

      // Flush buffer when it is full or yield if this task has exhausted its
      // yield count. In other words, if its yield count is low it might be 
      // block other remote tasks from flushing their buffers.
      if bufferIdx == bufferSize {
        _flushBuffer(loc, bufferIdx, freeData=false);
        opsUntilYield = yieldFrequency; 
      } else if opsUntilYield == 0 {
        currentTask.yieldExecution();
        opsUntilYield = yieldFrequency; 
      } else {
        opsUntilYield -= 1;
      }
    }

    proc ref _flushBuffer(loc: int, ref bufferIdx, freeData) {
      // Make bufferIdx constant and return if trying to buffer locally.
      const myBufferIdx = bufferIdx; 
      if myBufferIdx == 0 then return;

      // Get remote buffer and allocate that space, if it does not already
      // exist. The metho `cachedAlloc` is defined in the module 
      // `CopyAggregation`.
      ref rBuffer = rBuffers[loc];
      const remBufferPtr = rBuffer.cachedAlloc();

      // Put into rBuffer the contents of lBuffer.
      rBuffer.PUT(lBuffers[loc], myBufferIdx);
      
      // On the remote locale, populate frontier from rBuffer.
      on Locales[loc] {
        ref f = frontiers[(frontiersIdx + 1) % 2];
        for srcVal in rBuffer.localIter(remBufferPtr, myBufferIdx) do
          f.pushBack(srcVal);

        if freeData then rBuffer.localFree(remBufferPtr); // Free the memory.
      }
      if freeData then rBuffer.markFreed(); // Mark memory as freed.
      bufferIdx = 0;
    }
  }
}