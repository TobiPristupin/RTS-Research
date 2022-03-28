#Benchmark that will run ddsperf with increasing sizes, and plot it in one graph

import subprocess
import ddsperf_aggregator
import matplotlib.pyplot as plt



ping_cpu = 0
pong_cpu = 1
duration = 8
ddsperf_bin_path = "/home/pi/Programs/CycloneDDS/bin/ddsperf"
CYCLONEDDS_URI = "CYCLONEDDS_URI=file:///home/pi/Documents/rts/cyclone_config.xml"
#sizes of payloads for benchmarks (in kB)
sizes=[1, 2, 4, 8, 16, 32]

means = []
maxes = []
mins = []
percent50s = []
percent90s = []
percent99s = []

for size in sizes:
    pong_command_args = ["sudo", CYCLONEDDS_URI, "taskset", "-c", str(pong_cpu), "chrt", "-f", str(80), ddsperf_bin_path, "pong", "-D", str(duration)]
    ping_command_args = ["sudo", CYCLONEDDS_URI, "taskset", "-c", str(ping_cpu), "chrt", "-f", str(80), ddsperf_bin_path, "ping", "size", f"{size}kB", "-D", str(duration)]
    pong_process = subprocess.Popen(pong_command_args, stdout=subprocess.PIPE)
    ping_process = subprocess.Popen(ping_command_args, stdout=subprocess.PIPE, text=True)
    
    ping_process.wait()
    pong_process.wait()

    lines = ping_process.stdout.read().splitlines()
    means.append(ddsperf_aggregator.aggregate_means(lines))
    maxes.append(ddsperf_aggregator.aggregate_maxes(lines))
    mins.append(ddsperf_aggregator.aggregate_mins(lines))
    percent50s.append(ddsperf_aggregator.aggregate_percent50s(lines))
    percent90s.append(ddsperf_aggregator.aggregate_percent90s(lines))
    percent99s.append(ddsperf_aggregator.aggregate_percent99s(lines))

plt.style.use("ggplot")
fig, ax = plt.subplots()

ax.plot(sizes, means, label="mean")
ax.scatter(sizes, means)

ax.plot(sizes, mins, label="min")
ax.scatter(sizes, mins)

ax.plot(sizes, percent50s, label="50%")
ax.scatter(sizes, percent50s)

ax.plot(sizes, percent90s, label="90%")
ax.scatter(sizes, percent90s)

ax.plot(sizes, percent99s, label="99%")
ax.scatter(sizes, percent99s)

# ax.plot(maxes)), maxes, label="max")
# ax.scatter(maxes)), maxes)

ax.legend(facecolor="w")
ax.set_xlabel("Payload Size (kB)")
# ax.set_xticklabels([0] + sizes)
ax.set_ylabel("Latency (us)")
plt.title("Increasing Payload Size")
plt.savefig("increasing_fig.png")

