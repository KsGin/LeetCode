//
//  RegularExpressionMatching.cpp
//  LeetCode
//  Implement regular expression matching with support for '.' and '*'.
//
//  '.' Matches any single character.
//  '*' Matches zero or more of the preceding element.
//
//  The matching should cover the entire input string (not partial).
//
//  The function prototype should be:
//  bool isMatch(const char *s, const char *p)
//
//  Some examples:
//  isMatch("aa","a") → false
//  isMatch("aa","aa") → true
//  isMatch("aaa","aa") → false
//  isMatch("aa", "a*") → true
//  isMatch("aa", ".*") → true
//  isMatch("ab", ".*") → true
//  isMatch("aab", "c*a*b") → true
//  Created by ksgin on 2017/6/25.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <string>

using namespace std;

class RegularExpressionMatching {
public:
    static bool isMatch(string s, string p) {
        if (s == p) {
            return true;
        }

    }
};
