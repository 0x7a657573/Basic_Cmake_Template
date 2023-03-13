cmake_minimum_required (VERSION 3.0)

# Set Project Name
project (basic_cmake)

# List of source files
set(SRC_FILES
    src/main.c
)

# List of libraries
set(LIB_LIST
    fibonacci
    fast_math
)

# Build the executable based on the source files
add_executable(${PROJECT_NAME} ${SRC_FILES})

# Find all subdirectories that have CMakeLists.txt files
file(GLOB SUBDIRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} */CMakeLists.txt)

# Remove the CMakeLists.txt part from each subdirectory name
string(REGEX REPLACE "/CMakeLists.txt" "" SUBDIRS "${SUBDIRS}")

# Add each subdirectory to the build
foreach(SUBDIR ${SUBDIRS})
  add_subdirectory(${SUBDIR})
endforeach()

# Link the executable to the simple_cmake library.
target_link_libraries(${PROJECT_NAME} ${LIB_LIST})

# List of compiler defines, prefix with -D compiler option
target_compile_definitions(${PROJECT_NAME} PRIVATE
        -DD_NAME="0x7a657573"
        )

# Compiler options
target_compile_options(${PROJECT_NAME} PRIVATE
    -fsigned-char 
    -ffunction-sections

    -Wall
    -Os
)

# Linker options
target_link_options(${PROJECT_NAME} PRIVATE
        -fsigned-char 
        -ffunction-sections
        
        -Wall
        -Xlinker --gc-sections
        -Wl,-Map=${PROJECT_NAME}.map,--cref
        -Wl,--gc-sections
        )

# Add link library        
TARGET_LINK_LIBRARIES(${PROJECT_NAME}
        m
        c
        gcc
)        