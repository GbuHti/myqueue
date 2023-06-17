cmake_minimum_required(VERSION 3.16)
project(monostack)

message(STATUS "PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
message(STATUS "CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
add_library(${PROJECT_NAME} src/monostack.c)
target_include_directories(${PROJECT_NAME}
        PUBLIC ${PROJECT_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/mystack/include)
