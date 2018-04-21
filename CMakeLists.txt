cmake_minimum_required(VERSION 3.7)
project(LeetCode)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        LeetCode/main.cpp
        LeetCode/InsertInterval.h
        LeetCode/RotateString.h
        LeetCode/DecodeString.h LeetCode/MyCalendarOne.h)

add_executable(LeetCode ${SOURCE_FILES})