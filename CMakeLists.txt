cmake_minimum_required(VERSION 3.7)
project(LeetCode)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        LeetCode/main.cpp
        LeetCode/InsertInterval.h
        LeetCode/RotateString.h
        LeetCode/DecodeString.h LeetCode/MyCalendarOne.h LeetCode/SecondMinimumNodeInABinaryTree.h LeetCode/ValidTriangleNumber.h LeetCode/UniqueBinarySearchTrees.h LeetCode/MaxIncreaseToKeepCitySkyline.h LeetCode/PeakIndexInAMountainArray.h LeetCode/FlippingAnImage.h LeetCode/BinaryTreePruning.h LeetCode/AllPathsFromSourceToTarget.h LeetCode/ScoreAfterFlippingMatrix.h LeetCode/NumberOfLinesToWriteString.h LeetCode/ToLowerCase.h LeetCode/TransposeMatrix.h)

add_executable(LeetCode ${SOURCE_FILES})