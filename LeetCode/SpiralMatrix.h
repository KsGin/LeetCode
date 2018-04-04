/*
 * File   : SpiralMatrix
 * Author : KsGin 
 * Date   : 2018/4/3
 */

#ifndef LEETCODE_SPIRALMATRIX_H
#define LEETCODE_SPIRALMATRIX_H

#include <vector>

using namespace std;

class SpiralMatrix {
    void spiral(const vector<vector<int>> &matrix, vector<int> &result, int idx) {
        int left = idx;
        int top = idx;
        int right = matrix[top].size() - 1 - idx;
        int bottom = matrix.size() - 1 - idx;

        if (right < left || bottom < top) return;

        if (right == left && bottom == top) {
            result.push_back(matrix[bottom][right]);
            return;
        }

        for (int i = left; i <= right; ++i) {    // A -> B
            result.push_back(matrix[top][i]);
        }
        for (int i = top + 1; i <= bottom; ++i) {    // B -> C
            result.push_back(matrix[i][right]);
        }
        if (bottom > top){
            for (int i = right - 1; i >= left; --i) {    // C -> D
                result.push_back(matrix[bottom][i]);
            }
        }
        if (right > left){
            for (int i = bottom - 1; i > top; --i) {    // D -> A
                result.push_back(matrix[i][left]);
            }
        }

        spiral(matrix , result , idx + 1);
    }

public:
    vector<int> spiralOrder(vector<vector<int>> &matrix) {
        vector<int> result(0);
        if (matrix.empty())
            return result;
        spiral(matrix , result , 0);
        return result;
    }
};

#endif //LEETCODE_SPIRALMATRIX_H
