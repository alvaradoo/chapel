#!/usr/bin/env python3
"""
Strong Scalability Improvement Analysis Script for Sparse Matrix Benchmarks

This script analyzes strong scalability by plotting normalized improvement 
(aggregated vs non-aggregated) using clustered bar charts.
Shows how much the aggregated version improves upon the non-aggregated version
for each processor count, with different scales as separate bars in each cluster.
Each locale has 256 processors.
"""

import os
import re
import numpy as np
import matplotlib.pyplot as plt
from collections import defaultdict
import glob

# Set Times New Roman as the default font for all matplotlib text
# Try multiple font options to ensure compatibility across systems
import matplotlib.font_manager as fm

# List of Times New Roman variants to try
times_fonts = ['Times New Roman', 'Times', 'Liberation Serif', 'DejaVu Serif', 'serif']

# Find the first available font from our list
available_font = None
for font_name in times_fonts:
    try:
        # Check if font is available
        font_list = [f.name for f in fm.fontManager.ttflist]
        if font_name in font_list or font_name == 'serif':
            available_font = font_name
            break
    except:
        continue

if available_font:
    plt.rcParams['font.family'] = available_font
    if available_font != 'serif':
        plt.rcParams['font.serif'] = available_font
    print(f"Using font: {available_font}")
else:
    print("Times New Roman not found, using default serif font")
    plt.rcParams['font.family'] = 'serif'

# Increase font sizes for all text elements
plt.rcParams['font.size'] = 14          # Default font size
plt.rcParams['axes.labelsize'] = 16     # Axis labels
plt.rcParams['axes.titlesize'] = 18     # Axis titles  
plt.rcParams['xtick.labelsize'] = 14    # X-axis tick labels
plt.rcParams['ytick.labelsize'] = 14    # Y-axis tick labels
plt.rcParams['legend.fontsize'] = 13    # Legend text
plt.rcParams['figure.titlesize'] = 20   # Figure title

def parse_benchmark_file(filepath):
    """Parse a benchmark file and extract mean_time and scale."""
    with open(filepath, 'r') as f:
        content = f.read()
    
    # Extract scale from the content
    scale_match = re.search(r'Running Benchmark for Scale (\d+) Matrix', content)
    if not scale_match:
        return None, None
    
    scale = int(scale_match.group(1))
    
    # Extract mean_time
    mean_time_match = re.search(r'mean_time:\s+([0-9.E+-]+)', content)
    if not mean_time_match:
        return None, None
    
    mean_time = float(mean_time_match.group(1))
    
    return scale, mean_time

def extract_params_from_filename(filename):
    """Extract parameters X (locales), Y (scale), Z (trial) from filename."""
    # Pattern: spMat(Agg|NoAgg)_Xnl_Ys_Zt.txt
    pattern = r'spMat(Agg|NoAgg)_(\d+)nl_(\d+)s_(\d+)t\.txt'
    match = re.match(pattern, os.path.basename(filename))
    
    if not match:
        return None, None, None, None
    
    agg_type = match.group(1)  # 'Agg' or 'NoAgg'
    locales = int(match.group(2))    # X (locales)
    scale = int(match.group(3))      # Y
    trial = int(match.group(4))      # Z
    
    return agg_type, locales, scale, trial

def collect_improvement_data(directory='.'):
    """
    Collect data for improvement analysis.
    Groups files by locale count and scale, comparing Agg vs NoAgg.
    """
    agg_data = defaultdict(lambda: defaultdict(list))  # {scale: {locales: [times]}}
    noagg_data = defaultdict(lambda: defaultdict(list))
    
    # Find all benchmark files
    pattern = os.path.join(directory, 'spMat*_*nl_*s_*t.txt')
    files = glob.glob(pattern)
    
    if not files:
        print(f"No files found matching pattern in {directory}")
        return agg_data, noagg_data
    
    print(f"Found {len(files)} files")
    
    for filepath in files:
        # Extract parameters from filename
        agg_type, locales, scale, trial = extract_params_from_filename(filepath)
        if agg_type is None:
            print(f"Could not parse filename: {filepath}")
            continue

        # Skip scales below 16
        if scale < 16 or scale == 1:
            continue
        
        # Parse the file content
        file_scale, mean_time = parse_benchmark_file(filepath)
        if file_scale is None:
            print(f"Could not parse content of: {filepath}")
            continue
        
        # Verify scale consistency (filename vs file content)
        if scale != file_scale:
            print(f"Warning: Scale mismatch in {filepath}: filename={scale}, content={file_scale}")
        
        # Group by scale and locale count
        if agg_type == 'Agg':
            agg_data[scale][locales].append(mean_time)
        else:  # NoAgg
            noagg_data[scale][locales].append(mean_time)
    
    return agg_data, noagg_data

