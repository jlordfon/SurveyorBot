cmake_minimum_required(VERSION 3.31.6 FATAL_ERROR)

set(CMAKE_CXX_CLANG_TIDY clang-tidy)

set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "" FORCE)

set(CMAKE_PREFIX_PATH "$ENV{VCPKG_ROOT}/installed/x64-linux/share")

project(hello_world LANGUAGES CXX)

add_executable(hello_world hello_world.cpp)

enable_testing()

add_subdirectory(test)