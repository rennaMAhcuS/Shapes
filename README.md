# A C++ Project

You can follow these [instructions](Walkthrough.md) to get a decent idea on OOP
in `C++`.

## CMake

Refer this project's `CMakeLists.txt` files to know more about CMake. Note that
this project depends on the [**SFML**](https://www.sfml-dev.org) library.

## About C++ building - Compiler options

### Language standard flags

`-std=c++20`

### Disabling compiler extensions

`-pedantic-errors`

### Warning and error levels

`-Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror`

### Optimization

- `-O0` is the recommended optimization level for debug builds, as it disables
  optimization. This is the default setting.
- `-O2` is the recommended optimization level for release builds, as it applies
  optimizations that should be beneficial for all programs.
- `-O3` adds additional optimizations that may or may not perform better than
  `-O2` depending on the specific program. Once your program is written, you
  can try compiling your release build with -O3 instead of -O2 and measure to
  see which is faster.

### Build configurations

Add `-g` to the command line for debug builds and `-O2 -DNDEBUG` for release
builds. Use the debug build options for now.

### An example `CMakeLists.txt`

```cmake
cmake_minimum_required(VERSION 3.31)
project(The Project)

set(CMAKE_CXX_STANDARD 20)
# No compiler-specific extensions
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add warning and error flags
add_compile_options(
        # Disabling compiler extensions
        -pedantic-errors
        # All Warnings
        -Wall
        -Weffc++
        -Wextra
        -Wconversion
        -Wsign-conversion
        -Werror
        # Debug
        -g
)

add_executable(main main.cpp)
```
