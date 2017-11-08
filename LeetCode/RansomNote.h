/*
 * File   : RansomNote
 * Author : KsGin 
 * Date   : 2017/11/8
 */

#ifndef LEETCODE_RANSOMNOTE_H
#define LEETCODE_RANSOMNOTE_H

#include <string>
#include <unordered_map>

class RansomNote {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::unordered_map<char , int> um(0);
        for (int i = 0; i < 26; ++i)
            um[i + 'a'] = 0;
        for (auto m : magazine)
            um[m]++;
        for (auto m : ransomNote)
            if(um[m]-- <= 0)
                return false;
        return true;
    }
};

#endif //LEETCODE_RANSOMNOTE_H
