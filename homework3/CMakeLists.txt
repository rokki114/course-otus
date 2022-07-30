cmake_minimum_required(VERSION 3.15)

project(homework_3 CXX)

add_executable(homework_3
chec_value.cpp
high_scores.cpp
game_ganeral
random_value.cpp
)

if (MSVC)
target_compile_options(homework_3 PUBLIC /W4 /WX)
else()
target_compile_options(homework_3 PUBLIC -Wall -Wextra -pedantic -Werror)
endif()

set_target_properties(homework_3 PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)