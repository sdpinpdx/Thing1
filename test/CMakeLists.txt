# CMakeList.txt : CMake project for Thing1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

add_executable(test_Interface "test_Interface.cpp")
target_include_directories(test_Interface PRIVATE ../src/Thing1)
target_link_libraries(test_Interface gtest_main)
add_test(NAME test_Interface COMMAND test_Interface)

add_executable(test_Node "test_Node.cpp")
target_include_directories(test_Node PRIVATE ../src/Thing1)
target_link_libraries(test_Node gtest_main)
add_test(NAME test_Node COMMAND test_Node)
