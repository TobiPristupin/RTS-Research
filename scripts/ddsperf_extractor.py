'''
module that given ddsperf output, will extract the relevant statistics
'''

import re


### PRIVATE FUNCTIONS

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
def _filter_cmd_output(lines: list) -> list: 
    #matches lines of the form: [digit(s)] digit.digit(s) 
    valid_line_regex = re.compile("\[\d+\] \d+\.\d+")
    valid_line = lambda line: not "rss:" in line and re.match(valid_line_regex, line)
    lines = filter(valid_line, lines)
    lines = list(map(lambda line: line.replace("\n", ""), lines))

    return lines

#Takes in a string such as "mean 236.37us" and returns the float 236.37. "mean" can be replaced by any single word with no spaces
def _statistic_to_float(statistic: str) -> float:
    number = statistic.split()[1].replace("us", "")
    return float(number)

#Takes in the list of lines, and returns a list of all the occurences of the statistic that matches the given pattern
def _extract_values(lines: list, pattern: re.Pattern) -> list:
    values = []
    for line in lines:
        # print(line)
        match = re.search(pattern, line)
        if not match:
            continue
            #This assumes that there is one match per line, which should be the case given the input data
            # raise RuntimeError("Parsing error. Offending line: " + line)
        value = _statistic_to_float(match.group())
        values.append(value)
    
    return values

### EXPORTED FUNCTIONS

def extract_means(lines: list) -> list:
    return _extract_values(_filter_cmd_output(lines),  re.compile("mean \d+.\d+")) 

def extract_mins(lines: list) -> list:
    return _extract_values(_filter_cmd_output(lines),  re.compile("min \d+.\d+")) 

def extract_maxes(lines: list) -> list:
    return _extract_values(_filter_cmd_output(lines),  re.compile("max \d+.\d+")) 

def extract_percent50s(lines: list) -> list:
    return _extract_values(_filter_cmd_output(lines),  re.compile("50% \d+.\d+")) 

def extract_percent90s(lines: list) -> list:
    return _extract_values(_filter_cmd_output(lines),  re.compile("90% \d+.\d+")) 

def extract_percent99s(lines: list) -> list:
    return _extract_values(_filter_cmd_output(lines),  re.compile("99% \d+.\d+")) 