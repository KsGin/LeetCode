/*
 * File   : MaximumXOROfTwoNumbersInAnArray
 * Author : KsGin 
 * Date   : 2017/11/17
 */

#ifndef LEETCODE_MAXIMUMXOROFTWONUMBERSINANARRAY_H
#define LEETCODE_MAXIMUMXOROFTWONUMBERSINANARRAY_H

#include <vector>

class MaximumXOROfTwoNumbersInAnArray {
public:
    int findMaximumXOR(std::vector<int>& nums) {
        if(nums.size() < 2) return 0;
        int max = (nums[0] | nums[1]) - (nums[0] & nums[1]);
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i+1; j < nums.size(); ++j) {
                int tmp = (nums[i] | nums[j]) - (nums[i] & nums[j]);
                if (tmp > max) max = tmp;
            }
        }
        return max;
    }
};

#endif //LEETCODE_MAXIMUMXOROFTWONUMBERSINANARRAY_H
