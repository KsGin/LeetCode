/*
 * File   : RandomPickIndex
 * Author : KsGin 
 * Date   : 2017/12/29
 */

#ifndef LEETCODE_RANDOMPICKINDEX_H
#define LEETCODE_RANDOMPICKINDEX_H

#include <vector>

using namespace std;

class RandomPickIndex {
    vector<int> _nums;
public:
    RandomPickIndex(vector<int> nums) {
        _nums = move(nums);
    }

    int pick(int target) {
        vector<int> idxs(0);
        for (int i = 0; i < _nums.size(); ++i) {
            if(target == _nums[i]) idxs.push_back(i);
        }
        return idxs[rand() % idxs.size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * int param_1 = obj.pick(target);
 */

#endif //LEETCODE_RANDOMPICKINDEX_H
