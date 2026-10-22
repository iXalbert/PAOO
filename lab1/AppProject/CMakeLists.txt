cmake_minimum_required(VERSION 3.15)
project(AppProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(STATIC_LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../StaticLibProject")

add_library(MathUtils STATIC IMPORTED)

set_target_properties(MathUtils PROPERTIES
    IMPORTED_LOCATION "${STATIC_LIB_DIR}/build/libMathUtils.a"
    INTERFACE_INCLUDE_DIRECTORIES "${STATIC_LIB_DIR}/include"
)

add_executable(App main.cpp)

target_link_libraries(App PRIVATE MathUtils)