/*
 * File   : LongestPalindromicSubsequence
 * Author : imqqy
 * Date   : 2018/3/13
 */

#ifndef LEETCODE_LONGESTPALINDROMICSUBSEQUENCE_H
#define LEETCODE_LONGESTPALINDROMICSUBSEQUENCE_H

#include <string>
#include <vector>

using namespace std;

class LongestPalindromicSubsequence {
public:
    int longestPalindromeSubseq(string s) {
        vector<vector<int>> dp(s.size() , vector<int>(s.size() , 0));
        for(int i = s.size() - 1 ; i >= 0 ; --i){
            dp[i][i] = 1;
            for (int j = i+1; j < s.size(); ++j) {
                if (s[i] == s[j]) dp[i][j] = dp[i+1][j-1] + 2;
                else dp[i][j] = max(dp[i+1][j] , dp[i][j-1]);
            }
        }
        return dp[0][s.size()-1];
    }
};

#endif //LEETCODE_LONGESTPALINDROMICSUBSEQUENCE_H
