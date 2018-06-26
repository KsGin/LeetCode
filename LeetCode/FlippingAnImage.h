/*
 * File   : FlippingAnImage
 * Author : KsGin 
 * Date   : 2018/6/26
 */

#ifndef LEETCODE_FLIPPINGANIMAGE_H
#define LEETCODE_FLIPPINGANIMAGE_H

#include <vector>

using namespace std;

class FlippingAnImage {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A) {
        if (A.empty()) return A;
        vector<vector<int>> ret(A.size(), vector<int>(A[0].size(), 0));
        for (int i = 0; i < A.size(); ++i) {
            for (int j = A[i].size() - 1; j >= 0; --j) {
                ret[i][A[i].size() - j - 1] = !A[i][j];
            }
        }
        return ret;
    }
};

#endif //LEETCODE_FLIPPINGANIMAGE_H
