/*
 * File   : FourSumTwo
 * Author : KsGin 
 * Date   : 2017/11/12
 */

#ifndef LEETCODE_FOURSUMTWO_H
#define LEETCODE_FOURSUMTWO_H

#include <vector>
#include <unordered_map>

class FourSumTwo {
public:
    int fourSumCount(std::vector<int>& A, std::vector<int>& B, std::vector<int>& C, std::vector<int>& D) {
        int res = 0;
        std::unordered_map<int, int> m;
        for (int i = 0; i < A.size(); ++i) {
            for (int j = 0; j < B.size(); ++j) {
                ++m[A[i] + B[j]];
            }
        }
        for (int i = 0; i < C.size(); ++i) {
            for (int j = 0; j < D.size(); ++j) {
                int target = -1 * (C[i] + D[j]);
                res += m[target];
            }
        }
        return res;
    }

};

#endif //LEETCODE_FOURSUMTWO_H
