/*
 * File   : DiagonalTraverse
 * Author : KsGin 
 * Date   : 2017/11/26
 */

#ifndef LEETCODE_DIAGONALTRAVERSE_H
#define LEETCODE_DIAGONALTRAVERSE_H


#include <vector>

class DiagonalTraverse {
public:
    std::vector<int> findDiagonalOrder(std::vector<std::vector<int>>& matrix) {
        std::vector<int> result(0);
        if(matrix.size() == 0) return result;
        if(matrix.size() == 1) return matrix[0];

        std::vector<std::vector<int>> tmp(matrix[0].size()+matrix.size()-1 , std::vector<int>(0));

        for (int i = 0; i < matrix[0].size(); ++i) {
            for (int j = 0; j < matrix.size(); ++j) {
                tmp[i+j].push_back(matrix[j][i]);
            }
        }

        bool f = true;
        for (auto i : tmp) {
            if(f){
                for (int j = 0; j < i.size(); ++j) {
                    result.push_back(i[j]);
                }
            } else {
                for (int j = static_cast<int>(i.size() - 1); j >= 0 ; --j) {
                    result.push_back(i[j]);
                }
            }
            f = !f;
        }

        return result;
    }
};

#endif //LEETCODE_DIAGONALTRAVERSE_H
