/*
 * File   : IsSubsequence
 * Author : KsGin 
 * Date   : 2017/12/18
 */

#ifndef LEETCODE_ISSUBSEQUENCE_H
#define LEETCODE_ISSUBSEQUENCE_H

#include <string>

using namespace std;

class IsSubsequence {
public:
    bool isSubsequence(string s, string t) {
        if(s.empty()) return true;
        int idxs = 0 , idxt = 0;
        while (idxs < s.size() && idxt < t.size()){
            if(s[idxs] == t[idxt]){
                ++idxs;
                ++idxt;
            } else {
                ++idxt;
            }
        }
        return idxs == s.size();
    }
};

#endif //LEETCODE_ISSUBSEQUENCE_H
