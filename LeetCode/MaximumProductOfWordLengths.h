/*
 * File   : MaximumProductOfWordLengths
 * Author : KsGin 
 * Date   : 2017/12/13
 */

#ifndef LEETCODE_MAXIMUMPRODUCTOFWORDLENGTHS_H
#define LEETCODE_MAXIMUMPRODUCTOFWORDLENGTHS_H

#include <vector>
#include <string>

using namespace std;

class MaximumProductOfWordLengths {
public:
    int maxProduct(vector<string>& words) {
        int res = 0;
        vector<int> mask(words.size(), 0);
        for (int i = 0; i < words.size(); ++i) {
            for (char c : words[i]) {
                mask[i] |= 1 << (c - 'a');
            }
            for (int j = 0; j < i; ++j) {
                if (!(mask[i] & mask[j])) {
                    res = max(res, int(words[i].size() * words[j].size()));
                }
            }
        }
        return res;
    }
};

#endif //LEETCODE_MAXIMUMPRODUCTOFWORDLENGTHS_H
