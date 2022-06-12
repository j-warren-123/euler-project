cmake_minimum_required(VERSION 3.21)
project(euler_project)

set(CMAKE_CXX_STANDARD 20)

# 3rd party libs
find_package(fmt CONFIG REQUIRED)

# lib
add_subdirectory(shared_functions)

# all questions
add_subdirectory(problems/1)
add_subdirectory(problems/2)
add_subdirectory(problems/3)
add_subdirectory(problems/4)
