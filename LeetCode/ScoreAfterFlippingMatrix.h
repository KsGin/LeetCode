/*
 * File   : ScoreAfterFlippingMatrix
 * Author : KsGin 
 * Date   : 2018/7/5
 */

#ifndef LEETCODE_SCOREAFTERFLIPPINGMATRIX_H
#define LEETCODE_SCOREAFTERFLIPPINGMATRIX_H

#include <vector>
#include <cmath>

using namespace std;

class ScoreAfterFlippingMatrix {
public:
    int matrixScore(vector<vector<int>> &A) {
        if (A.empty()) return 0;
        for (int i = 0; i < A.size(); ++i) {
            int flag = 0;
            for (int j = 0; j < A[i].size(); ++j) {
                if (A[i][0] == 0 || flag) {
                    A[i][j] = A[i][j] == 1 ? 0 : 1;
                    flag = 1;
                }
            }
        }

        for (int i = 1; i < A[0].size(); ++i) {
            int sum = 0;
            for (int j = 0; j < A.size(); ++j) {
                sum += A[j][i];
            }
            if (sum * 2 < A.size()) {
                for (int j = 0; j < A.size(); ++j) {
                    A[j][i] = A[j][i] == 1 ? 0 : 1;
                }
            }
        }

        int ret = 0;
        for (int i = 0; i < A.size(); ++i) {
            for (int j = 0; j < A[i].size(); ++j) {
                ret += A[i][j] * pow(2, A[i].size() - 1 - j);
            }
        }
        return ret;
    }
};

#endif //LEETCODE_SCOREAFTERFLIPPINGMATRIX_H
