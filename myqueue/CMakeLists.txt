cmake_minimum_required(VERSION 3.16)
project(myqueue)
add_library(${PROJECT_NAME} src/queue.c)
target_include_directories(${PROJECT_NAME}
        PUBLIC ${PROJECT_SOURCE_DIR}/include)

