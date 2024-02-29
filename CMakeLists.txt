set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR armv71)
set(toolchainpath /usr/local/oecore-x86_64/sysroots)
set(CMAKE_C_COMPILER ${toolchainpath}/x86_64-nilrtsdk-linux/usr/bin/arm-nilrt-linux-gnueabi/arm-nilrt-linux-gnueabi-gcc)
set(CMAKE_CXX_COMPILER ${toolchainpath}/x86_64-nilrtsdk-linux/usr/bin/arm-nilrt-linux-gnueabi/arm-nilrt-linux-gnueabi-g++)
set(CMAKE_SYSROOT ${toolchainpath}/cortexa9-vfpv3-nilrt-linux-gnueabi)
set(CMAKE_<LANG>_STANDARD_INCLUDE_DIRECTORIES ${toolchainpath}/cortexa9-vfpv3-nilrt-linux-gnueabi/usr/include/c++/6.3.0 ${toolchainpath}/cortexa9-vfpv3-nilrt-linux-gnueabi/usr/include/c++/6.3.0/arm-nilrt-linux-gnueabi)
set(CMAKE_<LANG>_FLAGS "-Wall -fmessage-length=0 -mfpu=vfpv3 -mfloat-abi=softfp")
set(CMAKE_<LANG>_FLAGS_DEBUG "-O0 -g3")
set(CMAKE_<LANG>_FLAGS_RELEASE "-O3")
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

# project specific information
cmake_minimum_required(VERSION 3.14)
project(helloMyRIO)
set(EXECUTABLE_OUTPUT_PATH bin)
set(CMAKE_BUILD_TYPE Debug)
add_compile_definitions(MyRio_1900)


# Include the myRIO-CAPI and myWRIO directories
add_subdirectory(${CMAKE_SOURCE_DIR}/src/myRIO-CAPI)
add_subdirectory(${CMAKE_SOURCE_DIR}/src/myWRIO)


add_executable(helloMyRIO ${CMAKE_SOURCE_DIR}/src/main.cpp)
target_include_directories(helloMyRIO
    PRIVATE ${CMAKE_SOURCE_DIR}/src/myWRIO/src
    PRIVATE ${CMAKE_SOURCE_DIR}/src/myRIO-CAPI/src
)

target_link_libraries(helloMyRIO myWRIO NIMyRioCAPI dl pthread)

