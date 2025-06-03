cmake_minimum_required(VERSION 3.16)
project(Neon LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


add_library(neon SHARED
        src/main/cpp/main.cpp
        include/neon_export.hpp
        src/main/cpp/test.cpp
)

add_executable(example src/main/cpp/main.cpp
        include/neon_export.hpp
        include/neon.hpp
        include/neon/window.hpp
)

target_compile_definitions(neon PUBLIC NEON_BUILD_DLL)

target_include_directories(neon
        PUBLIC include
)

target_include_directories(example
        PUBLIC include)