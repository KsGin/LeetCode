/*
 * File Name : IslandPerimeter
 * Author    : KsGin
 * Date      : 2017/9/10
 */

#ifndef LEETCODE_ISLANDPERIMETER_H
#define LEETCODE_ISLANDPERIMETER_H

#include <vector>

class IslandPerimeter {
public:
    int islandPerimeter(std::vector<std::vector<int>>& grid) {
        if (grid.empty() || grid[0].empty()) return 0;
        int m = grid.size(), n = grid[0].size(), res = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 0) continue;
                if (j == 0 || grid[i][j - 1] == 0) ++res;
                if (i == 0 || grid[i - 1][j] == 0) ++res;
                if (j == n - 1 || grid[i][j + 1] == 0) ++res;
                if (i == m - 1 || grid[i + 1][j] == 0) ++res;
            }
        }
        return res;

    }
};


#endif //LEETCODE_ISLANDPERIMETER_H
