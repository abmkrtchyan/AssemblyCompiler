cmake_minimum_required(VERSION 3.0)
project(AssemblyCompiler)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
add_executable(AssemblyCompiler src/AssemblyCompiler.cpp src/main.cpp)