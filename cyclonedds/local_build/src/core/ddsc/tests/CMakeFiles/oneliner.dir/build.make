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
include src/core/ddsc/tests/CMakeFiles/oneliner.dir/depend.make

# Include the progress variables for this target.
include src/core/ddsc/tests/CMakeFiles/oneliner.dir/progress.make

# Include the compile flags for this target's objects.
include src/core/ddsc/tests/CMakeFiles/oneliner.dir/flags.make

src/core/ddsc/tests/RoundTrip.c: ../src/core/ddsc/tests/RoundTrip.idl
src/core/ddsc/tests/RoundTrip.c: bin/idlc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating RoundTrip.c, RoundTrip.h"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && ../../../../bin/idlc /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/ddsc/tests/RoundTrip.idl

src/core/ddsc/tests/RoundTrip.h: src/core/ddsc/tests/RoundTrip.c
	@$(CMAKE_COMMAND) -E touch_nocreate src/core/ddsc/tests/RoundTrip.h

src/core/ddsc/tests/Space.c: ../src/core/ddsc/tests/Space.idl
src/core/ddsc/tests/Space.c: bin/idlc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating Space.c, Space.h"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && ../../../../bin/idlc -Wno-implicit-extensibility /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/ddsc/tests/Space.idl

src/core/ddsc/tests/Space.h: src/core/ddsc/tests/Space.c
	@$(CMAKE_COMMAND) -E touch_nocreate src/core/ddsc/tests/Space.h

src/core/ddsc/tests/CMakeFiles/oneliner.dir/oneliner.c.o: src/core/ddsc/tests/CMakeFiles/oneliner.dir/flags.make
src/core/ddsc/tests/CMakeFiles/oneliner.dir/oneliner.c.o: ../src/core/ddsc/tests/oneliner.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/core/ddsc/tests/CMakeFiles/oneliner.dir/oneliner.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/oneliner.dir/oneliner.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/ddsc/tests/oneliner.c

src/core/ddsc/tests/CMakeFiles/oneliner.dir/oneliner.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/oneliner.dir/oneliner.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/ddsc/tests/oneliner.c > CMakeFiles/oneliner.dir/oneliner.c.i

src/core/ddsc/tests/CMakeFiles/oneliner.dir/oneliner.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/oneliner.dir/oneliner.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/ddsc/tests/oneliner.c -o CMakeFiles/oneliner.dir/oneliner.c.s

src/core/ddsc/tests/CMakeFiles/oneliner.dir/test_oneliner.c.o: src/core/ddsc/tests/CMakeFiles/oneliner.dir/flags.make
src/core/ddsc/tests/CMakeFiles/oneliner.dir/test_oneliner.c.o: ../src/core/ddsc/tests/test_oneliner.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object src/core/ddsc/tests/CMakeFiles/oneliner.dir/test_oneliner.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -o CMakeFiles/oneliner.dir/test_oneliner.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/ddsc/tests/test_oneliner.c

src/core/ddsc/tests/CMakeFiles/oneliner.dir/test_oneliner.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/oneliner.dir/test_oneliner.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/ddsc/tests/test_oneliner.c > CMakeFiles/oneliner.dir/test_oneliner.c.i

src/core/ddsc/tests/CMakeFiles/oneliner.dir/test_oneliner.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/oneliner.dir/test_oneliner.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/ddsc/tests/test_oneliner.c -o CMakeFiles/oneliner.dir/test_oneliner.c.s

src/core/ddsc/tests/CMakeFiles/oneliner.dir/test_util.c.o: src/core/ddsc/tests/CMakeFiles/oneliner.dir/flags.make
src/core/ddsc/tests/CMakeFiles/oneliner.dir/test_util.c.o: ../src/core/ddsc/tests/test_util.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object src/core/ddsc/tests/CMakeFiles/oneliner.dir/test_util.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -o CMakeFiles/oneliner.dir/test_util.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/ddsc/tests/test_util.c

src/core/ddsc/tests/CMakeFiles/oneliner.dir/test_util.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/oneliner.dir/test_util.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/ddsc/tests/test_util.c > CMakeFiles/oneliner.dir/test_util.c.i

src/core/ddsc/tests/CMakeFiles/oneliner.dir/test_util.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/oneliner.dir/test_util.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/ddsc/tests/test_util.c -o CMakeFiles/oneliner.dir/test_util.c.s

