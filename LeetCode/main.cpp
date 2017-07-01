//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "FindMedianSortedArrays.cpp"
#include "LongestPalindrome.cpp"
#include "ZigZagConversion.cpp"
#include "ReverseInteger.cpp"
#include "StringToInt.cpp"
#include "IsPalindrome.cpp"
#include "RegularExpressionMatching.cpp"
#include "ContainerWithMostWater.cpp"
#include "IntegerToRoman.cpp"
#include "RomanToInteger.cpp"
#include "LongestCommonPrefix.cpp"
#include "ThreeSum.cpp"
#include "ThreeSumClosest.cpp"

using namespace std;

/*
 *  test
 */
int main(int argc, const char * argv[]) {

    auto re = ThreeSumClosest::threeSumClosest(vector<int>{1 , 1  , 1 , 0 } , 100);
    cout << re << endl;

    return 0;
}
