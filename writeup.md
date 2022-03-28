# CycloneDDS

## Meeting Feb 22

### Progress

* Managed to build the provided examples on the rpi. There are some interesting examples that provide good performance related data, such as the roundtrip example.
* Ran the roundtrip example as normal, obtained a median latency of 225 nanoseconds. Then I ran the example using `chrt` to set a priority of -80, and I pinned the `pong` process to CPU 0 and the `ping` process to CPU 1. This gave me a slightly better latency of 214 nanoseconds. See `out_taskset.txt` and `out.txt` in the `examples/roundtrip` folder for the results.
*  Here are the results from the CycloneDDS benchmarks. The gap between the yellow line and the green line on the maximized graph shows the difference we are concerned about. Yellow is the max latency observed in one of the samples, and green is the median latency. 
[<img src="https://raw.githubusercontent.com/eclipse-cyclonedds/cyclonedds/assets/performance/20190730/latency-sync-listener.png">](https://raw.githubusercontent.com)
* Found the `ddsperf` binary which is excellent for testing performance. 

### Questions
* The benchmarks that Cyclone posted on their page are using multiple devices connected via the internet. The ROS LLAMA paper is focused on a "shared memory multicore system". So I think the Cyclone data is not really relevant, since we are more interested in local performance of one device. So I will produce my own data.
* What book would you recommend for learning about scheduling policies such as SCHED_FIFO, SCHED_RR, etc.
  * botatzo real time systems book

## Meeting Mar 8

### Progress

* Finished analysis script. Script is split into two, one that runs the commands and outputs it into a file. The second script will parse the data and produce a plot.
* I began to try out plots with different QoS options. I was expecting more interesting QoS options regarding performance, but the majority of options are mostly related to networking and not very relevant parameters. I will continue to dig deeper into the parameters, since there are many.
* There are two parameters that I found produced very interesting results. These are `MaxMessageSize` and `ParameterSize`. By increasing these two parameters, we can get better latency. See `plots/fig_default_message_size.png` and `plots/fig_message_size_x10.png`


## Meeting Mar 22

### Progress

* Looked more into the communication interface for Cyclone. Cyclone currently does not support shared memory transport, but it is on the roadmap. I got in contact with the developers to find out about the current state of it, and see if I could possibly contribute to it.
* According to the Cyclone documentation, Cyclone will try multiple networking interfaces. The last option is loopback. To confirm that Cyclone uses loopback in the same machine, I used wireshark to analyze the packets on the different networking interfaces of the Pi. Loopback was the only interface that showed (hundreds) of RTPS Cyclone packets being sent, confirming that Cyclone uses loopback. 
* Cyclone also has the possibility of intraprocess communication. This is significantly faster than interprocess through loopback (a mean of \~50 us and 99% of \~75us versus for intraprocess vs a mean of \~200us and a 99% of \~450us for loopback. See `plots/single_process.png` and `plots/simple_loopback.png`). Intraprocess communication uses shared memory instead of the loopback interface, since capturing the activity of loopback with Wireshark shows no Cyclone activity.
* According to the experiment code, ROS Llama is using the loopback interface. 
* Iceoryx: Iceoryx is an inter-process communication middleware. It uses a true zero copy shared memory approach, which allows for constant latency regardless of payload size. ROS 2 can be run with Iceoryx and Cyclone DDS.


## Meeting Mar 29

### Progress

* Read the two papers below, and summarized the key information.
* "Exploring the Performance of ROS2 Paper" claims that DDS end-to-end latencies are constant while message data size is lower than maximum packet size (64 KB). On the other hand, as one large message is divided into several packets, the latencies sharply increase.
  * I will investigate to determine how much of the latency comes down to fragmentation vs other things, especially as packet size increases. One interesting problem is how to aggregate data. For every second of `ddsperf` execution, I get information about the 90% and 95% percentile of the last 2-3k roundtrip messages. For a 10 second benchmark with a fixed payload size, I get 10 90th and 95th percentile values. I would like to aggregate these 10 values into one, so I can then re-run my benchmark with another payload size, aggregate everything of this new benchmark into one value, and plot these two values as payload size changes. How do I aggregate percentiles? According to multiple sources on the internet, percentiles can not be aggregated in a mathematically meaningful way. The best solution is to look at the raw data that generated the 10 percentiles data points, and calculate a single percentile data point from the raw data. This is not possible with `ddsperf`. The solution I compromised on, which is the same one that Cyclone uses for the graphs shown on their webpage, is to simply take the maximum value of those 10 percentile data points. That way, we at least make sure that we are not obscuring the worst case when aggregating. What other alternatives are there? Ask Gill.
  * Generated plots for increasing size benchmark. See `plots/increasing_fig.png`
  * Conclusion: An important aspect of minimizing latency is to minimize packet size and prevent fragmentation. The paper claims 64KB as a good estimate of maximum size, since it is the maximum packet size. However, this is highly dependent on the architecture (what network is being used, what packet sizes does it support, the configuration of DDS, etc.) As a general piece of advice, always try to minimize the amount of data sent.
* Interesting finding: According to the Cyclone docs, `FragmentSize` determines the max size the serialized form of a sample can be. Anything larger than that, and it will be split. 

#### Latency Analysis of ROS2 Multi-Node Systems Paper (https://arxiv.org/pdf/2101.02074.pdf)
* "Our findings indicate that end-to-end latency strongly depends on the used DDS middleware. Moreover, we show that ROS2 can lead to 50 % latency overhead compared to using low-level DDS communications. "
* ""Since real-time capability is one of the main feature claims of ROS2, the question arises how much latency is entailed by a system of many nodes compared to a system that performs the same computation in a single node. This leads   to the central question of this paper: How does a ROS2 system cope with scalability?
* "With a payload higher than the fragmentation size of UDP (here, 64 KB), latency increases with the payload size."\
* "DDS middleware and the delay between message notification and message retrieval by ROS2 contribute the biggest portions to the overall latency."


#### Exploring the Performance of ROS2 Paper (https://dl.acm.org/doi/pdf/10.1145/2968478.2968502)
* "DDS end-to-end latencies are constant until message data size is lower than maximum packet size (64 KB) as shown in Figure 9. On the other hand, as one large message is divided into several packets, the latencies sharply increase as show in Figures 10 and 18. Whether message data size is over 64 KB or not is important issue especially in DDS because management of divided packets with QoS Policy needs significant processing time and alternative APIs provided by some vendors. We should understand then influence of divided packets and keep in mind this issue when using DDS"
* we also clarify a need of alternative API for large message to manage divided packets. This is critical to handle large message. Abstraction of this will shorten DDS end-to-end latencies.

* Current State of the Project: If we want to improve latency, we can do two things. First option is to work in a single process setting. This is ideal. Second option is to use shared memory. Currently CycloneDDS does not support shared memory (it used loopback instead), but this is planned in the roadmap. Alternatively, Iceoryx could be investigated as a means to convert CycloneDDS into using shared memory. Finally, QoS options can be tweaked to improve latency. The most important options when it comes to latency are the message size, which in CycloneDDS correspond to `MaxMessageSize` and `ParameterSize`. According to "Exploring the Performance of ROS 2", it is ideal to keep message data size under 64KB for ROS2, to avoid fragmentation. However, my experiments on CycloneDDS show that a larger size leads to better latency. See `plots/fig_default_message_size.png` and `plots/fig_message_size_x10.png`. I must investigate these two contradicting results. I believe that the contradiction comes from the fact that I am confounding the QoS options with the actual payload size sent by `ddsperf`.

## TODO
* Investigate the claim that best latency is achieved with message sizes under 64KB. What is the relationship between the payload sizes sent by `ddsperf` and the message size QoS options of CycloneDDS?
  * Possibly analyze syscalls to see what happens when payload size is larger than 64KB. Is the splitting causing major overhead?
* Investigate `-u` option in ddsperf, which uses best-effort instead of reliable
* How does Iceoryx work? Can it really be used to transform Cyclone into a shared memory DDS?.
* Redo plots missing max!

* Start messing around with QoS configurations and observe changes.
* Make plotting script better
  * Save plotting in a better location/better filename
  * How to embed QoS options into plot to remember?
* Benchmark OpenDDS and compare??
* Read a chapter of a book on scheduling polices, such as SCHED_FIFO, SCHED_RR, etc.

## Notes

* Processes with a lower priority value are more important. `taskset` can be used to control the CPU affinity of a process. `chrt` can be used for viewing and setting the scheduling policy for a process.
* https://easyperf.net/blog/2019/10/05/Performance-Analysis-Of-MT-apps
* https://www.eprosima.com/index.php/resources-all/performance/fast-dds-vs-cyclone-dds-performance
*  How to fix compilation issues. 
   *  > I've always been able to solve such problems by adding the correct directory to the CMAKE_PREFIX_PATH. E.g., when building Cyclone, pass -DCMAKE_INSTALL_PREFIX=/wherever/you/want/to/install/it to cmake and when building an application that "requires" the Cyclone package, make sure to pass to pass -DCMAKE_PREFIX_PATH=/wherever/you/want/to/install/it (and if you need to set a path for multiple packages, separate them with semicolons).
* We want a flat line for latency, even if that matters having it high up
* **UDP Protocol**: The User Datagram Protocol (UDP) is an internet protocol that fulfills the same role as TCP. UDP is one of the protocols used for communication by Cyclone. UDP has the following characteristics:
  * Applications can send messages, referred to as *datagrams*, to other hosts on an IP network. UDP does not require prior communications to set up a communication channel. This is knows as a `connectionless communication` model, because every data unit (packet) is individually addresses and routed based on information carried in each unit, rather than in the setup information of a prearranged communication channel.
  * UDP provides checksums for data integrity, and port numbers for addressing different functions at the source and destination.
  * UDP does not provide any type of handshaking, guarantee of delivery, ordering, or duplicate protection. UDP is at its core unreliable, and exposes the user's program to any unreliability in the network. Programs that require reliability should instead use TCP.
  * *Why/When is UDP useful?* Since UDP does not incur ony overhead costs due to error checking and correction, UDP can be useful for real-time systems, where dropping packets is preferable to waiting for packets.
* **Multicast**: Used sometimes by Cyclone based on config. Multicast is a group communication *routing scheme* where data transmissions is addressed to a group of destination computers simultaneously. This can be one-to-many or many-to-many. 