src/core/ddsc/tests/CMakeFiles/oneliner.dir/RoundTrip.c.o: src/core/ddsc/tests/CMakeFiles/oneliner.dir/flags.make
src/core/ddsc/tests/CMakeFiles/oneliner.dir/RoundTrip.c.o: src/core/ddsc/tests/RoundTrip.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object src/core/ddsc/tests/CMakeFiles/oneliner.dir/RoundTrip.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/oneliner.dir/RoundTrip.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests/RoundTrip.c

src/core/ddsc/tests/CMakeFiles/oneliner.dir/RoundTrip.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/oneliner.dir/RoundTrip.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests/RoundTrip.c > CMakeFiles/oneliner.dir/RoundTrip.c.i

src/core/ddsc/tests/CMakeFiles/oneliner.dir/RoundTrip.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/oneliner.dir/RoundTrip.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests/RoundTrip.c -o CMakeFiles/oneliner.dir/RoundTrip.c.s

src/core/ddsc/tests/CMakeFiles/oneliner.dir/Space.c.o: src/core/ddsc/tests/CMakeFiles/oneliner.dir/flags.make
src/core/ddsc/tests/CMakeFiles/oneliner.dir/Space.c.o: src/core/ddsc/tests/Space.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object src/core/ddsc/tests/CMakeFiles/oneliner.dir/Space.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/oneliner.dir/Space.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests/Space.c

src/core/ddsc/tests/CMakeFiles/oneliner.dir/Space.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/oneliner.dir/Space.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests/Space.c > CMakeFiles/oneliner.dir/Space.c.i

src/core/ddsc/tests/CMakeFiles/oneliner.dir/Space.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/oneliner.dir/Space.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests/Space.c -o CMakeFiles/oneliner.dir/Space.c.s

# Object files for target oneliner
oneliner_OBJECTS = \
"CMakeFiles/oneliner.dir/oneliner.c.o" \
"CMakeFiles/oneliner.dir/test_oneliner.c.o" \
"CMakeFiles/oneliner.dir/test_util.c.o" \
"CMakeFiles/oneliner.dir/RoundTrip.c.o" \
"CMakeFiles/oneliner.dir/Space.c.o"

# External object files for target oneliner
oneliner_EXTERNAL_OBJECTS =

bin/oneliner: src/core/ddsc/tests/CMakeFiles/oneliner.dir/oneliner.c.o
bin/oneliner: src/core/ddsc/tests/CMakeFiles/oneliner.dir/test_oneliner.c.o
bin/oneliner: src/core/ddsc/tests/CMakeFiles/oneliner.dir/test_util.c.o
bin/oneliner: src/core/ddsc/tests/CMakeFiles/oneliner.dir/RoundTrip.c.o
bin/oneliner: src/core/ddsc/tests/CMakeFiles/oneliner.dir/Space.c.o
bin/oneliner: src/core/ddsc/tests/CMakeFiles/oneliner.dir/build.make
bin/oneliner: lib/libddsc.so.0.9.0
bin/oneliner: src/core/ddsc/tests/CMakeFiles/oneliner.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable ../../../../bin/oneliner"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/oneliner.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/core/ddsc/tests/CMakeFiles/oneliner.dir/build: bin/oneliner

.PHONY : src/core/ddsc/tests/CMakeFiles/oneliner.dir/build

src/core/ddsc/tests/CMakeFiles/oneliner.dir/clean:
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && $(CMAKE_COMMAND) -P CMakeFiles/oneliner.dir/cmake_clean.cmake
.PHONY : src/core/ddsc/tests/CMakeFiles/oneliner.dir/clean

src/core/ddsc/tests/CMakeFiles/oneliner.dir/depend: src/core/ddsc/tests/RoundTrip.c
src/core/ddsc/tests/CMakeFiles/oneliner.dir/depend: src/core/ddsc/tests/RoundTrip.h
src/core/ddsc/tests/CMakeFiles/oneliner.dir/depend: src/core/ddsc/tests/Space.c
src/core/ddsc/tests/CMakeFiles/oneliner.dir/depend: src/core/ddsc/tests/Space.h
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pristu/Documents/School/Gill/rts-research/cyclonedds /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/ddsc/tests /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests/CMakeFiles/oneliner.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/core/ddsc/tests/CMakeFiles/oneliner.dir/depend

