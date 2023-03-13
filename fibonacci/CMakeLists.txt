cmake_minimum_required (VERSION 2.8)

# Set the project name
project (fibonacci)

# Create a library called "fibonacci" which includes the source file "fibonacci.c".
# The extension is already found. Any number of sources could be listed here.
add_library (${PROJECT_NAME} fibonacci.c)

# Make sure the compiler can find include files for our fibonacci library
# when other libraries or executables link to fibonacci
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

