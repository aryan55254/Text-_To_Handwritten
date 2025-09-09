#minimum CMake version project name/language.
cmake_minimum_required(VERSION 3.18)
project(Text_To_Handwritten CXX)

#C++17 standard.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find the {fmt} library that vcpkg installed.
# 'CONFIG' mode vcpkg helps CMake find packages. 'REQUIRED' makes it fail if not found.
find_package(fmt CONFIG REQUIRED)

# Define our executable and tell its source code
add_executable(Text_To_Handwritten src/main.cpp)

# Link executable to the {fmt} library.
# This tells the compiler to connect our code to the library code.
target_link_libraries(Text_To_Handwritten PRIVATE fmt::fmt)