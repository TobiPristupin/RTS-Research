# CMake generated Testfile for 
# Source directory: /home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/xtests/rhc_torture
# Build directory: /home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/src/core/xtests/rhc_torture
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(rhc_torture "/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/bin/rhc_torture" "314159265" "0" "5000" "0")
set_tests_properties(rhc_torture PROPERTIES  ENVIRONMENT "LD_LIBRARY_PATH=/home/pristu/Documents/School/Gill/rts-research/cyclonedds/local_build/lib::" TIMEOUT "20" _BACKTRACE_TRIPLES "/home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/xtests/rhc_torture/CMakeLists.txt;29;add_test;/home/pristu/Documents/School/Gill/rts-research/cyclonedds/src/core/xtests/rhc_torture/CMakeLists.txt;0;")
