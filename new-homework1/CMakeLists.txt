cmake_minimum_required(VERSION 3.5)

project(1self-check CXX)

add_executable(self-check
hello.cpp
move_me_out.cpp
move_me_out.h
)

set_target_properties(self-check PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)
