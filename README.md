# myRIO-cpp-workspace

## Description
This repository offers a workspace for developing/cross-compiling C++ applications in Linux environment for the NI myRIO embedded system. It is a easily configurable environment based on the [myWRIO project](https://github.com/eviallet/myWRIO) and the [National Instuments C API](https://www.ni.com/en/support/downloads/software-products/download.c-support-for-myrio.html#329806).


## Installation
Clone this repository. Follow the official [NI instructions](https://nilrt-docs.ni.com/cross_compile/cross_compile_index.html) and install the [GNU C & C++ Compliler tools for ARMv7](https://www.ni.com/en/support/downloads/software-products/download.gnu-c---c---compile-tools-for-armv7.html#338448) (provided by NI) on your Linux machine. Then copy the contents of the  `source` folder from the [myRIO C API](https://www.ni.com/en/support/downloads/software-products/download.c-support-for-myrio.html#329806) to the `src/myRIO-src/` folder of this repository. Now you should be ready to compile the `main.cpp` as instructed in the official NI documentation.

If you use myRIO-1950 instead of myRIO-1900, you need to change the `MyRio_1900` to `MyRio_1950` in the top level `CMakeLists.txt` file. Otherwise the C library won't know which device to target.
