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

using namespace std;

/*
 *  1 . find median sorted arrays test
 */
//int main(int argc, const char * argv[]) {
//
//    vector<int> a {1} , b {1};
//
//    std::cout << FindMedianSortedArrays::findMedianSortedArrays(a , b) << std::endl;
//
//    return 0;
//}


/*
 *  2 . Longest Palindrome SubString test
 */
//int main(int argc , const char *argv[]){
//    string s("cccc");
//    cout << LongestPalindrome::longestPalindrome(s) << endl;
//    return 0;
//}

/*
 *  3 . Zig Zag Conversion test
 */
//int main(int argc , const char *argv[]){
//    string s("abcde");
//    cout << ZigZagConversion::zigZagConversion(s , 4) << endl;
//}

/*
 * 4 . Reverse Integer test
 */
//int main(int argc , const char *argv[]){
//    cout << INT32_MIN << "    " << INT32_MAX << endl;
//    cout << Reverse::reverse(123) << endl;
//}


/*
 * 5 . String to Int
 */
//int main(int argc , const char *argv[]){
//    cout << StringToInt::myAtoi("13456") << endl;
//}

/*
 * 5 . Is Palindrome
 */
//int main(int argc, const char* argv[])
//{
//	cout << IsPalindrome::isPalindrome(12321) << endl;
//}

/*
 * 5 . Is Palindrome
 */
int main(int argc, const char* argv[])
{
    cout << RegularExpressionMatching::isMatch("asdddd", "as.*d") << endl;
}
