cmake_minimum_required(VERSION 3.15)

project(1self-check CXX)

add_executable(self-check
move_me_out.cpp
hello.cpp
)

if (MSVC)
target_compile_options(self-check PUBLIC /W4 /WX)
else()
target_compile_options(self-check PUBLIC -Wall -Wextra -pedantic -Werror)
endif()

set_target_properties(self-check PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)