def calculate_improvement(noagg_time, agg_time):
    """Calculate improvement factor (how much faster agg is than noagg)."""
    return noagg_time / agg_time

def plot_improvement_bar_chart(agg_data, noagg_data, output_file='hpe_cray_ex_speedup.png'):
    """Generate clustered bar chart showing improvement of aggregated vs non-aggregated."""
    
    # Find common scales and locales between agg and noagg data
    common_scales = sorted(set(agg_data.keys()) & set(noagg_data.keys()))
    if not common_scales:
        print("No common scales found between aggregated and non-aggregated data")
        return
    
    # Find all locale counts that have data for both agg and noagg
    all_locales = set()
    improvement_data = defaultdict(dict)  # {locale: {scale: improvement}}
    
    for scale in common_scales:
        common_locales = set(agg_data[scale].keys()) & set(noagg_data[scale].keys())
        all_locales.update(common_locales)
        
        for locale in common_locales:
            agg_time = np.mean(agg_data[scale][locale])
            noagg_time = np.mean(noagg_data[scale][locale])
            improvement = calculate_improvement(noagg_time, agg_time)
            improvement_data[locale][scale] = improvement
    
    if not all_locales:
        print("No common locale counts found between aggregated and non-aggregated data")
        return
    
    # Sort locales and scales for consistent ordering
    sorted_locales = sorted(all_locales)
    sorted_scales = sorted(common_scales)
    
    # Set up the plot
    fig, ax = plt.subplots(figsize=(14, 8))
    
    # Define bar properties - made wider for better number fitting
    bar_width = 0.9 / len(sorted_scales)  # Increased from 0.8 to 0.9
    
    # Color-blind friendly colors with good grayscale contrast
    colors = ['#1f77b4', '#ff7f0e', '#2ca02c', '#d62728', '#9467bd', '#8c564b', '#e377c2', '#7f7f7f']
    
    # Patterns for additional distinction
    patterns = ['', '///', '...', '\\\\\\', '+++', 'xxx', '---', '|||']
    
    # Create bars for each locale
    x_positions = np.arange(len(sorted_locales))
    
    for i, scale in enumerate(sorted_scales):
        improvements = []
        for locale in sorted_locales:
            if scale in improvement_data[locale]:
                improvements.append(improvement_data[locale][scale])
            else:
                improvements.append(0)  # No data available
        
        # Calculate position for this group of bars
        bar_positions = x_positions + (i - len(sorted_scales)/2 + 0.5) * bar_width
        
        # Use color and pattern cycling
        color = colors[i % len(colors)]
        pattern = patterns[i % len(patterns)]
        
        bars = ax.bar(bar_positions, improvements, bar_width, 
                     label=f'Scale {scale}', color=color, alpha=0.8,
                     hatch=pattern, edgecolor='black', linewidth=0.5)
        
        # Add value labels on top of bars
        for bar, improvement in zip(bars, improvements):
            if improvement > 0:  # Only label bars with data
                height = bar.get_height()
                ax.annotate(f'{improvement:.1f}x',
                           xy=(bar.get_x() + bar.get_width() / 2, height),
                           xytext=(0, 3),  # 3 points vertical offset
                           textcoords="offset points",
                           ha='center', va='bottom', fontsize=12, rotation=0)
    
    # Add horizontal line at y=1 (no improvement)
    ax.axhline(y=1, color='red', linestyle='--', alpha=0.7, linewidth=1, label='No Improvement')
    
    # Customize the plot
    ax.set_xlabel('Number of Locales', fontsize=18)
    ax.set_ylabel('Speedup Factor', fontsize=18)
    
    # Set x-axis labels
    ax.set_xticks(x_positions)
    ax.set_xticklabels([str(locale) for locale in sorted_locales])
    
    # Add legend - moved to top left inside plot area
    ax.legend(loc='upper left', fontsize=14, frameon=True, 
              fancybox=True, shadow=True, framealpha=0.9)
    
    # Add grid for better readability
    ax.grid(True, alpha=0.3, axis='y')
    
    # Set y-axis to start from 0 or slightly below 1
    y_min = min(0.8, min([min(improvement_data[locale].values()) 
                         for locale in sorted_locales 
                         if improvement_data[locale]]) - 0.1)
    ax.set_ylim(bottom=y_min)
    
    plt.tight_layout()
    plt.savefig(output_file, dpi=300, bbox_inches='tight')
    plt.show()
    
    print(f"Improvement analysis plot saved as {output_file}")

