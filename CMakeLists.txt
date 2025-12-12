cmake_minimum_required(VERSION 3.20)
project(cses)

set(CMAKE_CXX_STANDARD 20)

# This sets the output directory for all executable targets to a 'bin'
# folder inside the root source directory.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# 1. Find all .cpp files in the current directory
file(GLOB SOURCES "*.cpp")

# 2. Loop through them and create a separate executable for each
foreach (SOURCE ${SOURCES})
    # Get the file name without extension (e.g., "weird_algorithm")
    get_filename_component(TARGET_NAME ${SOURCE} NAME_WE)

    # Create an executable for just this file
    add_executable(${TARGET_NAME} ${SOURCE})
endforeach ()