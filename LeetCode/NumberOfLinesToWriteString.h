/*
 * File   : NumberOfLinesToWriteString
 * Author : KsGin 
 * Date   : 2018/7/7
 */

#ifndef LEETCODE_NUMBEROFLINESTOWRITESTRING_H
#define LEETCODE_NUMBEROFLINESTOWRITESTRING_H

#include <vector>
#include <string>

using namespace std;

class NumberOfLinesToWriteString {
public:
    vector<int> numberOfLines(vector<int> &widths, string S) {
        vector<int> ret(2, 0);
        if (S.empty()) return ret;
        for (auto &c : S) {
            int w = widths[c - 'a'];
            if (ret[1] + w > 100) {
                ++ret[0];
                ret[1] = w;
            } else {
                ret[1] += w;
            }
        }
        if (ret[1] != 0) ++ret[0];
        return ret;
    }
};

#endif //LEETCODE_NUMBEROFLINESTOWRITESTRING_H
