/*
 * File   : SingleNumberThree
 * Author : KsGin 
 * Date   : 2017/10/7
 */

#ifndef LEETCODE_SINGLENUMBERTHREE_H
#define LEETCODE_SINGLENUMBERTHREE_H

#include <vector>
#include <algorithm>

class SingleNumberThree {
public:
    std::vector<int> singleNumber(std::vector<int>& nums) {
        if(nums.size() < 2)
            return nums;
        int cut = 1;
        std::vector<int> ret(0);
        std::sort(nums.begin() , nums.end());
        for (int i = 1; i < nums.size(); ++i) {
            if(nums[i] == nums[i-1]) cut++;
            else{
                if(cut == 1) ret.push_back(nums[i-1]);
                else cut = 1;
            }
        }
        if(cut == 1) ret.push_back(nums[nums.size()-1]);
        return ret;
    }
};

#endif //LEETCODE_SINGLENUMBERTHREE_H
