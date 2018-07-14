/*
 * File   : TransposeMatrix
 * Author : KsGin 
 * Date   : 2018/7/14
 */

#ifndef LEETCODE_TRANSPOSEMATRIX_H
#define LEETCODE_TRANSPOSEMATRIX_H

#include <vector>

using namespace std;

class TransposeMatrix {
public:
    vector<vector<int>> transpose(vector<vector<int>> &A) {
        if (A.empty()) return A;
        int row = A.size(), col = A[0].size();
        vector<vector<int>> ret(col, vector<int>(row, 0));
        for (int i = 0; i < A.size(); ++i) {
            for (int j = 0; j < A[i].size(); ++j) {
                ret[j][i] = A[i][j];
            }
        }
        return ret;
    }
};

#endif //LEETCODE_TRANSPOSEMATRIX_H
