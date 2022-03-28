'''
This script will take in the filename of an existing ping output, and generate a plot for it. 
'''

import argparse
import latency_plotter

parser = argparse.ArgumentParser(description="Plot Latency Test")
parser.add_argument("ping_file", type=str, help="Ping output file")
parser.add_argument("pong_file", type=str, help="Pong output file")

parser.add_argument("-t", "--title", type=str, help="Plot title")
parser.add_argument("-f", "--plot-filename", type=str, help="Saved plot filename")
parser.add_argument("-d", "--description", type=str, help="Plot description")

args = parser.parse_args()
ping_filename = args.ping_file
pong_filename = args.pong_file
plot_title = args.title
plot_filename = args.plot_filename
plot_description = args.description

#INCOMPLETE