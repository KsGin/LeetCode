/*
 * File Name:SingleNumber
 * Author   :ksgin
 * Date     :29/09/2017
 */

#ifndef LEETCODE_SINGLENUMBER_H
#define LEETCODE_SINGLENUMBER_H

#include <vector>
#include <algorithm>

class SingleNumber {
public:
    int singleNumber(std::vector<int> &nums) {
        std::sort(nums.begin() , nums.end());

        if (nums.size() == 1 || nums[1] != nums[0]) return nums[0];
        if (nums[nums.size() - 1] != nums[nums.size()-2]) return nums[nums.size()-1];

        for(int i = 2; i < nums.size()-2; ++i) {
            if (nums[i-1] != nums[i] && nums[i+1] != nums[i])
                return nums[i];
        }

        return 0;
    }
};

#endif //LEETCODE_SINGLENUMBER_H
