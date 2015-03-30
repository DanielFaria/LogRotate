#I followed example in this site http://www.cmake.org/examples/	
cmake_minimum_required (VERSION 2.8.11)
project (LogMaker)

# Recurse into the "Hello" and "Demo" subdirectories. This does not actually
# cause another cmake executable to run. The same process will walk through
# the project's entire directory structure.
add_subdirectory (source)
include_directories(source)

# Add executable called "helloDemo" that is built from the source files
# "demo.cxx" and "demo_b.cxx". The extensions are automatically found.
#Only source code here
add_executable (LogMaker source main.cpp)

target_link_libraries (LogMaker LogMakerLib)

