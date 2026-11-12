cmake_minimum_required(VERSION 3.16)
project(lab4_lucrare_5 VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(lab4_lucrare_5
    src/main.cpp
    src/ChainedStats_Item10.cpp
    src/SelfEquipWeapon_Item11.cpp
    src/FullCharacterCopy_Item12.cpp
)

target_include_directories(lab4_lucrare_5 PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)