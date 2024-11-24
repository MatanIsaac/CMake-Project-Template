# project_root/src/CMakeLists.txt
cmake_minimum_required(VERSION 3.27)

# Define the library target
add_library(CMakeTemplateLib STATIC
    main.cpp
    App.hpp
    App.cpp
    Utility/Log.cpp
)

# Include directories for the library
target_include_directories(CMakeTemplateLib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/Utility
    ${CMAKE_SOURCE_DIR}/dependencies/glfw/include
    ${CMAKE_SOURCE_DIR}/dependencies/spdlog/include
)

# Link dependencies to the library
target_link_libraries(CMakeTemplateLib PUBLIC
    glfw           
    glad 
    spdlog        
)

# Create the main executable target
add_executable(CMakeTemplateExec
    main.cpp
)

# Include directories for the executable (if needed)
target_include_directories(CMakeTemplateExec PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/Utility
    ${CMAKE_SOURCE_DIR}/dependencies/glfw/include
    ${CMAKE_SOURCE_DIR}/dependencies/spdlog/include
)

# Link the library to the executable
target_link_libraries(CMakeTemplateExec PUBLIC
    CMakeTemplateLib
)