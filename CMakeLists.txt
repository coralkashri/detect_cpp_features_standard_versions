cmake_minimum_required(VERSION 3.28.1)

include(e47b27d427b8f90226e280fa9ac4c9fc/set_clang_compilers.cmake)

project(detect_cpp_features_standard_versions)

set(CMAKE_CXX_STANDARD 20)

if ("${CMAKE_BUILD_TYPE}" STREQUAL "")
    set(CMAKE_BUILD_TYPE Release)
endif ()

if (${CMAKE_BUILD_TYPE} STREQUAL "Release")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")
endif()

file(GLOB_RECURSE SOURCE_FILES src/*)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

set(CLANG_TARGET_NAME ${PROJECT_NAME})

include(e47b27d427b8f90226e280fa9ac4c9fc/use_clang.cmake)