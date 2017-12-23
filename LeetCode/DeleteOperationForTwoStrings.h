/*
 * File   : DeleteOperationForTwoStrings
 * Author : KsGin 
 * Date   : 2017/12/23
 */

#ifndef LEETCODE_DELETEOPERATIONFORTWOSTRINGS_H
#define LEETCODE_DELETEOPERATIONFORTWOSTRINGS_H


#include <string>
#include <vector>

using namespace std;

class DeleteOperationForTwoStrings {
public:
    int minDistance(string word1, string word2) {
        int n1 = word1.size(), n2 = word2.size();
        vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));
        for (int i = 1; i <= n1; ++i) {
            for (int j = 1; j <= n2; ++j) {
                if (word1[i - 1] == word2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return n1 + n2 - 2 * dp[n1][n2];
    }
};

#endif //LEETCODE_DELETEOPERATIONFORTWOSTRINGS_H
