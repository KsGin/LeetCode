/*
 * File   : BurstBalloons
 * Author : KsGin 
 * Date   : 2018/1/31
 */

#ifndef LEETCODE_BURSTBALLOONS_H
#define LEETCODE_BURSTBALLOONS_H

#include <vector>

using namespace std;

class BurstBalloons {
public:
    int maxCoins(vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        vector<vector<int> > dp(nums.size(), vector<int>(nums.size() , 0));
        for (int len = 1; len <= n; ++len) {
            for (int left = 1; left <= n - len + 1; ++left) {
                int right = left + len - 1;
                for (int k = left; k <= right; ++k) {
                    dp[left][right] = max(dp[left][right], nums[left - 1] * nums[k] * nums[right + 1] + dp[left][k - 1] + dp[k + 1][right]);
                }
            }
        }
        return dp[1][n];
    }
};

#endif //LEETCODE_BURSTBALLOONS_H
