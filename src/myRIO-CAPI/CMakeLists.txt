cmake_minimum_required(VERSION 3.14)
project(
    NIMyRioCAPI
    VERSION 1.0
    LANGUAGES C
)

# Add all source files in the src/ directory
file(GLOB LIB_SOURCES "src/*.c" "src/*.h")

add_library(NIMyRioCAPI STATIC ${LIB_SOURCES})

# Include directories
target_include_directories(NIMyRioCAPI PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
