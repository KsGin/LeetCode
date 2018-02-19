/*
 * File   : LetterCasePermutation
 * Author : KsGin 
 * Date   : 2018/2/19
 */

#ifndef LEETCODE_LETTERCASEPERMUTATION_H
#define LEETCODE_LETTERCASEPERMUTATION_H

#include <vector>
#include <string>
#include <set>

using namespace std;

class LetterCasePermutation {
    void push(string s, int idx, set<string> &set) {
        if (idx >= s.size())return;
        push(s, idx + 1, set);
        if (isdigit(s[idx])) return;
        auto tmp = s;
        tmp[idx] += tmp[idx] >= 'a' && tmp[idx] <= 'z' ? -32 : 32;
        set.insert(tmp);
        push(tmp, idx + 1, set);
    }

public:
    vector<string> letterCasePermutation(string S) {
        set<string> tmp;
        tmp.insert(S);
        push(S, 0, tmp);
        vector<string> ret(0);
        for (auto t : tmp) ret.insert(ret.begin(),t);
        return ret;
    }
};

#endif //LEETCODE_LETTERCASEPERMUTATION_H
