cmake_minimum_required(VERSION 3.31)
project(neon)

set(CMAKE_CXX_STANDARD 23)

file(GLOB_RECURSE SRC_FILES "src/*.cpp")


message("\n-- Adding source files to the lib")
add_library(neon STATIC
        ${SRC_FILES}
)

message("\n-- Including directories..")
target_include_directories(neon
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

message("-- Neon build done!")