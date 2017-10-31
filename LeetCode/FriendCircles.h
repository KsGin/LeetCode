/*
 * File   : FriendCircles
 * Author : KsGin 
 * Date   : 27/10/2017
 */

#ifndef LEETCODE_FRIENDCIRCLES_H
#define LEETCODE_FRIENDCIRCLES_H

#include <vector>

class FriendCircles {
public:
    int findCircleNum(std::vector<std::vector<int>>& M) {
        int n = static_cast<int>(M.size()), res = 0;
        std::vector<bool> visited(n, false);
        for (int i = 0; i < n; ++i) {
            if (visited[i]) continue;
            helper(M, i, visited);
            ++res;
        }
        return res;
    }
    void helper(std::vector<std::vector<int>>& M, int k, std::vector<bool>& visited) {
        visited[k] = true;
        for (int i = 0; i < M.size(); ++i) {
            if (!M[k][i] || visited[i]) continue;
            helper(M, i, visited);
        }
    }
};

#endif //LEETCODE_FRIENDCIRCLES_H
