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
include src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/depend.make

# Include the progress variables for this target.
include src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/progress.make

# Include the compile flags for this target's objects.
include src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/flags.make

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/cunit_idlc.c.o: src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/flags.make
src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/cunit_idlc.c.o: src/tools/idlc/tests/cunit_idlc.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/cunit_idlc.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) -DHAVE_ENABLE_JUNIT_XML $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cunit_idlc.dir/cunit_idlc.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests/cunit_idlc.c

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/cunit_idlc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cunit_idlc.dir/cunit_idlc.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) -DHAVE_ENABLE_JUNIT_XML $(C_INCLUDES) $(C_FLAGS) -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests/cunit_idlc.c > CMakeFiles/cunit_idlc.dir/cunit_idlc.c.i

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/cunit_idlc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cunit_idlc.dir/cunit_idlc.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) -DHAVE_ENABLE_JUNIT_XML $(C_INCLUDES) $(C_FLAGS) -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests/cunit_idlc.c -o CMakeFiles/cunit_idlc.dir/cunit_idlc.c.s

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/plugin.c.o: src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/flags.make
src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/plugin.c.o: ../src/tools/idlc/src/plugin.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/plugin.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -o CMakeFiles/cunit_idlc.dir/__/src/plugin.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/src/plugin.c

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/plugin.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cunit_idlc.dir/__/src/plugin.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/src/plugin.c > CMakeFiles/cunit_idlc.dir/__/src/plugin.c.i

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/plugin.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cunit_idlc.dir/__/src/plugin.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/src/plugin.c -o CMakeFiles/cunit_idlc.dir/__/src/plugin.c.s

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/generator.c.o: src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/flags.make
src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/generator.c.o: ../src/tools/idlc/src/generator.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/generator.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -o CMakeFiles/cunit_idlc.dir/__/src/generator.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/src/generator.c

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/generator.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cunit_idlc.dir/__/src/generator.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/src/generator.c > CMakeFiles/cunit_idlc.dir/__/src/generator.c.i

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/generator.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cunit_idlc.dir/__/src/generator.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/src/generator.c -o CMakeFiles/cunit_idlc.dir/__/src/generator.c.s

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/descriptor.c.o: src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/flags.make
src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/descriptor.c.o: ../src/tools/idlc/src/descriptor.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/descriptor.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -o CMakeFiles/cunit_idlc.dir/__/src/descriptor.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/src/descriptor.c

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/descriptor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cunit_idlc.dir/__/src/descriptor.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/src/descriptor.c > CMakeFiles/cunit_idlc.dir/__/src/descriptor.c.i

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/descriptor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cunit_idlc.dir/__/src/descriptor.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/src/descriptor.c -o CMakeFiles/cunit_idlc.dir/__/src/descriptor.c.s

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/types.c.o: src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/flags.make
src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/types.c.o: ../src/tools/idlc/src/types.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/types.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -o CMakeFiles/cunit_idlc.dir/__/src/types.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/src/types.c

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/types.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cunit_idlc.dir/__/src/types.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/src/types.c > CMakeFiles/cunit_idlc.dir/__/src/types.c.i

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/types.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cunit_idlc.dir/__/src/types.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/src/types.c -o CMakeFiles/cunit_idlc.dir/__/src/types.c.s

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/test_common.c.o: src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/flags.make
src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/test_common.c.o: ../src/tools/idlc/tests/test_common.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/test_common.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -o CMakeFiles/cunit_idlc.dir/test_common.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/tests/test_common.c

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/test_common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cunit_idlc.dir/test_common.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/tests/test_common.c > CMakeFiles/cunit_idlc.dir/test_common.c.i

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/test_common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cunit_idlc.dir/test_common.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/tests/test_common.c -o CMakeFiles/cunit_idlc.dir/test_common.c.s

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/descriptor.c.o: src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/flags.make
src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/descriptor.c.o: ../src/tools/idlc/tests/descriptor.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/descriptor.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -o CMakeFiles/cunit_idlc.dir/descriptor.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/tests/descriptor.c

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/descriptor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cunit_idlc.dir/descriptor.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/tests/descriptor.c > CMakeFiles/cunit_idlc.dir/descriptor.c.i

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/descriptor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cunit_idlc.dir/descriptor.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/tests/descriptor.c -o CMakeFiles/cunit_idlc.dir/descriptor.c.s

# Object files for target cunit_idlc
cunit_idlc_OBJECTS = \
"CMakeFiles/cunit_idlc.dir/cunit_idlc.c.o" \
"CMakeFiles/cunit_idlc.dir/__/src/plugin.c.o" \
"CMakeFiles/cunit_idlc.dir/__/src/generator.c.o" \
"CMakeFiles/cunit_idlc.dir/__/src/descriptor.c.o" \
"CMakeFiles/cunit_idlc.dir/__/src/types.c.o" \
"CMakeFiles/cunit_idlc.dir/test_common.c.o" \
"CMakeFiles/cunit_idlc.dir/descriptor.c.o"

# External object files for target cunit_idlc
cunit_idlc_EXTERNAL_OBJECTS =

bin/cunit_idlc: src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/cunit_idlc.c.o
bin/cunit_idlc: src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/plugin.c.o
bin/cunit_idlc: src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/generator.c.o
bin/cunit_idlc: src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/descriptor.c.o
bin/cunit_idlc: src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/__/src/types.c.o
bin/cunit_idlc: src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/test_common.c.o
bin/cunit_idlc: src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/descriptor.c.o
bin/cunit_idlc: src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/build.make
bin/cunit_idlc: /usr/lib/x86_64-linux-gnu/libcunit.so
bin/cunit_idlc: lib/libcycloneddsidl.so.0.9.0
bin/cunit_idlc: lib/libddsc.so.0.9.0
bin/cunit_idlc: src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable ../../../../bin/cunit_idlc"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cunit_idlc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/build: bin/cunit_idlc

.PHONY : src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/build

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/clean:
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests && $(CMAKE_COMMAND) -P CMakeFiles/cunit_idlc.dir/cmake_clean.cmake
.PHONY : src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/clean

src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/depend:
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pristu/Documents/School/Gill/rts-research/cyclonedds /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/tools/idlc/tests /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/tools/idlc/tests/CMakeFiles/cunit_idlc.dir/depend

