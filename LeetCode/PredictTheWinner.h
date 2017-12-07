/*
 * File   : PredictTheWinner
 * Author : KsGin 
 * Date   : 2017/12/7
 */

#ifndef LEETCODE_PREDICTTHEWINNER_H
#define LEETCODE_PREDICTTHEWINNER_H

#include <vector>

class PredictTheWinnerSolution {
public:
    bool PredictTheWinner(std::vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        std::vector<std::vector<int>> dp(n, std::vector<int>(n, 0));
        for (int i = 0; i < n; ++i) dp[i][i] = nums[i];
        for (int len = 1; len < n; ++len) {
            for (int i = 0, j = len; j < n; ++i, ++j) {
                dp[i][j] = std::max(nums[i] - dp[i + 1][j], nums[j] - dp[i][j - 1]);
            }
        }
        return dp[0][n - 1] >= 0;
    }
};


#endif //LEETCODE_PREDICTTHEWINNER_H
