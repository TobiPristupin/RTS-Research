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
CMAKE_BINARY_DIR = /home/pi/Documents/cyclonedds/build

# Include any dependencies generated for this target.
include src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/depend.make

# Include the progress variables for this target.
include src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/progress.make

# Include the compile flags for this target's objects.
include src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/flags.make

src/core/xtests/rhc_torture/RhcTypes.c: ../src/core/xtests/rhc_torture/RhcTypes.idl
src/core/xtests/rhc_torture/RhcTypes.c: bin/idlc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pi/Documents/cyclonedds/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating RhcTypes.c, RhcTypes.h"
	cd /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture && ../../../../bin/idlc -Wno-implicit-extensibility /home/pi/Documents/cyclonedds/src/core/xtests/rhc_torture/RhcTypes.idl

src/core/xtests/rhc_torture/RhcTypes.h: src/core/xtests/rhc_torture/RhcTypes.c
	@$(CMAKE_COMMAND) -E touch_nocreate src/core/xtests/rhc_torture/RhcTypes.h

src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/rhc_torture.c.o: src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/flags.make
src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/rhc_torture.c.o: ../src/core/xtests/rhc_torture/rhc_torture.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Documents/cyclonedds/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/rhc_torture.c.o"
	cd /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rhc_torture.dir/rhc_torture.c.o -c /home/pi/Documents/cyclonedds/src/core/xtests/rhc_torture/rhc_torture.c

src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/rhc_torture.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rhc_torture.dir/rhc_torture.c.i"
	cd /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pi/Documents/cyclonedds/src/core/xtests/rhc_torture/rhc_torture.c > CMakeFiles/rhc_torture.dir/rhc_torture.c.i

src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/rhc_torture.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rhc_torture.dir/rhc_torture.c.s"
	cd /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pi/Documents/cyclonedds/src/core/xtests/rhc_torture/rhc_torture.c -o CMakeFiles/rhc_torture.dir/rhc_torture.c.s

src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/RhcTypes.c.o: src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/flags.make
src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/RhcTypes.c.o: src/core/xtests/rhc_torture/RhcTypes.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Documents/cyclonedds/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/RhcTypes.c.o"
	cd /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rhc_torture.dir/RhcTypes.c.o -c /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture/RhcTypes.c

src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/RhcTypes.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rhc_torture.dir/RhcTypes.c.i"
	cd /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture/RhcTypes.c > CMakeFiles/rhc_torture.dir/RhcTypes.c.i

src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/RhcTypes.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rhc_torture.dir/RhcTypes.c.s"
	cd /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture/RhcTypes.c -o CMakeFiles/rhc_torture.dir/RhcTypes.c.s

# Object files for target rhc_torture
rhc_torture_OBJECTS = \
"CMakeFiles/rhc_torture.dir/rhc_torture.c.o" \
"CMakeFiles/rhc_torture.dir/RhcTypes.c.o"

# External object files for target rhc_torture
rhc_torture_EXTERNAL_OBJECTS =

bin/rhc_torture: src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/rhc_torture.c.o
bin/rhc_torture: src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/RhcTypes.c.o
bin/rhc_torture: src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/build.make
bin/rhc_torture: lib/libddsc.so.0.9.0
bin/rhc_torture: src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/Documents/cyclonedds/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable ../../../../bin/rhc_torture"
	cd /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rhc_torture.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/build: bin/rhc_torture

.PHONY : src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/build

src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/clean:
	cd /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture && $(CMAKE_COMMAND) -P CMakeFiles/rhc_torture.dir/cmake_clean.cmake
.PHONY : src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/clean

src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/depend: src/core/xtests/rhc_torture/RhcTypes.c
src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/depend: src/core/xtests/rhc_torture/RhcTypes.h
	cd /home/pi/Documents/cyclonedds/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/Documents/cyclonedds /home/pi/Documents/cyclonedds/src/core/xtests/rhc_torture /home/pi/Documents/cyclonedds/build /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/core/xtests/rhc_torture/CMakeFiles/rhc_torture.dir/depend

