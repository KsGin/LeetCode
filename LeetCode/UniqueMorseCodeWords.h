/*
 * File   : UniqueMorseCodeWords
 * Author : KsGin 
 * Date   : 2018/4/1
 */

#ifndef LEETCODE_UNIQUEMORSECODEWORDS_H
#define LEETCODE_UNIQUEMORSECODEWORDS_H

#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string> &words) {
        vector<string> codes = {
                ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---",
                ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."
        };
        unordered_set<string> set;
        for(auto word : words){
            string tmp("");
            for (auto letter : word){
                tmp += codes[(int)letter - 97];
            }
            set.insert(tmp);
        }
        return set.size();
    }
};

#endif //LEETCODE_UNIQUEMORSECODEWORDS_H
