use CopyAggregation;
use CTypes;
use BlockDist;

config const idxBufSize = 10;

class DestHandler {
  var locIdxBuf: SparseIndexBuffer(?);

  proc init(DVal) {
    this.locIdxBuf = DVal.locDoms[DVal.dist.targetLocsIdx(here.id)]!.mySparseBlock.createIndexBuffer(idxBufSize);
  }

  inline proc handle(dstAddr: c_ptr(?t), srcVal: t) {
    assert(dstAddr == nil);
    this.locIdxBuf.add(srcVal);
  }

  proc deinit() {
    this.locIdxBuf.commit();
  }
}

class AggregatedAddHandler {
  var domVal;
  type elemType;

  proc init(D) {
    this.domVal = D._value;
    if D.rank == 1 then
      this.elemType = D.idxType;
    else
      this.elemType = D.rank*D.idxType;
  }

  proc sourceCopy() {
    return new unmanaged DestHandler(this.domVal);
  }

  proc destLocale(val: elemType) {
    return domVal.dist.dsiIndexToLocale(val);
  }
}

config const nnz = 50;
config const n = 5000;
writeln("nnz = ", nnz);
writeln("n   = ", n);

const Space = {1..n};
const DenseDom = Space dmapped new blockDist(Space);
const SparseDom: sparse subdomain(DenseDom);

var IndexArr = blockDist.createArray(1..nnz, int);
assert(nnz*10 < n);
forall i in IndexArr.domain {
  IndexArr[i] = i*10;
}

forall elem in IndexArr
    with (var agg = new DstAggregator(new shared AggregatedAddHandler(SparseDom))) {
  agg.copy(elem);
}
writeln("Size of SparseDom with Aggregation: ", SparseDom.size);

// The below should be able to be written with +=, bulkAdd, or bulkAddPreserverInds, but they have been broken because
// of remoteHandler in CopyAggregation.chpl
var SparseDom2: sparse subdomain(DenseDom);
forall elem in IndexArr with (ref SparseDom2) {
  on SparseDom2.distribution.dsiIndexToLocale(elem) {
    SparseDom2.add(elem);
  }
}

writeln("Size of SparseDom without Aggregation: ", SparseDom2.size);
