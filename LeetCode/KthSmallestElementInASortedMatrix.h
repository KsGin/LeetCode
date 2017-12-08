/*
 * File   : KthSmallestElementInASortedMatrix
 * Author : KsGin 
 * Date   : 2017/12/8
 */

#ifndef LEETCODE_KTHSMALLESTELEMENTINASORTEDMATRIX_H
#define LEETCODE_KTHSMALLESTELEMENTINASORTEDMATRIX_H


#include <vector>

class KthSmallestElementInASortedMatrix {
public:
    int kthSmallest(std::vector<std::vector<int>>& matrix, int k) {
        std::vector<int> mat(0);
        for (auto vec : matrix){
            for (auto vrs : vec){
                mat.push_back(vrs);
            }
        }

        std::sort(mat.begin() , mat.end());

        return mat[k-1];
    }
};

#endif //LEETCODE_KTHSMALLESTELEMENTINASORTEDMATRIX_H
