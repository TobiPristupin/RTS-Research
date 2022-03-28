'''
Tobias Pristupin

This program will do the following
* Spawn ddsperf ping and pong processes. Use taskset to set the CPU affinity to different CPUs, and use chrt to increase priority.
* Write stdout of the processes to two files
* Call another script to plot the output from the files. By splitting the scripts, we can plot the output from a file without having to 
regenerate it.

'''
import subprocess
import time
import os
import argparse
import latency_plotter

default_duration = 10 
default_ddsperf_bin_path = "/home/pi/Programs/CycloneDDS/bin/ddsperf"
default_CYCLONEDDS_URI = "CYCLONEDDS_URI=file:///home/pi/Documents/rts/cyclone_config.xml"

parser = argparse.ArgumentParser(description="Run Latency Test")
parser.add_argument("-s", "--single-process", action="store_true", help="Run ping and pong in the same process. Calls ddsperf with -L flag.")
parser.add_argument("-d", "--duration", type=int, default=default_duration, help="Duration to run ping and pong ddsperf processes")
parser.add_argument("-n", "--no-plot", action="store_true", help="Don't generate a plot")
parser.add_argument("--ddsperf", type=str, default=default_ddsperf_bin_path, help="Path for ddsperf binary")
parser.add_argument("-c", "--config", type=str, default=default_CYCLONEDDS_URI, help="Path for cyclone config file in the following format: CYCLONEDDS_URI=file\"//[path]")

#The following arguments will be passed onto plot_latency_test
parser.add_argument("-f", "--plot-filename", type=str, help="Filename for generated plot")
parser.add_argument("-t", "--plot-title", type=str, help="Title for plot")
parser.add_argument("--plot-description", type=str, help="Plot description")

args = parser.parse_args()

ping_cpu = 0
pong_cpu = 1
single_process = args.single_process
duration = args.duration
plot = not args.no_plot
ddsperf_bin_path = args.ddsperf
CYCLONEDDS_URI = args.config

#Opens output files for ddsperf, and returns (ping file, pong file)
def open_files():
    global pong_out_file, ping_out_file
    unix_time = time.strftime("%m.%d.%y-%H:%M:%S")
    path = f"ddsperf_output/{unix_time}/"
    os.makedirs(path, exist_ok=True)
    pong_out_file = open(f"{path}/pong_out.txt", "w+")
    ping_out_file = open(f"{path}/ping_out.txt", "w+")
    return (ping_out_file, pong_out_file)

#runs the ping and pong commands, writes the output to the corresponding files, and returns the output of the ping command
# does not open or close files
def run_ping_pong(ping_out_file, pong_out_file):   
    if (single_process):
        return run_ping_pong_single_process(ping_out_file, pong_out_file)
        

    pong_command_args = ["sudo", CYCLONEDDS_URI, "taskset", "-c", str(pong_cpu), "chrt", "-f", str(80), ddsperf_bin_path, "pong", "-D", str(duration)]
    ping_command_args = ["sudo", CYCLONEDDS_URI, "taskset", "-c", str(ping_cpu), "chrt", "-f", str(80), ddsperf_bin_path, "ping", "-D", str(duration)]
    pong_process = subprocess.Popen(pong_command_args, stdout=pong_out_file, text=True)
    ping_process = subprocess.Popen(ping_command_args, stdout=ping_out_file, text=True)
    print("[run_latency_test] spawned ping and pong processes. Waiting...")
    pong_process.wait()
    ping_process.wait()
    print("[run_latency_test] ping and pong processes completed")
    
    #restart cursor of files to beggining, so other code can read the file
    pong_out_file.seek(0)
    ping_out_file.seek(0)
    return ping_out_file.readlines()

#runs the ping and pong commands in the same process. All output will be written to the ping file. Returns the cmd output.
# does not open or close files
def run_ping_pong_single_process(ping_out_file, pong_out_file):
    command_args = ["sudo", CYCLONEDDS_URI, "chrt", "-f", str(80), ddsperf_bin_path, "-L", "-D", str(duration), "ping",  "pong"]
    process = subprocess.Popen(command_args, stdout=ping_out_file, text=True)
    
    print("[run_latency_test] spawned ping and pong processes. Waiting...")
    process.wait()
    print("Single Process Test. All output should be in the corresponding ping file", file=pong_out_file)
    print("[run_latency_test] ping and pong processes completed")
    
    #restart cursor of files to beggining, so other code can read the file
    pong_out_file.seek(0)
    ping_out_file.seek(0)
    return ping_out_file.readlines()


def main():
    ping_out_file, pong_out_file = open_files()
    ping_cmd_output = run_ping_pong(ping_out_file, pong_out_file)
    ping_out_file.close()
    pong_out_file.close()

    if plot:
        print("[run_latency_test] plotting...")
        latency_plotter.plot(ping_cmd_output, plot_title=args.plot_title, plot_description=args.plot_description, plot_filename=args.plot_filename)

if __name__ == "__main__":
    main()
