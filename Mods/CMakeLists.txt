# Hacer esta librería dinámica
# STATIC -> SHARED
cmake_minimum_required(VERSION 3.28)

project(Mods)

# Set default visibility to hidden for symbols
#set(CMAKE_CXX_VISIBILITY_PRESET hidden)
#set(CMAKE_VISIBILITY_INLINES_HIDDEN 1)

add_library(Mods SHARED source/PlayerChanged.cpp)