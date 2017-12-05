/*
 * File   : LongestPalindromeLength
 * Author : KsGin 
 * Date   : 2017/12/5
 */

#ifndef LEETCODE_LONGESTPALINDROMELENGTH_H
#define LEETCODE_LONGESTPALINDROMELENGTH_H

#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>

class LongestPalindromeLength {
public:
    int longestPalindrome(std::string s){

        std::unordered_map<char , int> map;
        for (auto &m : s) {
            if(map[m] >= 1) ++map[m];
            else map[m] = 1;
        }

        bool isHaveOdd = false;
        int ret = 0;

        for (auto &m : map){
            if(m.second % 2 == 0)   ret += m.second;
            else {
                ret += m.second - 1;
                isHaveOdd = true;
            }
        }
        return ret + isHaveOdd;
    }
};

#endif //LEETCODE_LONGESTPALINDROMELENGTH_H
