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


/**
 * DP法:
 * 递推公式：由于只有p中会含有regular expression，所以以p[j-1]来进行分类。
 * p[j-1] != '.' && p[j-1] != '*'：dp[i][j] = dp[i-1][j-1] && (s[i-1] == p[j-1])
 * p[j-1] == '.'：dp[i][j] = dp[i-1][j-1]

 * 而关键的难点在于 p[j-1] = '*'。由于星号可以匹配0，1，乃至多个p[j-2]。
 * 1. 匹配0个元素，即消去p[j-2]，此时p[0: j-1] = p[0: j-3]
 * dp[i][j] = dp[i][j-2]

 * 2. 匹配1个元素，此时p[0: j-1] = p[0: j-2]
 * dp[i][j] = dp[i][j-1]

 * 3. 匹配多个元素，此时p[0: j-1] = { p[0: j-2], p[j-2], ... , p[j-2] }
 * dp[i][j] = dp[i-1][j] && (p[j-2]=='.' || s[i-2]==p[j-2])
 */


#pragma once
#include <vector>

using namespace std;

class RegularExpressionMatching {
public:
    bool isMatch(string s, string p) {
        vector<vector<bool>> vdp(s.length()+1,vector<bool>(p.length()+1, false));
        vdp[0][0] = true;
        for (auto i = 0; i < s.length()+1; ++i) {
            for (auto j = 1; j < p.length()+1; ++j) {
                if (p[j - 1] != '.' && p[j - 1] != '*'){
                    if(i >0 && s[i-1] == p[j-1] && vdp[i-1][j-1]){
                        vdp[i][j] = true;
                    }
                }else if (p[j-1] == '.'){
                    if(i>0 && vdp[i - 1][j - 1]) {
                        vdp[i][j] = true;
                    }
                }else if (j > 1){
                    if (vdp[i][j-1] || vdp[i][j-2]){
                        vdp[i][j] = true;
                    }else if(i > 0 && (p[j-2]==s[i-1] || p[j-2] == '.') && vdp[i-1][j]){
                        vdp[i][j] = true;
                    }
                }
            }
        }

        return vdp[s.length()][p.length()];
    }
};
