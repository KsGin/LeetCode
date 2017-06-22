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

using namespace std;

/*
 * find median sorted arrays test
 */
//int main(int argc, const char * argv[]) {
//
//    vector<int> a {1} , b {1};
//
//    std::cout << FindMedianSortedArrays::findMedianSortedArrays(a , b) << std::endl;
//
//    return 0;
//}

int main(int argc , const char *argv[]){
    string s("dddddd");
    cout << LongestPalindrome::longestPalindrome(s) << endl;
    return 0;
}
