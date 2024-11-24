# project_root/test/CMakeLists.txt

# Define the test executable
add_executable(CMakeTemplateTest
    some_test.cpp
)

# Include directories for the test executable
target_include_directories(CMakeTemplateTest PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/src/Utility
)

# Link the library and googletest to the test executable
target_link_libraries(CMakeTemplateTest PUBLIC
    gtest             # Googletest library
    gtest_main        # Main function for googletest
    CMakeTemplateLib  # Your application library
)

# Add the test to CTest
add_test(NAME CMakeTemplateUnitTests COMMAND CMakeTemplateTest)
