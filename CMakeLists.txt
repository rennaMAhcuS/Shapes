cmake_minimum_required(VERSION 3.31)
project(Shapes)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -Wextra -Werror)

# SFML
include_directories(/opt/homebrew/opt/sfml/include)
link_directories(/opt/homebrew/opt/sfml/lib)

add_subdirectory(src)       # to build the library
add_subdirectory(examples)  # for a demo
