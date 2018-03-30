/*
 * File   : MaximumSubarray
 * Author : KsGin 
 * Date   : 2018/3/30
 */

#ifndef LEETCODE_MAXIMUMSUBARRAY_H
#define LEETCODE_MAXIMUMSUBARRAY_H

#include <vector>

using namespace std;

class MaximumSubarray {
public:
    int maxSubArray(vector<int>& nums) {
        long maxSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            long thisSum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                thisSum += nums[j];
                if (thisSum > maxSum)
                    maxSum = thisSum;
            }
        }
        return maxSum;
    }
};

#endif //LEETCODE_MAXIMUMSUBARRAY_H
