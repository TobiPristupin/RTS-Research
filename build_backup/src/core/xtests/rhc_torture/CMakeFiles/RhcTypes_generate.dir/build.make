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

# Utility rule file for RhcTypes_generate.

# Include the progress variables for this target.
include src/core/xtests/rhc_torture/CMakeFiles/RhcTypes_generate.dir/progress.make

src/core/xtests/rhc_torture/CMakeFiles/RhcTypes_generate: src/core/xtests/rhc_torture/RhcTypes.c
src/core/xtests/rhc_torture/CMakeFiles/RhcTypes_generate: src/core/xtests/rhc_torture/RhcTypes.c
src/core/xtests/rhc_torture/CMakeFiles/RhcTypes_generate: src/core/xtests/rhc_torture/RhcTypes.h


src/core/xtests/rhc_torture/RhcTypes.c: ../src/core/xtests/rhc_torture/RhcTypes.idl
src/core/xtests/rhc_torture/RhcTypes.c: bin/idlc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pi/Documents/cyclonedds/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating RhcTypes.c, RhcTypes.h"
	cd /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture && ../../../../bin/idlc -Wno-implicit-extensibility /home/pi/Documents/cyclonedds/src/core/xtests/rhc_torture/RhcTypes.idl

src/core/xtests/rhc_torture/RhcTypes.h: src/core/xtests/rhc_torture/RhcTypes.c
	@$(CMAKE_COMMAND) -E touch_nocreate src/core/xtests/rhc_torture/RhcTypes.h

RhcTypes_generate: src/core/xtests/rhc_torture/CMakeFiles/RhcTypes_generate
RhcTypes_generate: src/core/xtests/rhc_torture/RhcTypes.c
RhcTypes_generate: src/core/xtests/rhc_torture/RhcTypes.h
RhcTypes_generate: src/core/xtests/rhc_torture/CMakeFiles/RhcTypes_generate.dir/build.make

.PHONY : RhcTypes_generate

# Rule to build all files generated by this target.
src/core/xtests/rhc_torture/CMakeFiles/RhcTypes_generate.dir/build: RhcTypes_generate

.PHONY : src/core/xtests/rhc_torture/CMakeFiles/RhcTypes_generate.dir/build

src/core/xtests/rhc_torture/CMakeFiles/RhcTypes_generate.dir/clean:
	cd /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture && $(CMAKE_COMMAND) -P CMakeFiles/RhcTypes_generate.dir/cmake_clean.cmake
.PHONY : src/core/xtests/rhc_torture/CMakeFiles/RhcTypes_generate.dir/clean

src/core/xtests/rhc_torture/CMakeFiles/RhcTypes_generate.dir/depend:
	cd /home/pi/Documents/cyclonedds/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/Documents/cyclonedds /home/pi/Documents/cyclonedds/src/core/xtests/rhc_torture /home/pi/Documents/cyclonedds/build /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture/CMakeFiles/RhcTypes_generate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/core/xtests/rhc_torture/CMakeFiles/RhcTypes_generate.dir/depend

