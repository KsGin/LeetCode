/*
 * File Name:ArithmeticSlices
 * Author   :ksgin
 * Date     :29/09/2017
 */

#ifndef LEETCODE_ARITHMETICSLICES_H
#define LEETCODE_ARITHMETICSLICES_H

#include <vector>

class ArithmeticSlices {
public:
    int numberOfArithmeticSlices(std::vector<int> &A) {
        //DP
        auto N = A.size();
        auto ret = 0;
        auto cut = 0;

        for(int i = 2; i < N; ++i) {
            if (A[i] - A[i - 1] == A[i - 1] - A[i - 2]) {
                cut++;
                ret += cut;
            } else {
                cut = 0;
            }
        }

        return ret;
    }
};

#endif //LEETCODE_ARITHMETICSLICES_H
