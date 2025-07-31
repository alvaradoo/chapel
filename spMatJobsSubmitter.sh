#!/bin/bash

# Wrapper script to submit Chapel sparse matrix benchmark jobs
# Usage: ./spMatJobsSubmitter.sh X_MIN X_MAX Y_MIN Y_MAX Z [agg|noagg|both]

# Parse command line arguments
X_MIN=$1
X_MAX=$2
Y_MIN=$3
Y_MAX=$4
Z=$5
MODE=${6:-both}  # Default to both if not specified

# Validate arguments
if [[ -z "$X_MIN" || -z "$X_MAX" || -z "$Y_MIN" || -z "$Y_MAX" || -z "$Z" ]]; then
    echo "Usage: $0 X_MIN X_MAX Y_MIN Y_MAX Z [agg|noagg|both]"
    echo ""
    echo "Parameters:"
    echo "  X_MIN, X_MAX: Range for number of nodes (--nl parameter)"
    echo "  Y_MIN, Y_MAX: Range for scale parameter (--SCALE parameter)"
    echo "  Z: Number of trials"
    echo "  MODE: Run 'agg', 'noagg', or 'both' versions (default: both)"
    echo ""
    echo "Example: $0 1 4 10 12 5 both"
    echo "  This runs X from 1-4, Y from 10-12, with 5 trials for both versions"
    exit 1
fi

# Validate mode
if [[ "$MODE" != "agg" && "$MODE" != "noagg" && "$MODE" != "both" ]]; then
    echo "Error: MODE must be 'agg', 'noagg', or 'both'"
    exit 1
fi

echo "Submitting jobs with parameters:"
echo "  X (nodes): powers of 2 from $X_MIN to $X_MAX"
echo "  Y (scale): $Y_MIN to $Y_MAX"
echo "  Z (trials): $Z"
echo "  Mode: $MODE"
echo ""

# Show which X values will be used
echo "X values (node counts) to be tested:"
X_TEMP=$X_MIN
X_VALUES=""
while [[ $X_TEMP -le $X_MAX ]]; do
    X_VALUES="$X_VALUES $X_TEMP"
    X_TEMP=$((X_TEMP * 2))
done
echo "  $X_VALUES"
echo ""

JOB_COUNT=0

# Loop through all X,Y combinations
# X values are powers of 2 from X_MIN to X_MAX
X=$X_MIN
while [[ $X -le $X_MAX ]]; do
    for Y in $(seq $Y_MIN $Y_MAX); do
        if [[ "$MODE" == "agg" || "$MODE" == "both" ]]; then
            echo "Submitting spMatAgg job: X=$X, Y=$Y, Z=$Z"
            sbatch --nodes=$X spMatAgg.sh $X $Y $Z
            ((JOB_COUNT++))
        fi
        
        if [[ "$MODE" == "noagg" || "$MODE" == "both" ]]; then
            echo "Submitting spMatNoAgg job: X=$X, Y=$Y, Z=$Z"
            sbatch --nodes=$X spMatNoAgg.sh $X $Y $Z
            ((JOB_COUNT++))
        fi
    done
    # Move to next power of 2
    X=$((X * 2))
done

echo ""
echo "Submitted $JOB_COUNT jobs total"
echo ""
echo "Monitor jobs with: squeue -u \$USER"
echo "Cancel all jobs with: scancel -u \$USER"