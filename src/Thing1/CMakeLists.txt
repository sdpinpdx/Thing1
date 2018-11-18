# CMakeList.txt : CMake project for Thing1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(Thing1 "Thing1.cpp"
	"Thing1.h"
	"Types.h" 
	"Node.h"
	"Interface.h")
target_include_directories(Thing1 PRIVATE ../include)

# TODO: Add tests and install targets if needed.
#target_link_libraries(Thing1 gtest_main)
