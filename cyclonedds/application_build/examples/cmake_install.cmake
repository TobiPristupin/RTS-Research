# Install script for directory: /home/pi/Documents/cyclonedds/examples

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/pi/Programs")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/CycloneDDS/examples/helloworld" TYPE FILE FILES
    "/home/pi/Documents/cyclonedds/examples/helloworld/HelloWorldData.idl"
    "/home/pi/Documents/cyclonedds/examples/helloworld/publisher.c"
    "/home/pi/Documents/cyclonedds/examples/helloworld/subscriber.c"
    "/home/pi/Documents/cyclonedds/examples/helloworld/CMakeLists.txt"
    "/home/pi/Documents/cyclonedds/examples/helloworld/readme.rst"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/CycloneDDS/examples/roundtrip" TYPE FILE FILES
    "/home/pi/Documents/cyclonedds/examples/roundtrip/RoundTrip.idl"
    "/home/pi/Documents/cyclonedds/examples/roundtrip/ping.c"
    "/home/pi/Documents/cyclonedds/examples/roundtrip/pong.c"
    "/home/pi/Documents/cyclonedds/examples/roundtrip/CMakeLists.txt"
    "/home/pi/Documents/cyclonedds/examples/roundtrip/readme.rst"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/CycloneDDS/examples/throughput" TYPE FILE FILES
    "/home/pi/Documents/cyclonedds/examples/throughput/Throughput.idl"
    "/home/pi/Documents/cyclonedds/examples/throughput/publisher.c"
    "/home/pi/Documents/cyclonedds/examples/throughput/subscriber.c"
    "/home/pi/Documents/cyclonedds/examples/throughput/CMakeLists.txt"
    "/home/pi/Documents/cyclonedds/examples/throughput/readme.rst"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/pi/Documents/cyclonedds/application_build/examples/helloworld/cmake_install.cmake")
  include("/home/pi/Documents/cyclonedds/application_build/examples/roundtrip/cmake_install.cmake")
  include("/home/pi/Documents/cyclonedds/application_build/examples/throughput/cmake_install.cmake")

endif()

