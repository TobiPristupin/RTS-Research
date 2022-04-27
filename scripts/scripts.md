### `run_latency_test.py`
This program will run a latency test. It will first Spawn ddsperf ping and pong processes. Use taskset to set the CPU affinity to different CPUs, and use chrt to increase priority. Then it will write stdout of the processes to two output files. Then it will call another script to plot the output from the files. By splitting the scripts, we can plot an output file without having to regenerate it. 

Usage:
```
usage: run_latency_test.py [-h] [-s] [-d DURATION] [-n] [--ddsperf DDSPERF] [-c CONFIG] [-f PLOT_FILENAME]
                           [-t PLOT_TITLE] [--plot-description PLOT_DESCRIPTION]

Run Latency Test

optional arguments:
  -h, --help            show this help message and exit
  -s, --single-process  Run ping and pong in the same process. Calls ddsperf with -L flag.
  -d DURATION, --duration DURATION
                        Duration to run ping and pong ddsperf processes
  -n, --no-plot         Don't generate a plot
  --ddsperf DDSPERF     Path for ddsperf binary
  -c CONFIG, --config CONFIG
                        Path for cyclone config file in the following format: CYCLONEDDS_URI=file"//[path]
  -f PLOT_FILENAME, --plot-filename PLOT_FILENAME
                        Filename for generated plot
  -t PLOT_TITLE, --plot-title PLOT_TITLE
                        Title for plot
  --plot-description PLOT_DESCRIPTION
                        Plot description
```

### `run_plotter_standalone.py`
Generates a matplotlib plot given a `ddsperf` output file. This is the script called by `run_latency_test.py` to generate a plot.

Usage:
```
usage: run_plotter_standalone.py [-h] [-t TITLE] [-f PLOT_FILENAME] [-d DESCRIPTION] ping_file

Plot Latency Test

positional arguments:
  ping_file             Ping output file

optional arguments:
  -h, --help            show this help message and exit
  -t TITLE, --title TITLE
                        Plot title
  -f PLOT_FILENAME, --plot-filename PLOT_FILENAME
                        Saved plot filename
  -d DESCRIPTION, --description DESCRIPTION
                        Plot description
```

This script will call `latency_plotter.py` to perform the actual plotting.

An example plot can be found in `plots/simple_loopback.png`


### `increasing_size_benchmark.py`
Benchmark that will run `ddsperf` with increasing payload sizes, and then plot all the data in one graph. An example plot can be found in `plots/increasing_fig.png`

### `ddsperf_aggregator.py`
Helper script that will aggregate the output of ddsperf into one set of statistics. For one given benchmark, `ddsperf` will output `n` sets of statistics, where `n` is the duration of the benchmark. This program will aggregate those `n` sets into one set. Details about how the aggregation is performed can be found in the source

### `ddsperf_extractor.py`
Helper script that will parse relevant statistics from a `ddsperf` output file.