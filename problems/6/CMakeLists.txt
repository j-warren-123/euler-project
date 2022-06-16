cmake_minimum_required(VERSION 3.21)
get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})
project(${PROJECT_NAME}_${ProjectId})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME}
        PRIVATE
        euler_project_shared_functions

        PRIVATE
        fmt::fmt
        range-v3
        )