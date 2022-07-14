cmake_minimum_required(VERSION 3.5)

project(elf-prodject CXX)

add_executable(self-prodject
example_function.cpp
hello.cpp
move_me_out.cpp
move_me_out.h
)

set_target_properties(self-prodject PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)