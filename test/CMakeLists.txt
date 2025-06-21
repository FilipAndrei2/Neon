cmake_minimum_required(VERSION 3.31)
project(neon_test)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(../neon ${CMAKE_BINARY_DIR}/neon)


add_executable(neon_test ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)
target_link_libraries(neon_test PRIVATE neon)