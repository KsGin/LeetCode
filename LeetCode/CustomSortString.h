/*
 * File   : CustomSortString
 * Author : KsGin
 * Date   : 02/03/2018
 */

#ifndef LEETCODE_CUSTOMSORTSTRING_H
#define LEETCODE_CUSTOMSORTSTRING_H

#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

class CustomSortString {
public:
    string customSortString(string S, string T) {
        string ret = S;
        unordered_map<char , int> um;
        for (auto c : S) um[c]++;
        for (auto c : T){
            auto tmp = find(ret.begin(),ret.end(),c);
            if (tmp == end(ret)) ret.push_back(c);
            else {
                if(um[c] < 1)
                    ret.insert(tmp,c);
                else um[c]--;
            }
        }
        return ret;
    }
};

#endif //LEETCODE_CUSTOMSORTSTRING_H
