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
include src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/depend.make

# Include the progress variables for this target.
include src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/progress.make

# Include the compile flags for this target's objects.
include src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/flags.make

src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/common/authentication_wrapper.c.o: src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/flags.make
src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/common/authentication_wrapper.c.o: ../src/security/core/tests/common/authentication_wrapper.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/common/authentication_wrapper.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/security/core/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dds_security_authentication_wrapper.dir/common/authentication_wrapper.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/security/core/tests/common/authentication_wrapper.c

src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/common/authentication_wrapper.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dds_security_authentication_wrapper.dir/common/authentication_wrapper.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/security/core/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/security/core/tests/common/authentication_wrapper.c > CMakeFiles/dds_security_authentication_wrapper.dir/common/authentication_wrapper.c.i

src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/common/authentication_wrapper.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dds_security_authentication_wrapper.dir/common/authentication_wrapper.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/security/core/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/security/core/tests/common/authentication_wrapper.c -o CMakeFiles/dds_security_authentication_wrapper.dir/common/authentication_wrapper.c.s

src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/common/plugin_wrapper_msg_q.c.o: src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/flags.make
src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/common/plugin_wrapper_msg_q.c.o: ../src/security/core/tests/common/plugin_wrapper_msg_q.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/common/plugin_wrapper_msg_q.c.o"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/security/core/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dds_security_authentication_wrapper.dir/common/plugin_wrapper_msg_q.c.o -c /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/security/core/tests/common/plugin_wrapper_msg_q.c

src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/common/plugin_wrapper_msg_q.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dds_security_authentication_wrapper.dir/common/plugin_wrapper_msg_q.c.i"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/security/core/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/security/core/tests/common/plugin_wrapper_msg_q.c > CMakeFiles/dds_security_authentication_wrapper.dir/common/plugin_wrapper_msg_q.c.i

src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/common/plugin_wrapper_msg_q.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dds_security_authentication_wrapper.dir/common/plugin_wrapper_msg_q.c.s"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/security/core/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/security/core/tests/common/plugin_wrapper_msg_q.c -o CMakeFiles/dds_security_authentication_wrapper.dir/common/plugin_wrapper_msg_q.c.s

# Object files for target dds_security_authentication_wrapper
dds_security_authentication_wrapper_OBJECTS = \
"CMakeFiles/dds_security_authentication_wrapper.dir/common/authentication_wrapper.c.o" \
"CMakeFiles/dds_security_authentication_wrapper.dir/common/plugin_wrapper_msg_q.c.o"

# External object files for target dds_security_authentication_wrapper
dds_security_authentication_wrapper_EXTERNAL_OBJECTS =

src/security/core/tests/libdds_security_authentication_wrapper.so: src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/common/authentication_wrapper.c.o
src/security/core/tests/libdds_security_authentication_wrapper.so: src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/common/plugin_wrapper_msg_q.c.o
src/security/core/tests/libdds_security_authentication_wrapper.so: src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/build.make
src/security/core/tests/libdds_security_authentication_wrapper.so: /usr/lib/x86_64-linux-gnu/libcunit.so
src/security/core/tests/libdds_security_authentication_wrapper.so: lib/libdds_security_auth.so
src/security/core/tests/libdds_security_authentication_wrapper.so: lib/libddsc.so.0.9.0
src/security/core/tests/libdds_security_authentication_wrapper.so: /usr/lib/x86_64-linux-gnu/libssl.so
src/security/core/tests/libdds_security_authentication_wrapper.so: /usr/lib/x86_64-linux-gnu/libcrypto.so
src/security/core/tests/libdds_security_authentication_wrapper.so: src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C shared library libdds_security_authentication_wrapper.so"
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/security/core/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dds_security_authentication_wrapper.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/build: src/security/core/tests/libdds_security_authentication_wrapper.so

.PHONY : src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/build

src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/clean:
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/security/core/tests && $(CMAKE_COMMAND) -P CMakeFiles/dds_security_authentication_wrapper.dir/cmake_clean.cmake
.PHONY : src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/clean

src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/depend:
	cd /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pristu/Documents/School/Gill/rts-research/cyclonedds /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/security/core/tests /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/security/core/tests /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/security/core/tests/CMakeFiles/dds_security_authentication_wrapper.dir/depend

