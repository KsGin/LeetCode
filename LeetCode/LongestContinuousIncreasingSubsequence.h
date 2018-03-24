/*
 * File   : LongestContinuousIncreasingSubsequence
 * Author : KsGin 
 * Date   : 2018/3/24
 */

#ifndef LEETCODE_LONGESTCONTINUOUSINCREASINGSUBSEQUENCE_H
#define LEETCODE_LONGESTCONTINUOUSINCREASINGSUBSEQUENCE_H

#include <vector>

using namespace std;

class LongestContinuousIncreasingSubsequence {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.empty()) return 0;
        int res = 1 , cot = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if(nums[i] > nums[i-1]) cot++;
            else {
                res = max(cot , res);
                cot = 1;
            }
        }
        res = max(cot , res);
        return res;
    }
};

#endif //LEETCODE_LONGESTCONTINUOUSINCREASINGSUBSEQUENCE_H
