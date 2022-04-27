# CMake generated Testfile for 
# Source directory: /home/pi/Documents/cyclonedds/src/security/core/tests
# Build directory: /home/pi/Documents/cyclonedds/build/src/security/core/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(CUnit_ddssec_fsm_create "/home/pi/Documents/cyclonedds/build/bin/cunit_security_core" "-s" "ddssec_fsm" "-t" "create")
set_tests_properties(CUnit_ddssec_fsm_create PROPERTIES  DISABLED "FALSE" ENVIRONMENT "LD_LIBRARY_PATH=/home/pi/Documents/cyclonedds/build/lib::" TIMEOUT "10" _BACKTRACE_TRIPLES "/home/pi/Documents/cyclonedds/cmake/Modules/CUnit.cmake;301;add_test;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;94;add_cunit_executable;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;0;")
add_test(CUnit_ddssec_fsm_multiple "/home/pi/Documents/cyclonedds/build/bin/cunit_security_core" "-s" "ddssec_fsm" "-t" "multiple")
set_tests_properties(CUnit_ddssec_fsm_multiple PROPERTIES  DISABLED "FALSE" ENVIRONMENT "LD_LIBRARY_PATH=/home/pi/Documents/cyclonedds/build/lib::" TIMEOUT "10" _BACKTRACE_TRIPLES "/home/pi/Documents/cyclonedds/cmake/Modules/CUnit.cmake;301;add_test;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;94;add_cunit_executable;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;0;")
add_test(CUnit_ddssec_fsm_timeout "/home/pi/Documents/cyclonedds/build/bin/cunit_security_core" "-s" "ddssec_fsm" "-t" "timeout")
set_tests_properties(CUnit_ddssec_fsm_timeout PROPERTIES  DISABLED "FALSE" ENVIRONMENT "LD_LIBRARY_PATH=/home/pi/Documents/cyclonedds/build/lib::" TIMEOUT "10" _BACKTRACE_TRIPLES "/home/pi/Documents/cyclonedds/cmake/Modules/CUnit.cmake;301;add_test;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;94;add_cunit_executable;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;0;")
add_test(CUnit_ddssec_fsm_double_timeout "/home/pi/Documents/cyclonedds/build/bin/cunit_security_core" "-s" "ddssec_fsm" "-t" "double_timeout")
set_tests_properties(CUnit_ddssec_fsm_double_timeout PROPERTIES  DISABLED "FALSE" ENVIRONMENT "LD_LIBRARY_PATH=/home/pi/Documents/cyclonedds/build/lib::" TIMEOUT "10" _BACKTRACE_TRIPLES "/home/pi/Documents/cyclonedds/cmake/Modules/CUnit.cmake;301;add_test;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;94;add_cunit_executable;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;0;")
add_test(CUnit_ddssec_fsm_parallel_timeout "/home/pi/Documents/cyclonedds/build/bin/cunit_security_core" "-s" "ddssec_fsm" "-t" "parallel_timeout")
set_tests_properties(CUnit_ddssec_fsm_parallel_timeout PROPERTIES  DISABLED "FALSE" ENVIRONMENT "LD_LIBRARY_PATH=/home/pi/Documents/cyclonedds/build/lib::" TIMEOUT "10" _BACKTRACE_TRIPLES "/home/pi/Documents/cyclonedds/cmake/Modules/CUnit.cmake;301;add_test;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;94;add_cunit_executable;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;0;")
add_test(CUnit_ddssec_fsm_delete_with_timeout "/home/pi/Documents/cyclonedds/build/bin/cunit_security_core" "-s" "ddssec_fsm" "-t" "delete_with_timeout")
set_tests_properties(CUnit_ddssec_fsm_delete_with_timeout PROPERTIES  DISABLED "FALSE" ENVIRONMENT "LD_LIBRARY_PATH=/home/pi/Documents/cyclonedds/build/lib::" TIMEOUT "10" _BACKTRACE_TRIPLES "/home/pi/Documents/cyclonedds/cmake/Modules/CUnit.cmake;301;add_test;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;94;add_cunit_executable;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;0;")
add_test(CUnit_ddssec_timed_cb_simple_test "/home/pi/Documents/cyclonedds/build/bin/cunit_security_core" "-s" "ddssec_timed_cb" "-t" "simple_test")
set_tests_properties(CUnit_ddssec_timed_cb_simple_test PROPERTIES  DISABLED "FALSE" ENVIRONMENT "LD_LIBRARY_PATH=/home/pi/Documents/cyclonedds/build/lib::" TIMEOUT "10" _BACKTRACE_TRIPLES "/home/pi/Documents/cyclonedds/cmake/Modules/CUnit.cmake;301;add_test;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;94;add_cunit_executable;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;0;")
add_test(CUnit_ddssec_timed_cb_simple_order "/home/pi/Documents/cyclonedds/build/bin/cunit_security_core" "-s" "ddssec_timed_cb" "-t" "simple_order")
set_tests_properties(CUnit_ddssec_timed_cb_simple_order PROPERTIES  DISABLED "FALSE" ENVIRONMENT "LD_LIBRARY_PATH=/home/pi/Documents/cyclonedds/build/lib::" TIMEOUT "10" _BACKTRACE_TRIPLES "/home/pi/Documents/cyclonedds/cmake/Modules/CUnit.cmake;301;add_test;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;94;add_cunit_executable;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;0;")
add_test(CUnit_ddssec_timed_cb_test_enabled_and_disabled "/home/pi/Documents/cyclonedds/build/bin/cunit_security_core" "-s" "ddssec_timed_cb" "-t" "test_enabled_and_disabled")
set_tests_properties(CUnit_ddssec_timed_cb_test_enabled_and_disabled PROPERTIES  DISABLED "FALSE" ENVIRONMENT "LD_LIBRARY_PATH=/home/pi/Documents/cyclonedds/build/lib::" TIMEOUT "10" _BACKTRACE_TRIPLES "/home/pi/Documents/cyclonedds/cmake/Modules/CUnit.cmake;301;add_test;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;94;add_cunit_executable;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;0;")
add_test(CUnit_ddssec_timed_cb_simple_test_with_future "/home/pi/Documents/cyclonedds/build/bin/cunit_security_core" "-s" "ddssec_timed_cb" "-t" "simple_test_with_future")
set_tests_properties(CUnit_ddssec_timed_cb_simple_test_with_future PROPERTIES  DISABLED "FALSE" ENVIRONMENT "LD_LIBRARY_PATH=/home/pi/Documents/cyclonedds/build/lib::" TIMEOUT "10" _BACKTRACE_TRIPLES "/home/pi/Documents/cyclonedds/cmake/Modules/CUnit.cmake;301;add_test;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;94;add_cunit_executable;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;0;")
add_test(CUnit_ddssec_timed_cb_test_multiple_dispatchers "/home/pi/Documents/cyclonedds/build/bin/cunit_security_core" "-s" "ddssec_timed_cb" "-t" "test_multiple_dispatchers")
set_tests_properties(CUnit_ddssec_timed_cb_test_multiple_dispatchers PROPERTIES  DISABLED "FALSE" ENVIRONMENT "LD_LIBRARY_PATH=/home/pi/Documents/cyclonedds/build/lib::" TIMEOUT "10" _BACKTRACE_TRIPLES "/home/pi/Documents/cyclonedds/cmake/Modules/CUnit.cmake;301;add_test;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;94;add_cunit_executable;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;0;")
add_test(CUnit_ddssec_timed_cb_test_create_dispatcher "/home/pi/Documents/cyclonedds/build/bin/cunit_security_core" "-s" "ddssec_timed_cb" "-t" "test_create_dispatcher")
set_tests_properties(CUnit_ddssec_timed_cb_test_create_dispatcher PROPERTIES  DISABLED "FALSE" ENVIRONMENT "LD_LIBRARY_PATH=/home/pi/Documents/cyclonedds/build/lib::" TIMEOUT "10" _BACKTRACE_TRIPLES "/home/pi/Documents/cyclonedds/cmake/Modules/CUnit.cmake;301;add_test;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;94;add_cunit_executable;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;0;")
add_test(CUnit_ddssec_timed_cb_test_remove_timer "/home/pi/Documents/cyclonedds/build/bin/cunit_security_core" "-s" "ddssec_timed_cb" "-t" "test_remove_timer")
set_tests_properties(CUnit_ddssec_timed_cb_test_remove_timer PROPERTIES  DISABLED "FALSE" ENVIRONMENT "LD_LIBRARY_PATH=/home/pi/Documents/cyclonedds/build/lib::" TIMEOUT "10" _BACKTRACE_TRIPLES "/home/pi/Documents/cyclonedds/cmake/Modules/CUnit.cmake;301;add_test;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;94;add_cunit_executable;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;0;")
add_test(CUnit_ddssec_security_utils_parse_xml_date "/home/pi/Documents/cyclonedds/build/bin/cunit_security_core" "-s" "ddssec_security_utils" "-t" "parse_xml_date")
set_tests_properties(CUnit_ddssec_security_utils_parse_xml_date PROPERTIES  DISABLED "FALSE" ENVIRONMENT "LD_LIBRARY_PATH=/home/pi/Documents/cyclonedds/build/lib::" TIMEOUT "10" _BACKTRACE_TRIPLES "/home/pi/Documents/cyclonedds/cmake/Modules/CUnit.cmake;301;add_test;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;94;add_cunit_executable;/home/pi/Documents/cyclonedds/src/security/core/tests/CMakeLists.txt;0;")
