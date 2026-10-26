cmake_minimum_required(VERSION 3.14)
project(TemaCPP CXX)

set(CMAKE_CXX_STANDARD 17)
include_directories(include)

add_executable(app_demo main.cpp)