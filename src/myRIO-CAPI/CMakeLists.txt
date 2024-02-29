cmake_minimum_required(VERSION 3.14)
project(
    NIMyRioCAPI
    VERSION 1.0
    LANGUAGES C
)



add_compile_definitions(MyRio_1900)
set(SOURCE_FILES
    src/IRQConfigure.c
    src/MyRio1900.h
    src/MyRio.h
    src/NiFpga_MyRio1900Fpga60.h
    src/NiFpga_MyRio1950Fpga60.lvbitx
    src/IRQConfigure.h
    src/MyRio1950.h
    src/NiFpga.c
    src/NiFpga_MyRio1900Fpga60.lvbitx
    src/visa.h
    src/libvisa.so
    src/MyRio.c
    src/NiFpga.h
    src/NiFpga_MyRio1950Fpga60.h
    src/visatype.h
)

add_library(NIMyRioCAPI STATIC ${SOURCE_FILES})
target_include_directories(NIMyRioCAPI PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
