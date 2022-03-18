cmake_minimum_required(VERSION 3.5)

project(C-Univer LANGUAGES C)

# Enable to see code generated.

#set(CMAKE_C_FLAGS "-Wall -Wextra -O0 -S -masm=intel")

set(CMAKE_C_FLAGS "-Wall -Wextra")

add_executable(C-Univer main.c)
