cmake_minimum_required (VERSION 2.8)

# Set the project name
project (fast_math)

# Create a library called "fast_math" which includes the source file "fast_math.c".
# The extension is already found. Any number of sources could be listed here.
add_library (${PROJECT_NAME} STATIC fast_math.c)

# Make sure the compiler can find include files for our fast_math library
# when other libraries or executables link to fast_math
target_include_directories (${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


