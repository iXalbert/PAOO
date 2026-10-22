cmake_minimum_required(VERSION 3.15)
project(StaticLibProject VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(MathUtils STATIC
    src/MathUtils.cpp
)

target_include_directories(MathUtils
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)