cmake_minimum_required(VERSION 3.26)
project(Shapes)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -Wextra -Werror)

# SFML
find_package(SFML 3 COMPONENTS Graphics REQUIRED)

add_subdirectory(src)       # to build the library
add_subdirectory(examples)  # for a demo
