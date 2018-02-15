/*
 * File   : ToeplitzMatrix
 * Author : KsGin 
 * Date   : 2018/2/15
 */

#ifndef LEETCODE_TOEPLITZMATRIX_H
#define LEETCODE_TOEPLITZMATRIX_H

#include <vector>

using namespace std;

class ToeplitzMatrix {
    bool Judge(vector<vector<int>> &matrix, int i, int j) {
        for (int x = i, y = j; x < matrix.size() && y < matrix[i].size(); ++x, ++y) {
            if (matrix[x][y] != matrix[i][j]) return false;
        }
        return true;
    }

public:
    bool isToeplitzMatrix(vector<vector<int>> &matrix) {
        if (matrix.empty()) return true;
        bool ret = true;
        for (int i = 0; i < matrix.size(); ++i) {
            if (!Judge(matrix, i, 0)) return false;
        }
        for (int j = 1; j < matrix[0].size(); ++j) {
            if (!Judge(matrix, 0, j)) return false;
        }
        return ret;
    }
};

#endif //LEETCODE_TOEPLITZMATRIX_H
