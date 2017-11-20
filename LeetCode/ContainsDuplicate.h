/*
 * File   : ContainsDuplicate
 * Author : KsGin 
 * Date   : 2017/11/20
 */

#ifndef LEETCODE_CONTAINSDUPLICATE_H
#define LEETCODE_CONTAINSDUPLICATE_H

#include <vector>

class ContainsDuplicate {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        if(nums.size() < 2) return false;
        std::sort(nums.begin(),nums.end());
        for (int i = 1; i < nums.size(); ++i) {
            if(nums[i] == nums[i-1]) return true;
        }
        return false;
    }
};

#endif //LEETCODE_CONTAINSDUPLICATE_H
