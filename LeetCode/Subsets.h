/*
 * File   : Subsets
 * Author : KsGin 
 * Date   : 2018/1/26
 */

#ifndef LEETCODE_SUBSETS_H
#define LEETCODE_SUBSETS_H

#include <vector>

using namespace std;

class Subsets {
public:
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> ret(0);
        ret.push_back(vector<int>());
        for (int i = 0; i < nums.size(); i++) {
            auto se = ret.size();
            for (auto j = 0; j < se; ++j) {
                auto tmp = ret[j];
                tmp.push_back(nums[i]);
                ret.push_back(tmp);
            }
        }
        return ret;
    }
};

#endif //LEETCODE_SUBSETS_H
