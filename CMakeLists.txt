cmake_minimum_required(VERSION 3.10) # Минимальная версия CMake
project(nanoutils)
add_subdirectory(src/modules/makedir)
add_subdirectory(src/modules/tch)
add_executable(nanoutils src/nanoutils_help.cpp)
install(TARGETS nanoutils)
