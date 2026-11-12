cmake_minimum_required(VERSION 3.16)
project(lab3_lucrare_4 VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(lab3_lucrare_4
    src/main.cpp
    src/CharacterInit_Item4.cpp
    src/InventoryAndQuests_Item5.cpp
    src/UniqueAssets_Item6.cpp
)

target_include_directories(lab3_lucrare_4 PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)