def print_improvement_summary(agg_data, noagg_data):
    """Print a summary of improvement metrics."""
    print("\nImprovement Summary:")
    print("=" * 60)
    
    # Find common scales and locales
    common_scales = sorted(set(agg_data.keys()) & set(noagg_data.keys()))
    
    for scale in common_scales:
        print(f"\nScale {scale}:")
        common_locales = sorted(set(agg_data[scale].keys()) & set(noagg_data[scale].keys()))
        
        for locale in common_locales:
            agg_time = np.mean(agg_data[scale][locale])
            noagg_time = np.mean(noagg_data[scale][locale])
            improvement = calculate_improvement(noagg_time, agg_time)
            
            # Calculate processor count
            processors = locale * 256
            
            print(f"  {locale:3d} locales ({processors:5d} processors): "
                  f"Agg={agg_time:.4f}s, NoAgg={noagg_time:.4f}s, "
                  f"Improvement={improvement:.2f}x")
    
    # Overall statistics
    all_improvements = []
    for scale in common_scales:
        common_locales = set(agg_data[scale].keys()) & set(noagg_data[scale].keys())
        for locale in common_locales:
            agg_time = np.mean(agg_data[scale][locale])
            noagg_time = np.mean(noagg_data[scale][locale])
            improvement = calculate_improvement(noagg_time, agg_time)
            all_improvements.append(improvement)
    
    if all_improvements:
        print(f"\nOverall Statistics:")
        print(f"  Mean improvement: {np.mean(all_improvements):.2f}x")
        print(f"  Median improvement: {np.median(all_improvements):.2f}x")
        print(f"  Min improvement: {np.min(all_improvements):.2f}x")
        print(f"  Max improvement: {np.max(all_improvements):.2f}x")

def main():
    """Main function to run improvement analysis."""
    print("Starting Strong Scalability Improvement Analysis...")
    
    # Collect data
    agg_data, noagg_data = collect_improvement_data()
    
    if not agg_data:
        print("No aggregated data found. Please check that files with pattern spMatAgg_*nl_*s_*t.txt exist.")
        return
    
    if not noagg_data:
        print("No non-aggregated data found. Please check that files with pattern spMatNoAgg_*nl_*s_*t.txt exist.")
        return
    
    print(f"Found aggregated data for {len(agg_data)} scales")
    print(f"Found non-aggregated data for {len(noagg_data)} scales")
    
    # Print summary
    print("\nData Summary:")
    all_scales = sorted(set(list(agg_data.keys()) + list(noagg_data.keys())))
    for scale in all_scales:
        print(f"  Scale {scale}:")
        if scale in agg_data:
            locales = sorted(agg_data[scale].keys())
            print(f"    Aggregated: {len(locales)} locale counts ({min(locales)}-{max(locales)} locales)")
        if scale in noagg_data:
            locales = sorted(noagg_data[scale].keys())
            print(f"    Non-Aggregated: {len(locales)} locale counts ({min(locales)}-{max(locales)} locales)")
    
    # Generate plot and summary
    plot_improvement_bar_chart(agg_data, noagg_data)
    print_improvement_summary(agg_data, noagg_data)

if __name__ == "__main__":
    main()