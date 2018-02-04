/*
 * File   : PyramidTransitionMatrix
 * Author : KsGin 
 * Date   : 2018/2/1
 */

#ifndef LEETCODE_PYRAMIDTRANSITIONMATRIX_H
#define LEETCODE_PYRAMIDTRANSITIONMATRIX_H

#include <unordered_map>
#include <string>
#include <vector>
#include <set>

using namespace std;

class PyramidTransitionMatrix {
public:
    bool pyramidTransition(string bottom, vector<string>& allowed) {
        int n = bottom.size();
        unordered_map<string, vector<char>> mp;
        vector<vector<set<char>>> dp(n, vector<set<char>>(n));

        for(string temp: allowed){
            mp[temp.substr(0,2)].push_back(temp[2]);
        }

        for(int i = 0; i < n ; ++i) {
            dp[0][i].insert(bottom[i]);
        }

        for(int i = 1; i < n; ++i){
            for(int j = 0; j < n-i; ++j){
                for(char a: dp[i-1][j]){
                    for(char b: dp[i-1][j+1]){
                        string s = "";
                        s = s+a+b;
                        for(char c: mp[s]){
                            dp[i][j].insert(c);
                        }
                    }
                }
            }
        }

        return !dp[n-1][0].empty();
    }
};

#endif //LEETCODE_PYRAMIDTRANSITIONMATRIX_H
