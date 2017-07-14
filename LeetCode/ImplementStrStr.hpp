//
// Created by KsGin on 2017/7/12.
//

#pragma once
#include <string>

using namespace std;

class ImplementStrStr {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size())
            return -1;
        if (needle.size() == 0)
            return 0;
        auto index = 0;
        auto isEqual = true;
        for (auto i = 0; i <= haystack.size() - needle.size(); ++i) {
            if (haystack[i] == needle[0]) {
                index = i;
                for (auto j = 1; j < needle.size(); ++j) {
                    if (haystack[i + j] != needle[j]) {
                        isEqual = false;
                        break;
                    }
                }
                if (isEqual) return index;
                else isEqual = true;
            }
        }
        return -1;
    }
};