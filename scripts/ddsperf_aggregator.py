'''
This module will aggregate the output of ddsperf into one set of statistics. For one given benchmark, ddsperf will output
n sets of statistics, where n is the duration of the benchmark. This program will aggregate those n sets into one set.

Usage: This program works like a unix command line tool. You can pipe the output of ddsperf into the program, or you can 
run the program with a filename as a cmd parameter. The file should contain the output of the ddsperf command.

Aggregation method: Means are averaged. For max and mins, we take the max and min of all runs, respectively. 
For percentiles, we take the max of all percentile data points. Note that percentiles cannot be meaningfully 
aggregated, so taking the max is a good compromise (it's also the approach that CycloneDDS uses when presenting their
data)
'''

import ddsperf_extractor

avg = lambda s: sum(s) / len(s)

def aggregate_means(lines):
    means = ddsperf_extractor.extract_means(lines)
    return avg(means)

def aggregate_mins(lines):
    values = ddsperf_extractor.extract_mins(lines)
    return min(values)

def aggregate_maxes(lines):
    values = ddsperf_extractor.extract_maxes(lines)
    return max(values)

def aggregate_percent50s(lines):
    values = ddsperf_extractor.extract_percent50s(lines)
    return max(values)

def aggregate_percent90s(lines):
    values = ddsperf_extractor.extract_percent90s(lines)
    return max(values)    

def aggregate_percent99s(lines):
    values = ddsperf_extractor.extract_percent99s(lines)
    return max(values)  

