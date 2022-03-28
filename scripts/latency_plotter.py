'''
Module that generates a plot given the output files of ddsperf ping and pong processes.
'''

import matplotlib.pyplot as plt
from typing import List
import ddsperf_extractor 

default_plot_title = "Ping Pong Latency"
default_plot_filename = "fig.png"
default_plot_description = None


#Generates a plot from the given lines, and saves it as plot_filename. If None is passed for any of the named parameters, the default
#values for them will be used. 
def plot(lines, plot_title=default_plot_title, plot_description=default_plot_description, plot_filename=default_plot_filename):    
    #plot allows other scripts to call it with a value of None for its named parameters. If a value of None is used, the default values
    #for that parameter will be used. This is allowed because this function is called from multiple scripts, and dynamically building the 
    # argument list with only certain parameters is not very clean. Easier to have this function deal with it on its own.
    # Of course, if nothing is passed for that parameter, the default will be automatically used.
    plot_title = default_plot_title if plot_title == None else plot_title
    plot_description = default_plot_description if plot_description == None else plot_description
    plot_filename = default_plot_filename if plot_filename == None else plot_filename

    
    means = ddsperf_extractor.extract_means(lines)
    mins = ddsperf_extractor.extract_mins(lines)
    maxes = ddsperf_extractor.extract_maxes(lines)
    percent50s = ddsperf_extractor.extract_percent50s(lines)
    percent90s = ddsperf_extractor.extract_percent90s(lines)
    percent99s = ddsperf_extractor.extract_percent99s(lines)

    plt.style.use("ggplot")
    fig, ax = plt.subplots()
    
    ax.plot(range(len(means)), means, label="mean")
    ax.scatter(range(len(means)), means)
    
    ax.plot(range(len(mins)), mins, label="min")
    ax.scatter(range(len(mins)), mins)

    ax.plot(range(len(percent50s)), percent50s, label="50%")
    ax.scatter(range(len(percent50s)), percent50s)

    ax.plot(range(len(percent90s)), percent90s, label="90%")
    ax.scatter(range(len(percent90s)), percent90s)

    ax.plot(range(len(percent99s)), percent99s, label="99%")
    ax.scatter(range(len(percent99s)), percent99s)
    
    ax.plot(range(len(maxes)), maxes, label="max")
    ax.scatter(range(len(maxes)), maxes)
    
    ax.legend(facecolor="w")
    ax.set_xlabel("Iterations")
    ax.set_xticklabels([])
    ax.set_ylabel("Latency (us)")
    plt.title(plot_title)
    plt.savefig(plot_filename)