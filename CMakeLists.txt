cmake_minimum_required(VERSION 3.21)
project(euler_project)

set(CMAKE_CXX_STANDARD 20)

# linting tools
#find_program(iwyu_path NAMES include-what-you-use iwyu REQUIRED)
#set(CMAKE_CXX_CLANG_TIDY
#        clang-tidy;
#        -checks=*,-modernize-use-trailing-return-type;
#        )


# 3rd party libs
find_package(fmt CONFIG REQUIRED)
find_package(range-v3 CONFIG REQUIRED)
find_package(Microsoft.GSL CONFIG REQUIRED)

# lib
add_subdirectory(shared_functions)

# all questions
add_subdirectory(problems/1)
add_subdirectory(problems/2)
add_subdirectory(problems/3)
add_subdirectory(problems/4)
add_subdirectory(problems/5)
add_subdirectory(problems/6)
add_subdirectory(problems/7)
add_subdirectory(problems/8)
