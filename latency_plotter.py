'''
Module that generates a plot given the output files of ddsperf ping and pong processes.
'''

import matplotlib.pyplot as plt
import re
from typing import List

default_plot_title = "Ping Pong Latency"
default_plot_filename = "fig.png"
default_plot_description = None

'''
lines: a list of all the test output lines
This method will filter and transform the lines for processing.

Sample lines array:
1646105161.860799 [0]    ddsperf: interface wlan0: transmit port 36543 
[11301] participant rts-rpi1:11301: new (self)
[11301] participant rts-rpi1:11300: new
[11301] 2.000  rts-rpi1:11300 size 12 mean 173.354us min 155.747us 50% 163.858us 90% 190.561us 99% 317.346us max 2225.527us cnt 2839
[11301] 2.000  rss:2.5MB vcsw:2847 ivcsw:0 ddsperf:1%+0% recvUC:21%+39%
[11301] 3.000  rts-rpi1:11300 size 12 mean 180.577us min 155.367us 50% 169.154us 90% 206.533us 99% 357.299us max 3372.989us cnt 2736
[11301] 3.000  rss:2.5MB vcsw:2748 ivcsw:0 recvUC:20%+42%

We are interested in the files of the format "rts-rpi:11300 size 12 mean 173.354us ...."
Remaining lines are discarded
'''
def filter_cmd_output(lines: List) -> list: 
    #matches lines of the form: [digit(s)] digit.digit(s) 
    valid_line_regex = re.compile("\[\d+\] \d+\.\d+")
    valid_line = lambda line: not "rss:" in line and re.match(valid_line_regex, line)
    lines = filter(valid_line, lines)
    lines = list(map(lambda line: line.replace("\n", ""), lines))

    return lines

#Takes in a string such as "mean 236.37us" and returns the float 236.37. "mean" can be replaced by any single word with no spaces
def statistic_to_float(statistic: str) -> float:
    number = statistic.split()[1].replace("us", "")
    return float(number)

#Takes in the list of lines, and returns a list of all the occurences of the statistic that matches the given pattern
def extract_values(lines: list, pattern: re.Pattern) -> list:
    values = []
    for line in lines:
        match = re.search(pattern, line)
        if not match:
            #This assumes that there is one match per line, which should be the case given the input data
            raise RuntimeError("Parsing error. Offending line: " + line)
        value = statistic_to_float(match.group())
        values.append(value)
    
    return values

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

    lines = filter_cmd_output(lines)
    
    means = extract_values(lines, re.compile("mean \d+.\d+"))
    mins = extract_values(lines, re.compile("min \d+.\d+"))
    percent50s = extract_values(lines, re.compile("50% \d+.\d+"))
    percent90s = extract_values(lines, re.compile("90% \d+.\d+"))
    percent99s = extract_values(lines, re.compile("99% \d+.\d+"))


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
    
    ax.legend(facecolor="w")
    ax.set_xlabel("Iterations")
    ax.set_xticklabels([])
    ax.set_ylabel("Latency (us)")
    plt.title(plot_title)
    plt.savefig(plot_filename)