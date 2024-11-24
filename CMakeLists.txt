# project_root/CMakeLists.txt

cmake_minimum_required(VERSION 3.27)

# Set project name
project(CMakeTemplate LANGUAGES C CXX VERSION 1.0 DESCRIPTION "Basic CMake Template")

# Set C++ standards
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable position-independent code for static libraries
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Enable testing
enable_testing()

# Add subdirectories for dependencies
# Assuming dependencies have their own CMakeLists.txt files
add_subdirectory(dependencies/glfw)
add_subdirectory(dependencies/spdlog)
add_subdirectory(dependencies/googletest)
add_subdirectory(dependencies/glad)

# Add subdirectories for project source and tests
add_subdirectory(src)
add_subdirectory(test)
