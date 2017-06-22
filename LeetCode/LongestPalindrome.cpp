    //
    //  LongestPalindrome.cpp
    //  LeetCode
    //  Given a string s, find the longest palindromic substring in s.
    //  You may assume that the maximum length of s is 1000.
    //  Created by ksgin on 2017/6/22.
    //  Copyright © 2017年 ksgin. All rights reserved.
    //

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class LongestPalindrome {
public:
    static string longestPalindrome(string s) {
        vector<int> v(s.length() , 0);
        for (int i = 0 ; i < s.length(); ++i) {
            for (int j = 0 ; j < i ; ++j) {
                if (s.at(j) == s.at(i)) {
                    if((i-j) > v.at(i))
                        v.at(i) = i-j;
                }
            }
        }
        int max = 0;
        bool f = true;
        for (int i = 0 ; i < s.length(); ++i) {
            if(v.at(i) > v.at(max)){
                for (int j = max-v.at(max); j < i; ++j) {
                    if (!(v.at(j) == 0 || j - v.at(j) < i-v.at(i)-j || v.at(j) == v.at(i))) {
                        f = false;
                        break;
                    }
                }
                if(f) max = i;
                f = true;
            }
        }
        return s.substr(max-v.at(max) , v.at(max)+1);
    }
};
