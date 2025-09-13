cmake_minimum_required(VERSION 3.18)
project(Text_To_Handwritten CXX)

#C++17 standard.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find library vcpkg installed.
find_package(fmt CONFIG REQUIRED)

# Find the system-installed SFML library
find_package(SFML REQUIRED COMPONENTS graphics)

# Define our executable and tell its source code
add_executable(Text_To_Handwritten src/main.cpp)

# Link our executable to the libraries.
target_link_libraries(Text_To_Handwritten PRIVATE
    fmt::fmt
    sfml-graphics 
)
