cmake_minimum_required(VERSION 3.16)
project(Queue)
add_subdirectory(${PROJECT_SOURCE_DIR}/googletest)
add_subdirectory(${PROJECT_SOURCE_DIR}/myqueue)
add_subdirectory(${PROJECT_SOURCE_DIR}/mystack)
add_subdirectory(${PROJECT_SOURCE_DIR}/algorithm)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} gtest pthread myqueue mystack disjoint monostack)

