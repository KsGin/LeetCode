/*
 * File   : DetectCapital
 * Author : KsGin 
 * Date   : 2017/10/9
 */

#ifndef LEETCODE_DETECTCAPITAL_H
#define LEETCODE_DETECTCAPITAL_H

#include <string>

class DetectCapital {
public:
    bool detectCapitalUse(std::string word) {
        if(word.empty()) return false;
        if(word[0] <= 'z' && word[0] >= 'a'){
            for (int i = 1 ; i < word.size() ; i++)
                if (!(word[i] <= 'z' && word[i] >= 'a'))
                    return false;
        } else {
            if(word.size() == 1) return true;
            if(word[1] <= 'z' && word[1] >= 'a'){
                for (int i = 2 ; i < word.size() ; i++)
                    if (!(word[i] <= 'z' && word[i] >= 'a'))
                        return false;
            }
            if (word[1] <= 'Z' && word[1] >= 'A'){
                for (int i = 2 ; i < word.size() ; i++)
                    if (!(word[i] <= 'Z' && word[i] >= 'A'))
                        return false;
            }
        }
        return true;
    }
};

#endif //LEETCODE_DETECTCAPITAL_H
