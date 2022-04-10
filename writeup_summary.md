## Motivation

ROS2 is utilized by many real time systems. In these types of system, being able to establish a reliable upper bound for latency is of upmost importance, as the correct functioning of these systems rely on real time demands.

ROS2 adopts the DDS standard as its underlying communication system. Multiple sources have indicated that the implementation of the DDS middleware can have major effects on the end-to-end latency of a ROS2 system. For example:

* From [1]: "The DDS middleware heavily affects the transmission delay between ROS components, as all communication must pass through it" and "Future work illuminating the
effects of thread scheduling on DDS latency might enable
ROS-Llama to automatically select suitable DDS QoS options
and to predict and account for worst-case propagation delays".
* From [2]: "Our findings indicate that end-to-end latency strongly depends on the used DDS middleware" and "DDS middleware and the delay between message notification and message retrieval by ROS2 contribute the biggest portions to the overall latency".

Thus, if we are looking to improve end-to-end latency in ROS2, improving the latency of the DDS middleware is a good place to start.

This project is specifically focused on analyzing and improving the latency of Eclipse's CycloneDDS implementation.

From CycloneDDS' home page, we can see the following graph:
[<img src="https://raw.githubusercontent.com/eclipse-cyclonedds/cyclonedds/assets/performance/20190730/latency-sync-listener.png">](https://raw.githubusercontent.com)

Yellow is the max latency observed in one of the samples, and green is the median latency. The gap between the yellow line and the green line on the maximized graph is the difference that we are concerned about. We aim to minimize this difference, or at least make the yellow line more predictable. 

## CycloneDDS Benchmarking Setup

My first step was to understand how I can benchmark and obtain insightful data for CycloneDDS.

All benchmarking was done on a Raspberry Pi 4B with kernel `5.10.17-v7 #1 SMP PREEMPT armv7l GNU/Linux`.

CycloneDDS is packaged with a benchmarking tool called `ddsperf`. `ddsperf` can do various different types of benchmarking, including throughput and latency tests for varying payload sizes. Our focus is placed on the latency testing.

The latency tests involves creating two processes, a `ping` process and a `pong` process. The `ping` process sends a message to the DDS network, and the `pong` message will receive it and reply back. This can be used to test roundtrip latency. The following command was used: `sudo taskset -c 0 chrt -f 80 ddsperf pong > /dev/null & sudo taskset -c 1 chrt -f 80 ddsperf ping size {PAYLOAD_SIZE}`. This command will create a pong and a ping process, pin them to CPUs 0 and 1, and set their priority to -80. The `pong` process is ran in the background, with its output redirected to `dev/null`. `dds`

I also created multiple Python scripts to automate this process. The most important one is `run_latency_test.py`, that will run a latency test, write the output to a file, and then optionally generate a plot of the data.

This is a plot of the output of a basic latency test:
![Basic latency test plot](plots/fig_default_message_size.png)
Each data point 

## Potential findings 

### QoS Options
The DDS standard provides applications policies, called QoS, to control a wide set of non-functional properties, such as data availability, data delivery, data timeliness and resource usage. CycloneDDS supports the majority of the QoS options determined by the standard. The full list can be found [here](https://github.com/eclipse-cyclonedds/cyclonedds/blob/master/docs/manual/options.md). 

There are two QoS options that produce interesting results regarding latency: `MaxMessageSize` and `FragmentSize`. A detailed explanation of these parameters can be found [here](https://github.com/eclipse-cyclonedds/cyclonedds/blob/master/docs/manual/config.rst#controlling-fragmentation). To sum up, these parameters control the maximum size of DDS samples. Samples larger than the determined size will have to be fragmented. Fragmentation can happen at the CycloneDDS level, or at the network stack level, assuming CycloneDDS is using the network stack (more on this [in this section](#communication-interface)). 

Fragmentation turns out to be relevant to latency. Experiments from [2] show that "With a payload higher than the fragmentation size of UDP (here, 64 KB),latency increases with the payload size". Therefore we can conjecture that fragmentation of data samples is a major contributor to latency.


#### What are the next steps? What can we improve?
* Tuning `MaxMessageSize` and `FragmentSize` to the needs of each individual system is a good way to reduce latency.
* A detailed analysis of the sources of latency for CycloneDDS could provide an answer to the conjecture that fragmentation is a major contributor to latency. From [2], it is clear that latency rapidly deteriorates with sample sizes greater than the fragmentation size of UDP. However, is this additional latency introduced due to fragmentation?
  * If so, why is fragmentation introducing such greater latency? [2] suggests the following: "we also clarify a need of alternative API for large message to manage divided packets. This is critical to handle large message. Abstraction of this will shorten DDS end-to-end latencies". This hints to the idea that reducing latency due to fragmentation could require a reworking/addition to an API, which would not be a simple task. What API does this fall into? The RMW, ROS, or the DDS standard?
* We can continue looking into QoS options, and identify more parameters that may have an impact on latency.
  * The `Reliability` QoS, that has options of `best_effort` and `reliable` has impacts on overall performance. More benchmarking could be done to quantify exactly how much.
  * Determining the best values for QoS options is highly dependent on the system the program is running on. I believe the scope of this project should be limited to identifying which QoS options are relevant, and leaving the fine tuning to the actual users of CycloneDDS.


### Communication Interface
Certainly, the inter-process communication interface that CycloneDDS uses to transmit its messages has a major impact on latency. A hierarchy of IPC interfaces can be established as follows:
1. Intra-process communication, such as direct function calls
2. Shared Memory
3. Network Stack through Loopback interface
4. Network Stack through 



## Sources
1. Blass, Tobias, et al. "Automatic Latency Management for ROS 2: Benefits, Challenges, and Open Problems." 2021 IEEE 27th Real-Time and Embedded Technology and Applications Symposium (RTAS). IEEE, 2021.
2. Kronauer, Tobias, et al. "Latency Analysis of ROS2 Multi-Node Systems." 2021 IEEE International Conference on Multisensor Fusion and Integration for Intelligent Systems (MFI). IEEE, 2021.
3. Maruyama, Yuya, Shinpei Kato, and Takuya Azumi. "Exploring the performance of ROS2." Proceedings of the 13th International Conference on Embedded Software. 2016.