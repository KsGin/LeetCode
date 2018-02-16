/*
 * File   : ShortestCompletingWord
 * Author : KsGin 
 * Date   : 2018/2/16
 */

#ifndef LEETCODE_SHORTESTCOMPLETINGWORD_H
#define LEETCODE_SHORTESTCOMPLETINGWORD_H

#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class ShortestCompletingWord {
public:
    bool judge(string licensePlate, string word) {
        unordered_map<char, int> um;
        for (auto c : word) {
            c = tolower(c);
            if (c <= 'z' && c >= 'a') {
                if (um[c] > 0)
                    ++um[c];
                else um[c] = 1;
            }
        }
        for (auto c : licensePlate) {
            c = tolower(c);
            if (c <= 'z' && c >= 'a') {
                if (um[c] > 0)
                    --um[c];
                else return false;
            }
        }
        return true;
    }

    string shortestCompletingWord(string licensePlate, vector<string> words) {
        string ret = "";
        for (auto w : words) {
            if (judge(licensePlate, w) && (ret.empty() || w.size() < ret.size()))
                ret = w;
        }
        return ret;
    }
};

#endif //LEETCODE_SHORTESTCOMPLETINGWORD_H
