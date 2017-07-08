cmake_minimum_required(VERSION 3.7)
project(LeetCode)

set(CMAKE_CXX_STANDARD 14)

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
        LeetCode/IntegerToRoman.cpp
        LeetCode/RomanToInteger.cpp
        LeetCode/LongestCommonPrefix.cpp
        LeetCode/ThreeSum.cpp
        LeetCode/ThreeSumClosest.cpp
        LeetCode/LetterCombinations.cpp
        LeetCode/FourSum.cpp
        LeetCode/RemoveNthNode.cpp
        LeetCode/ValidParentheses.cpp
        LeetCode/MergeTwoSortedLists.cpp LeetCode/GenerateParentheses.cpp LeetCode/MergeKSortedLists.cpp LeetCode/SwapNodesInPairs.cpp)

add_executable(LeetCode ${SOURCE_FILES})