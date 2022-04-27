# CMake generated Testfile for 
# Source directory: /home/pi/Documents/cyclonedds/src/core/xtests/rhc_torture
# Build directory: /home/pi/Documents/cyclonedds/build/src/core/xtests/rhc_torture
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(rhc_torture "/home/pi/Documents/cyclonedds/build/bin/rhc_torture" "314159265" "0" "5000" "0")
set_tests_properties(rhc_torture PROPERTIES  ENVIRONMENT "LD_LIBRARY_PATH=/home/pi/Documents/cyclonedds/build/lib::" TIMEOUT "20" _BACKTRACE_TRIPLES "/home/pi/Documents/cyclonedds/src/core/xtests/rhc_torture/CMakeLists.txt;29;add_test;/home/pi/Documents/cyclonedds/src/core/xtests/rhc_torture/CMakeLists.txt;0;")
