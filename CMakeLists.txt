cmake_minimum_required(VERSION 3.7)
project(LeetCode)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        LeetCode/ContainerWithMostWater.hpp
        LeetCode/DivideTwoIntegers.hpp
        LeetCode/FindMedianSortedArrays.hpp
        LeetCode/FourSum.hpp
        LeetCode/GenerateParentheses.hpp
        LeetCode/ImplementStrStr.hpp
        LeetCode/IntegerToRoman.hpp
        LeetCode/IsPalindrome.hpp
        LeetCode/LetterCombinations.hpp
        LeetCode/LongestCommonPrefix.hpp
        LeetCode/LongestPalindrome.hpp
        LeetCode/LongestValidParentheses.hpp
        LeetCode/main.cpp
        LeetCode/MergeKSortedLists.hpp
        LeetCode/MergeTwoSortedLists.hpp
        LeetCode/NextPermutation.hpp
        LeetCode/RegularExpressionMatching.hpp
        LeetCode/RemoveDuplicates.hpp
        LeetCode/RemoveElement.hpp
        LeetCode/RemoveNthNode.hpp
        LeetCode/ReverseInteger.hpp
        LeetCode/ReverseNodesInKGroup.hpp
        LeetCode/RomanToInteger.hpp
        LeetCode/SearchInRotatedSortedArray.hpp
        LeetCode/SearchInsertPosition.hpp
        LeetCode/SearchRange.hpp
        LeetCode/StringToInt.hpp
        LeetCode/SubstringWithConcatenationOfAllWords.hpp
        LeetCode/SwapNodesInPairs.hpp
        LeetCode/ThreeSum.hpp
        LeetCode/ThreeSumClosest.hpp
        LeetCode/ValidParentheses.hpp
        LeetCode/ValidSudoku.hpp
        LeetCode/ZigZagConversion.hpp
        LeetCode/FirstMissingPositive.hpp
        LeetCode/CountAndSay.hpp
        LeetCode/SudokuSolver.hpp
        LeetCode/CombinationSumII.hpp
        LeetCode/CombinationSum.hpp
        LeetCode/TrappingRainWater.hpp
        LeetCode/MultiplyStrings.hpp
        LeetCode/WildcardMatching.hpp
        LeetCode/JumpGame2.hpp
        LeetCode/Permutations.hpp LeetCode/PermutationsTwo.hpp LeetCode/RotateImage.hpp LeetCode/GroupAnagrams.hpp)

add_executable(LeetCode ${SOURCE_FILES})
