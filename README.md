# CMake Template with GLFW

This repository serves as a template for a C++ application using CMake, spdlog for fast and efficient logging, and GLFW for window and input management. It provides a basic application class and a loop structure to help kickstart development.
## Features

    CMake Build System: Easily configure, build, and manage dependencies using CMake.
    GLFW: A cross-platform library for creating windows, receiving input, and managing OpenGL contexts.
    spdlog: A fast, header-only C++ logging library for providing high-performance logging.
    google gtest: utilizing google test framework, a test directory to test your application.

## Prerequisites

To get started with this project, you need to have the following installed:

    C++ Compiler: Compatible with C++17 or later.
    CMake: Version 3.15 or higher is recommended.
    GLFW and spdlog are included in the template.

## Getting Started
### Cloning the Repository

    git clone https://github.com/your-username/CMake-GLFW-Template.git
    cd CMake-GLFW-Template
    git submodule update --init --recursive
    
### Building the Project

    Create a build directory:
    mkdir build
    cd build

### Configure the project using CMake:

    cmake ..

### Build the project:

    cmake --build .

### Running the Application

After building, you can run the application from the build directory:

    Application Exec:
    ./build/src/Debug/CMakeTemplateExec
    Test Exec:
    ./build/test/Debug/CMakeTemplateExec

Project Structure

    CMake-GLFW-Template/
        ├── CMakeLists.txt            
        ├── dependencies/
        │   ├── glad/
        │   ├── glfw/
        │   ├── spdlog/
        │   └── googletest/
        ├── src/
        │   ├── CMakeLists.txt       
        │   ├── main.cpp
        │   ├── App.cpp
        │   ├── App.h
        │   └── Utility/
        │       ├── Log.cpp
        │       └── Log.h
        └── test/


## Dependencies
### GLFW

GLFW is used to create windows, handle input, and manage OpenGL contexts. It is cross-platform and easy to use.
### spdlog

spdlog is a fast and easy-to-use logging library. It provides both synchronous and asynchronous logging capabilities.
### CMake

CMake is an open-source, cross-platform family of tools designed to build, test, and package software.