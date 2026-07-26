cmake_minimum_required(VERSION 3.31.6 FATAL_ERROR)

set(CMAKE_CXX_CLANG_TIDY clang-tidy)

set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "" FORCE)

set(CMAKE_PREFIX_PATH "$ENV{VCPKG_ROOT}/installed/x64-linux/share")

if (NOT CMAKE_BUILD_TYPE)
    message("Build Type not set, defaulting to Debug")
    set(CMAKE_BUILD_TYPE Debug)
endif()

project(hello_world LANGUAGES CXX)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_executable(hello_world_debug hello_world.cpp)
else(true)
    add_executable(hello_world hello_world.cpp)
endif()

enable_testing()

add_subdirectory(test)