#!/bin/bash
#SBATCH --job-name=spMatAgg
#SBATCH --output=spMatAgg_%A_%a.out
#SBATCH --error=spMatAgg_%A_%a.err
#SBATCH --time=12:00:00
#SBATCH --ntasks-per-node=1
#SBATCH --cpus-per-task=256
#SBATCH --exclusive
#SBATCH --partition=hotlum

# Usage: This script should be called by a wrapper script that submits individual jobs
# for each X,Y,Z combination with the appropriate number of nodes

# Parse command line arguments
X=$1
Y=$2
Z=$3

# Validate arguments
if [[ -z "$X" || -z "$Y" || -z "$Z" ]]; then
    echo "Usage: sbatch --nodes=$X spMatAgg.sh X Y Z"
    echo "This script should be called with explicit X, Y, Z values"
    exit 1
fi

# Source Chapel multi-locale environment
echo "Sourcing Chapel multi-locale environment..."
source /lus/scratch/alvarado/setMultiLocaleChapelEnvironment.sh

# Create output filename
OUTPUT_FILE="spMatAgg_${X}nl_${Y}s_${Z}t.txt"

echo "Running with X=$X nodes, Y=$Y scale, Z=$Z trials"
echo "Output file: $OUTPUT_FILE"
echo "SLURM allocated nodes: $SLURM_JOB_NUM_NODES"

# Verify we have the right number of nodes
if [[ "$SLURM_JOB_NUM_NODES" != "$X" ]]; then
    echo "Warning: SLURM allocated $SLURM_JOB_NUM_NODES nodes but Chapel needs $X nodes"
fi

# Run the Chapel program
/lus/scratch/alvarado/chapel/sparseMatrixCreationBenchmark -nl $X --SCALE=$Y --trials=$Z --runNoAgg=false > $OUTPUT_FILE 2>&1

echo "Job completed for X=$X, Y=$Y, Z=$Z"