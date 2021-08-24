cmake_minimum_required(VERSION 3.17)
project(Leetcode)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_C_FLAGS_DEBUG "-D_DEBUG")

add_executable(Leetcode main.cpp array/IsUnique.cpp leetcode.h array/IsomorphicStr.cpp array/IsIncludeInRotate.cpp array/PalindromeNumber.cpp)