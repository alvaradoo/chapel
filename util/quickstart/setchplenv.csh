# csh/tcsh-compatibility shell script to set the Chapel environment variables
# Due to csh/tcsh limitations and inconsistencies, source this from $CHPL_HOME

# Shallow test to see if we are in the correct directory
# Just probe to see if we have a few essential subdirectories --
# indicating that we are probably in a Chapel root directory.
if ( ! -d "util" || ! -d "compiler" || ! -d "runtime" || ! -d "modules" ) then
   echo "Error: source util/setchplenv from within the chapel directory"
   exit 1
endif

echo -n "Setting CHPL_HOME "
setenv CHPL_HOME "$cwd"
echo "to $CHPL_HOME"

set CHPL_PYTHON = `"$CHPL_HOME"/util/config/find-python.sh`

# Remove any previously existing CHPL_HOME paths
set MYPATH = `$CHPL_PYTHON "$CHPL_HOME"/util/config/fixpath.py "$PATH"`
set exitcode = $status
set MYMANPATH = `$CHPL_PYTHON "$CHPL_HOME"/util/config/fixpath.py "$MANPATH"`

# Double check $MYPATH before overwriting $PATH
if ( "$MYPATH" == "" || "$exitcode" != 0) then
    echo "Error:  util/config/fixpath.py failed"
    echo "        Make sure you have Python 3.5+"
    exit 1
endif

set CHPL_BIN_SUBDIR = `$CHPL_PYTHON "$CHPL_HOME"/util/chplenv/chpl_bin_subdir.py`

echo -n "Updating PATH "
setenv PATH "$CHPL_HOME/bin/$CHPL_BIN_SUBDIR":"$CHPL_HOME/util":"$MYPATH"
echo "to include $CHPL_HOME/bin/$CHPL_BIN_SUBDIR"
echo "                     and $CHPL_HOME/util"

echo -n "Updating MANPATH "
setenv MANPATH "$CHPL_HOME"/man:"$MYMANPATH"
echo "to include $CHPL_HOME/man"

echo "Setting CHPL_COMM to none"
setenv CHPL_COMM none

echo "Setting CHPL_TASKS to fifo"
setenv CHPL_TASKS fifo

echo "Setting CHPL_TARGET_MEM to cstdlib"
setenv CHPL_TARGET_MEM cstdlib
unsetenv CHPL_TARGET_JEMALLOC
unsetenv CHPL_TARGET_MIMALLOC

echo "Setting CHPL_HOST_MEM to cstdlib"
setenv CHPL_HOST_MEM cstdlib
unsetenv CHPL_HOST_JEMALLOC
unsetenv CHPL_HOST_MIMALLOC

echo "Setting CHPL_GMP to none"
setenv CHPL_GMP none

echo "Setting CHPL_RE2 to none"
setenv CHPL_RE2 none

set USE_LLVM = `$CHPL_PYTHON "$CHPL_HOME"/util/chplenv/chpl_llvm.py --quickstart`
echo "Setting CHPL_LLVM to $USE_LLVM"
setenv CHPL_LLVM $USE_LLVM
