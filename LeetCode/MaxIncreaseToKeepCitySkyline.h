/*
 * File   : MaxIncreaseToKeepCitySkyline
 * Author : KsGin 
 * Date   : 2018/6/24
 */

#include <vector>

using namespace std;

class MaxIncreaseToKeepCitySkyline {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>> &grid) {
        if (grid.empty())
            return 0;
        vector<int> rowMax(grid.size(), 0), colMax(grid[0].size(), 0);
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                rowMax[i] = rowMax[i] > grid[i][j] ? rowMax[i] : grid[i][j];
                colMax[j] = colMax[j] > grid[i][j] ? colMax[j] : grid[i][j];
            }
        }

        int ret = 0;

        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                int minMax = rowMax[i] < colMax[j] ? rowMax[i] : colMax[j];
                int increase = minMax - grid[i][j];
                ret += increase > 0 ? increase : 0;
            }
        }

        return ret;
    }
};