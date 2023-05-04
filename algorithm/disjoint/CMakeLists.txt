cmake_minimum_required(VERSION 3.16)
project(disjoint)

add_library(${PROJECT_NAME} src/disjoint.c)
target_include_directories(${PROJECT_NAME}
        PUBLIC ${PROJECT_SOURCE_DIR}/include)
