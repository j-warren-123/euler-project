cmake_minimum_required(VERSION 3.21)
get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})
project(${PROJECT_NAME}_${ProjectId})

set(HEADERS
        is_divisible_by.hpp
        is_prime.hpp
        is_palindrome.hpp
        factors_generator.hpp

        )

add_library(${PROJECT_NAME} INTERFACE ${HEADERS})
target_include_directories(${PROJECT_NAME} INTERFACE .)