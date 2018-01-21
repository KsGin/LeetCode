/*
 * File   : MinCostClimbingStairs
 * Author : KsGin 
 * Date   : 2018/1/21
 */

#ifndef LEETCODE_MINCOSTCLIMBINGSTAIRS_H
#define LEETCODE_MINCOSTCLIMBINGSTAIRS_H

#include <vector>

using namespace std;

class MinCostClimbingStairs {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = static_cast<int>(cost.size());
        vector<int> dp(size,0);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for (int i = 2; i < size; ++i) {
            dp[i] = cost[i] + min(dp[i-1] , dp[i-2]);
        }
        return min(dp[size-1],dp[size-2]);
    }
};


#endif //LEETCODE_MINCOSTCLIMBINGSTAIRS_H
