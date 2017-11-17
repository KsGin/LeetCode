/*
 * File   : FirstUniqueCharacterInAString
 * Author : KsGin 
 * Date   : 2017/11/17
 */

#ifndef LEETCODE_FIRSTUNIQUECHARACTERINASTRING_H
#define LEETCODE_FIRSTUNIQUECHARACTERINASTRING_H

#include <string>
#include <vector>

class FirstUniqueCharacterInAString {
public:
    int firstUniqChar(std::string s) {
        if(s.size() == 0) return -1;
        if(s.size() == 1) return 0;
        std::vector<int> letterCount(26 , 0);
        for (int i = 0; i < s.size(); ++i) {
            letterCount[s[i]-'a']++;
        }
        for (int i = 0; i < s.size(); ++i) {
            if(letterCount[s[i]-'a'] == 1)
                return i;
        }
        return -1;
    }
};

#endif //LEETCODE_FIRSTUNIQUECHARACTERINASTRING_H
