# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /home/pristu/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/213.6461.75/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/pristu/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/213.6461.75/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pristu/Documents/School/Gill/rts-research/cyclonedds

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pristu/Documents/School/Gill/rts-research/cyclonedds/cmake-build-debug

# Utility rule file for schema.

# Include any custom commands dependencies for this target.
include docs/CMakeFiles/schema.dir/compiler_depend.make

# Include the progress variables for this target.
include docs/CMakeFiles/schema.dir/progress.make

docs/CMakeFiles/schema: docs/cyclonedds.rnc
docs/CMakeFiles/schema: docs/cyclonedds.xsd
docs/CMakeFiles/schema: docs/manual/options.md

docs/cyclonedds.rnc: bin/ddsconf
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating cyclonedds.rnc, cyclonedds.xsd, manual/options.md"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/cmake-build-debug/docs && ../bin/ddsconf -f rnc -o /home/pristu/Documents/School/Gill/rts-research/cyclonedds/cmake-build-debug/docs/cyclonedds.rnc
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/cmake-build-debug/docs && ../bin/ddsconf -f xsd -o /home/pristu/Documents/School/Gill/rts-research/cyclonedds/cmake-build-debug/docs/cyclonedds.xsd
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/cmake-build-debug/docs && /home/pristu/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/213.6461.75/bin/cmake/linux/bin/cmake -E make_directory manual
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/cmake-build-debug/docs && ../bin/ddsconf -f md -o /home/pristu/Documents/School/Gill/rts-research/cyclonedds/cmake-build-debug/docs/manual/options.md

docs/cyclonedds.xsd: docs/cyclonedds.rnc
	@$(CMAKE_COMMAND) -E touch_nocreate docs/cyclonedds.xsd

docs/manual/options.md: docs/cyclonedds.rnc
	@$(CMAKE_COMMAND) -E touch_nocreate docs/manual/options.md

schema: docs/CMakeFiles/schema
schema: docs/cyclonedds.rnc
schema: docs/cyclonedds.xsd
schema: docs/manual/options.md
schema: docs/CMakeFiles/schema.dir/build.make
.PHONY : schema

# Rule to build all files generated by this target.
docs/CMakeFiles/schema.dir/build: schema
.PHONY : docs/CMakeFiles/schema.dir/build

docs/CMakeFiles/schema.dir/clean:
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/cmake-build-debug/docs && $(CMAKE_COMMAND) -P CMakeFiles/schema.dir/cmake_clean.cmake
.PHONY : docs/CMakeFiles/schema.dir/clean

docs/CMakeFiles/schema.dir/depend:
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pristu/Documents/School/Gill/rts-research/cyclonedds /home/pristu/Documents/School/Gill/rts-research/cyclonedds/docs /home/pristu/Documents/School/Gill/rts-research/cyclonedds/cmake-build-debug /home/pristu/Documents/School/Gill/rts-research/cyclonedds/cmake-build-debug/docs /home/pristu/Documents/School/Gill/rts-research/cyclonedds/cmake-build-debug/docs/CMakeFiles/schema.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : docs/CMakeFiles/schema.dir/depend

