/*
 * File   : ChampagneTower
 * Author : KsGin 
 * Date   : 2018/3/28
 */

#ifndef LEETCODE_CHAMPAGNETOWER_H
#define LEETCODE_CHAMPAGNETOWER_H

#include <vector>

using namespace std;

class ChampagneTower {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> dp(0);
        for (int i = 0; i < query_row+1; ++i) {
            dp.push_back(vector<double>(i+1 , 0));
        }
        dp[0][0] = poured;
        for (int i = 1; i <= query_row; ++i) {
            for (int j = 0; j < dp[i].size(); ++j) {
                if (j > 0) dp[i][j] += max(0.0 ,(dp[i-1][j-1] - 1)) / 2;
                if (j < dp[i].size()-1) dp[i][j] += max(0.0 ,(dp[i-1][j] - 1) / 2);
            }
        }

        return min(1.0 , dp[query_row][query_glass]);

    }
};

#endif //LEETCODE_CHAMPAGNETOWER_H
