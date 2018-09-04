/*
 * File   : FindAndReplacePattern
 * Author : KsGin 
 * Date   : 2018/9/4
 */

#ifndef LEETCODE_FINDANDREPLACEPATTERN_H
#define LEETCODE_FINDANDREPLACEPATTERN_H

#include <vector>
#include <string>

using namespace std;

class FindAndReplacePattern {
public:
    vector<string> findAndReplacePattern(vector<string> &words, string pattern) {
        vector<string> res(0);
        bool isPattern;
        for (auto &word : words) {
            isPattern = true;
            for (int i = 1; i < pattern.size(); ++i) {
                for (int j = 0; j < i; ++j) {
                    if ((word[i] == word[j]) ^ (pattern[i] == pattern[j])) {
                        isPattern = false;
                        break;
                    }
                }
                if (!isPattern) break;
            }
            if (isPattern) res.push_back(word);
        }
        return res;
    }
};

#endif //LEETCODE_FINDANDREPLACEPATTERN_H
