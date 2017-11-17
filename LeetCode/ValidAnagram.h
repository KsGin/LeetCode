/*
 * File   : ValidAnagram
 * Author : KsGin 
 * Date   : 2017/11/17
 */

#ifndef LEETCODE_VALIDANAGRAM_H
#define LEETCODE_VALIDANAGRAM_H

#include <string>

class ValidAnagram {
public:
    bool isAnagram(std::string s, std::string t) {
        if(s.size() != t.size())
            return false;
        std::sort(s.begin() , s.end());
        std::sort(t.begin() , t.end());
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]!=t[i]) return false;
        }
        return true;
    }
};

#endif //LEETCODE_VALIDANAGRAM_H
