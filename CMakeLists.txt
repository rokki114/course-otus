cmake_minimum_required(VERSION 3.8)

project(ex1 CXX)

add_executable(for циклы_for.cpp)

target_compile_features(for PUBLIC cxx_std_17)

if(MSVC)
    target_compile_options(for PUBLIC /W4 /WX)
else()
    target_compile_options(for PUBLIC -Wall -Wextra -Werror -pedantic)
endif()
