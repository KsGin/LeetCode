cmake_minimum_required(VERSION 3.7)
project(LeetCode)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        LeetCode/FindMedianSortedArrays.cpp
        LeetCode/IsPalindrome.cpp
        LeetCode/LongestPalindrome.cpp
        LeetCode/main.cpp
        LeetCode/RegularExpressionMatching.cpp
        LeetCode/ReverseInteger.cpp
        LeetCode/StringToInt.cpp
        LeetCode/ZigZagConversion.cpp
        LeetCode/ContainerWithMostWater.cpp
        LeetCode/IntegerToRoman.cpp LeetCode/RomanToInteger.cpp)

add_executable(LeetCode ${SOURCE_FILES})