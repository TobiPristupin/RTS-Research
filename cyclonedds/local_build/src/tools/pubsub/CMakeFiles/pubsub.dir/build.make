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
CMAKE_SOURCE_DIR = /home/pristu/Documents/School/Gill/rts-research/cyclonedds

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build

# Include any dependencies generated for this target.
include src/tools/pubsub/CMakeFiles/pubsub.dir/depend.make

# Include the progress variables for this target.
include src/tools/pubsub/CMakeFiles/pubsub.dir/progress.make

# Include the compile flags for this target's objects.
include src/tools/pubsub/CMakeFiles/pubsub.dir/flags.make

src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o: src/tools/pubsub/CMakeFiles/pubsub.dir/flags.make
src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o: ../src/tools/pubsub/pubsub.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pubsub.dir/pubsub.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/pubsub/pubsub.c

src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pubsub.dir/pubsub.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/pubsub/pubsub.c > CMakeFiles/pubsub.dir/pubsub.c.i

src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pubsub.dir/pubsub.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/pubsub/pubsub.c -o CMakeFiles/pubsub.dir/pubsub.c.s

src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o: src/tools/pubsub/CMakeFiles/pubsub.dir/flags.make
src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o: ../src/tools/pubsub/common.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pubsub.dir/common.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/pubsub/common.c

src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pubsub.dir/common.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/pubsub/common.c > CMakeFiles/pubsub.dir/common.c.i

src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pubsub.dir/common.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/pubsub/common.c -o CMakeFiles/pubsub.dir/common.c.s

src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o: src/tools/pubsub/CMakeFiles/pubsub.dir/flags.make
src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o: ../src/tools/pubsub/testtype.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pubsub.dir/testtype.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/pubsub/testtype.c

src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pubsub.dir/testtype.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/pubsub/testtype.c > CMakeFiles/pubsub.dir/testtype.c.i

src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pubsub.dir/testtype.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/pubsub/testtype.c -o CMakeFiles/pubsub.dir/testtype.c.s

src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o: src/tools/pubsub/CMakeFiles/pubsub.dir/flags.make
src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o: ../src/tools/pubsub/porting.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pubsub.dir/porting.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/pubsub/porting.c

src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pubsub.dir/porting.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/pubsub/porting.c > CMakeFiles/pubsub.dir/porting.c.i

src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pubsub.dir/porting.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/pubsub/porting.c -o CMakeFiles/pubsub.dir/porting.c.s

# Object files for target pubsub
pubsub_OBJECTS = \
"CMakeFiles/pubsub.dir/pubsub.c.o" \
"CMakeFiles/pubsub.dir/common.c.o" \
"CMakeFiles/pubsub.dir/testtype.c.o" \
"CMakeFiles/pubsub.dir/porting.c.o"

# External object files for target pubsub
pubsub_EXTERNAL_OBJECTS =

bin/pubsub: src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o
bin/pubsub: src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o
bin/pubsub: src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o
bin/pubsub: src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o
bin/pubsub: src/tools/pubsub/CMakeFiles/pubsub.dir/build.make
bin/pubsub: lib/libddsc.so.0.9.0
bin/pubsub: src/tools/pubsub/CMakeFiles/pubsub.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable ../../../bin/pubsub"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/pubsub && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pubsub.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/tools/pubsub/CMakeFiles/pubsub.dir/build: bin/pubsub

.PHONY : src/tools/pubsub/CMakeFiles/pubsub.dir/build

src/tools/pubsub/CMakeFiles/pubsub.dir/clean:
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/pubsub && $(CMAKE_COMMAND) -P CMakeFiles/pubsub.dir/cmake_clean.cmake
.PHONY : src/tools/pubsub/CMakeFiles/pubsub.dir/clean

src/tools/pubsub/CMakeFiles/pubsub.dir/depend:
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pristu/Documents/School/Gill/rts-research/cyclonedds /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/pubsub /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/pubsub /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/pubsub/CMakeFiles/pubsub.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/tools/pubsub/CMakeFiles/pubsub.dir/depend

