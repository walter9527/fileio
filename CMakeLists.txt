cmake_minimum_required(VERSION 3.16)
project(fileio C)

set(CMAKE_C_STANDARD 99)

# 源文件目录
aux_source_directory(common DIR_COMMON)

## 头文件目录
include_directories(include)

add_executable(fileio fileio/lesson01.c ${DIR_COMMON})