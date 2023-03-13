# Basic CMake Template
CMake has become quite popular as a C++ build system generator. Many IDEs now support it natively. Moreover, CMake itself has been evolving to be more simpler to use with specific idioms around working with targets and properties; coupled with its ability to work across different OSes ensures that we can have as much portability as possible.
There are many tutorials across the internet on how to build with CMake. However, there are many outdated suggestions out there, which will work but is generally not valid anymore. 

**I wanted to write a simple CMake build setup that leverages the modern and recommended way of doing the same.**

# Project Files Structure 
``` bash
├── CMakeLists.txt
├── fibonacci
│   ├── CMakeLists.txt
│   ├── fibonacci.c
│   └── fibonacci.h
├── math
│   ├── CMakeLists.txt
│   ├── fast_math.c
│   └── fast_math.h
└── src
    └── main.c
```