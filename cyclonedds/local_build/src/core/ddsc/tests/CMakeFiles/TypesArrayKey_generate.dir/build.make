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

# Utility rule file for TypesArrayKey_generate.

# Include the progress variables for this target.
include src/core/ddsc/tests/CMakeFiles/TypesArrayKey_generate.dir/progress.make

src/core/ddsc/tests/CMakeFiles/TypesArrayKey_generate: src/core/ddsc/tests/TypesArrayKey.c
src/core/ddsc/tests/CMakeFiles/TypesArrayKey_generate: src/core/ddsc/tests/TypesArrayKey.c
src/core/ddsc/tests/CMakeFiles/TypesArrayKey_generate: src/core/ddsc/tests/TypesArrayKey.h


src/core/ddsc/tests/TypesArrayKey.c: ../src/core/ddsc/tests/TypesArrayKey.idl
src/core/ddsc/tests/TypesArrayKey.c: bin/idlc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating TypesArrayKey.c, TypesArrayKey.h"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && ../../../../bin/idlc -Wno-implicit-extensibility /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/ddsc/tests/TypesArrayKey.idl

src/core/ddsc/tests/TypesArrayKey.h: src/core/ddsc/tests/TypesArrayKey.c
	@$(CMAKE_COMMAND) -E touch_nocreate src/core/ddsc/tests/TypesArrayKey.h

TypesArrayKey_generate: src/core/ddsc/tests/CMakeFiles/TypesArrayKey_generate
TypesArrayKey_generate: src/core/ddsc/tests/TypesArrayKey.c
TypesArrayKey_generate: src/core/ddsc/tests/TypesArrayKey.h
TypesArrayKey_generate: src/core/ddsc/tests/CMakeFiles/TypesArrayKey_generate.dir/build.make

.PHONY : TypesArrayKey_generate

# Rule to build all files generated by this target.
src/core/ddsc/tests/CMakeFiles/TypesArrayKey_generate.dir/build: TypesArrayKey_generate

.PHONY : src/core/ddsc/tests/CMakeFiles/TypesArrayKey_generate.dir/build

src/core/ddsc/tests/CMakeFiles/TypesArrayKey_generate.dir/clean:
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests && $(CMAKE_COMMAND) -P CMakeFiles/TypesArrayKey_generate.dir/cmake_clean.cmake
.PHONY : src/core/ddsc/tests/CMakeFiles/TypesArrayKey_generate.dir/clean

src/core/ddsc/tests/CMakeFiles/TypesArrayKey_generate.dir/depend:
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pristu/Documents/School/Gill/rts-research/cyclonedds /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/ddsc/tests /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/ddsc/tests/CMakeFiles/TypesArrayKey_generate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/core/ddsc/tests/CMakeFiles/TypesArrayKey_generate.dir/depend

