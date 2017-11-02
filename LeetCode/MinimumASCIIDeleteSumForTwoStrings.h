/*
 * File   : MinimumASCIIDeleteSumForTwoStrings
 * Author : KsGin 
 * Date   : 31/10/2017
 */

#ifndef LEETCODE_MINIMUMASCIIDELETESUMFORTWOSTRINGS_H
#define LEETCODE_MINIMUMASCIIDELETESUMFORTWOSTRINGS_H

#include <string>
#include <vector>

class MinimumASCIIDeleteSumForTwoStrings {
public:
    int minimumDeleteSum(std::string s1, std::string s2) {
        unsigned long m = s1.size(), n = s2.size();
        std::vector<std::vector<int>> dp(m + 1 , std::vector<int>(n+1 , 0));
        for (int j = 1; j <= n; ++j) dp[0][j] = dp[0][j - 1] + s2[j - 1];
        for (int i = 1; i <= m; ++i) {
            dp[i][0] = dp[i - 1][0] + s1[i - 1];
            for (int j = 1; j <= n; ++j) {
                dp[i][j] = (s1[i - 1] == s2[j - 1]) ? dp[i - 1][j - 1] : std::min(dp[i - 1][j] + s1[i - 1], dp[i][j - 1] + s2[j - 1]);
            }
        }
        return dp[m][n];
    }
};

#endif //LEETCODE_MINIMUMASCIIDELETESUMFORTWOSTRINGS_H
