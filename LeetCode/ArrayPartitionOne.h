/*
 * File Name:ArrayPartitionOne
 * Author   :ksgin
 * Date     :2017/8/28
 */

#ifndef LEETCODE_ARRAYPARTITIONONE_H
#define LEETCODE_ARRAYPARTITIONONE_H

#include <vector>
#include <algorithm>

class ArrayPartitionOne {
public:
    int arrayPairSum(std::vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int ret = 0;
        for (auto i = 0; i < nums.size(); i+=2)
        {
            ret += nums[i];
        }
        return ret;
    }
};

#endif //LEETCODE_ARRAYPARTITIONONE_H
