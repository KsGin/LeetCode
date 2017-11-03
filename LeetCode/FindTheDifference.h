/*
 * File   : FindTheDifference
 * Author : KsGin 
 * Date   : 19/10/2017
 */

#ifndef LEETCODE_FINDTHEDIFFERENCE_H
#define LEETCODE_FINDTHEDIFFERENCE_H

#include <string>
#include <algorithm>

class FindTheDifference {
public:
    char findTheDifference(std::string s, std::string t) {
        if (s.empty()) return t[0];
        if (t.empty()) return s[0];
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        for (int i = 0; i < std::min(s.size(), t.size()); ++i) {
            if (s[i] != t[i]) {
                return s.size() > t.size() ? s[i] : t[i];
            }
        }
        return s.size() > t.size() ? *(s.end() - 1) : *(t.end() - 1);
    }
};

#endif //LEETCODE_FINDTHEDIFFERENCE_H
