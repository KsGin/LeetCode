//
// Created by ksgin on 2017/6/29.
//

#pragma once
#include <string>
#include <vector>
#include <climits>

using namespace std;

class LongestCommonPrefix {
public:
    string longestCommonPrefix(vector<string> strs) {
        if (strs.size() == 0)
            return "";
        if (strs.size() == 1)
            return strs[0];
        string preS("");
        auto minLength = INT_MAX;
        for (auto k = 0; k < strs.size(); ++k)
        {
            minLength = (int) (strs[k].length() < minLength ? strs[k].length() : minLength);
        }
        for (auto i = 1; i <= minLength; ++i) {
            auto tmp = strs[0].substr(0,i);
            for (auto j = 1; j < strs.size(); ++j) {
                if (strs[j].substr(0,i) != tmp){
                    return preS;
                }
            }
            preS = tmp;
        }
        return preS;
    }
};