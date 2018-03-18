/*
 * File   : UniquePaths
 * Author : KsGin 
 * Date   : 2018/3/18
 */

#ifndef LEETCODE_UNIQUEPATHS_H
#define LEETCODE_UNIQUEPATHS_H

#include <vector>

using namespace std;

class UniquePaths {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m , vector<int>(n , 0));
        dp[m-1][n-1] = 1;
        for (int i = m-1; i >= 0; --i) {
            for (int j = n-1; j >= 0; --j) {
                if (i+1 < m) dp[i][j] += dp[i+1][j];
                if (j+1 < n) dp[i][j] += dp[i][j+1];
            }
        }
        return dp[0][0];
    }
};

#endif //LEETCODE_UNIQUEPATHS_H
