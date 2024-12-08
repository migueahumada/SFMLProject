cmake_minimum_required(VERSION 3.28)
project(CMakeSFMLProject LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_CXX_STANDARD 20)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

add_subdirectory(GameFramework)
add_subdirectory(Project)

