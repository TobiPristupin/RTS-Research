# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pi/Documents/cyclonedds

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/Documents/cyclonedds/application_build

# Include any dependencies generated for this target.
include examples/throughput/CMakeFiles/ThroughputSubscriber.dir/depend.make

# Include the progress variables for this target.
include examples/throughput/CMakeFiles/ThroughputSubscriber.dir/progress.make

# Include the compile flags for this target's objects.
include examples/throughput/CMakeFiles/ThroughputSubscriber.dir/flags.make

examples/throughput/Throughput.c: ../examples/throughput/Throughput.idl
examples/throughput/Throughput.c: bin/idlc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pi/Documents/cyclonedds/application_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating Throughput.c, Throughput.h"
	cd /home/pi/Documents/cyclonedds/application_build/examples/throughput && ../../bin/idlc /home/pi/Documents/cyclonedds/examples/throughput/Throughput.idl

examples/throughput/Throughput.h: examples/throughput/Throughput.c
	@$(CMAKE_COMMAND) -E touch_nocreate examples/throughput/Throughput.h

examples/throughput/CMakeFiles/ThroughputSubscriber.dir/subscriber.c.o: examples/throughput/CMakeFiles/ThroughputSubscriber.dir/flags.make
examples/throughput/CMakeFiles/ThroughputSubscriber.dir/subscriber.c.o: ../examples/throughput/subscriber.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Documents/cyclonedds/application_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object examples/throughput/CMakeFiles/ThroughputSubscriber.dir/subscriber.c.o"
	cd /home/pi/Documents/cyclonedds/application_build/examples/throughput && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ThroughputSubscriber.dir/subscriber.c.o -c /home/pi/Documents/cyclonedds/examples/throughput/subscriber.c

examples/throughput/CMakeFiles/ThroughputSubscriber.dir/subscriber.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ThroughputSubscriber.dir/subscriber.c.i"
	cd /home/pi/Documents/cyclonedds/application_build/examples/throughput && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pi/Documents/cyclonedds/examples/throughput/subscriber.c > CMakeFiles/ThroughputSubscriber.dir/subscriber.c.i

examples/throughput/CMakeFiles/ThroughputSubscriber.dir/subscriber.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ThroughputSubscriber.dir/subscriber.c.s"
	cd /home/pi/Documents/cyclonedds/application_build/examples/throughput && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pi/Documents/cyclonedds/examples/throughput/subscriber.c -o CMakeFiles/ThroughputSubscriber.dir/subscriber.c.s

examples/throughput/CMakeFiles/ThroughputSubscriber.dir/Throughput.c.o: examples/throughput/CMakeFiles/ThroughputSubscriber.dir/flags.make
examples/throughput/CMakeFiles/ThroughputSubscriber.dir/Throughput.c.o: examples/throughput/Throughput.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Documents/cyclonedds/application_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object examples/throughput/CMakeFiles/ThroughputSubscriber.dir/Throughput.c.o"
	cd /home/pi/Documents/cyclonedds/application_build/examples/throughput && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ThroughputSubscriber.dir/Throughput.c.o -c /home/pi/Documents/cyclonedds/application_build/examples/throughput/Throughput.c

examples/throughput/CMakeFiles/ThroughputSubscriber.dir/Throughput.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ThroughputSubscriber.dir/Throughput.c.i"
	cd /home/pi/Documents/cyclonedds/application_build/examples/throughput && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pi/Documents/cyclonedds/application_build/examples/throughput/Throughput.c > CMakeFiles/ThroughputSubscriber.dir/Throughput.c.i

examples/throughput/CMakeFiles/ThroughputSubscriber.dir/Throughput.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ThroughputSubscriber.dir/Throughput.c.s"
	cd /home/pi/Documents/cyclonedds/application_build/examples/throughput && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pi/Documents/cyclonedds/application_build/examples/throughput/Throughput.c -o CMakeFiles/ThroughputSubscriber.dir/Throughput.c.s

# Object files for target ThroughputSubscriber
ThroughputSubscriber_OBJECTS = \
"CMakeFiles/ThroughputSubscriber.dir/subscriber.c.o" \
"CMakeFiles/ThroughputSubscriber.dir/Throughput.c.o"

# External object files for target ThroughputSubscriber
ThroughputSubscriber_EXTERNAL_OBJECTS =

bin/ThroughputSubscriber: examples/throughput/CMakeFiles/ThroughputSubscriber.dir/subscriber.c.o
bin/ThroughputSubscriber: examples/throughput/CMakeFiles/ThroughputSubscriber.dir/Throughput.c.o
bin/ThroughputSubscriber: examples/throughput/CMakeFiles/ThroughputSubscriber.dir/build.make
bin/ThroughputSubscriber: lib/libddsc.so.0.9.0
bin/ThroughputSubscriber: examples/throughput/CMakeFiles/ThroughputSubscriber.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/Documents/cyclonedds/application_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable ../../bin/ThroughputSubscriber"
	cd /home/pi/Documents/cyclonedds/application_build/examples/throughput && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ThroughputSubscriber.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/throughput/CMakeFiles/ThroughputSubscriber.dir/build: bin/ThroughputSubscriber

.PHONY : examples/throughput/CMakeFiles/ThroughputSubscriber.dir/build

examples/throughput/CMakeFiles/ThroughputSubscriber.dir/clean:
	cd /home/pi/Documents/cyclonedds/application_build/examples/throughput && $(CMAKE_COMMAND) -P CMakeFiles/ThroughputSubscriber.dir/cmake_clean.cmake
.PHONY : examples/throughput/CMakeFiles/ThroughputSubscriber.dir/clean

examples/throughput/CMakeFiles/ThroughputSubscriber.dir/depend: examples/throughput/Throughput.c
examples/throughput/CMakeFiles/ThroughputSubscriber.dir/depend: examples/throughput/Throughput.h
	cd /home/pi/Documents/cyclonedds/application_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/Documents/cyclonedds /home/pi/Documents/cyclonedds/examples/throughput /home/pi/Documents/cyclonedds/application_build /home/pi/Documents/cyclonedds/application_build/examples/throughput /home/pi/Documents/cyclonedds/application_build/examples/throughput/CMakeFiles/ThroughputSubscriber.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/throughput/CMakeFiles/ThroughputSubscriber.dir/depend

