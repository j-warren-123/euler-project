cmake_minimum_required(VERSION 3.21)
get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})
project(${PROJECT_NAME}_${ProjectId})

add_executable(${PROJECT_NAME} main.cpp)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_INCLUDE_WHAT_YOU_USE ${iwyu_path})

target_link_libraries(${PROJECT_NAME}
        PRIVATE
        euler_project_shared_functions

        PRIVATE
        fmt::fmt
        range-v3
        Microsoft.GSL::GSL
        )