/*
 * File   : MaxAreaOfIsland
 * Author : KsGin 
 * Date   : 2017/10/9
 */

#ifndef LEETCODE_MAXAREAOFISLAND_H
#define LEETCODE_MAXAREAOFISLAND_H

#include <vector>

class MaxAreaOfIsland {

private:
    int dfs(std::vector<std::vector<int>>& grid, int i, int j) {
        if (i >= grid.size() || j >= grid[0].size()
            || i < 0 || j < 0  || grid[i][j] == 0) {
            return 0;
        }

        grid[i][j] = 0;

        return 1
               + dfs(grid, i - 1, j)
               + dfs(grid, i + 1, j)
               + dfs(grid, i, j - 1)
               + dfs(grid, i, j + 1);

    }

public:

    int maxAreaOfIsland(std::vector<std::vector<int>> &grid) {
        if (grid.empty()) return 0;

        int ret = 0;

        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                int cut = dfs(grid , i , j);
                ret = cut > ret ? cut : ret;
            }
        }

        return ret;
    }
};

#endif //LEETCODE_MAXAREAOFISLAND_H
