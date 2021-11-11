cmake_minimum_required(VERSION 3.0)
project(AP)
set(CMAKE_CXX_STANDARD 11)
add_executable(sources/main.cpp  sources/waxe.cpp  sources/shoe.cpp
    sources/doctor.cpp)
include_directories(include)