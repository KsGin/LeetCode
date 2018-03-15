/*
 * File   : CombinationSumIV
 * Author : KsGin 
 * Date   : 2018/3/15
 */

#ifndef LEETCODE_COMBINATIONSUMIV_H
#define LEETCODE_COMBINATIONSUMIV_H

#include <vector>

using namespace std;

class CombinationSumIV {
public:
    int combinationSum4(vector<int> &nums, int target) {
        vector<int> dp(target+1,0);
        dp[0] = 1;
        for (int i = 1; i <= target; ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if (i >= nums[j]) dp[i] += dp[i - nums[j]];
            }
        }

        return dp[target];
    }
};

#endif //LEETCODE_COMBINATIONSUMIV_H
