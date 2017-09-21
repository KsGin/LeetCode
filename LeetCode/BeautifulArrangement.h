/*
 * File Name:BeautifulArrangement
 * Author   :ksgin
 * Date     :21/09/2017
 */

#ifndef LEETCODE_BEAUTIFULARRANGEMENT_H
#define LEETCODE_BEAUTIFULARRANGEMENT_H

#include <vector>

class BeautifulArrangement {
public:
    int countArrangement(int N) {
        int res = 0;
        std::vector<int> visited(N + 1, 0);
        helper(N, visited, 1, res);
        return res;
    }
    void helper(int N, std::vector<int>& visited, int pos, int& res) {
        if (pos > N) {
            ++res;
            return;
        }
        for (int i = 1; i <= N; ++i) {
            if (visited[i] == 0 && (i % pos == 0 || pos % i == 0)) {
                visited[i] = 1;
                helper(N, visited, pos + 1, res);
                visited[i] = 0;
            }
        }
    }
};

#endif //LEETCODE_BEAUTIFULARRANGEMENT_H
