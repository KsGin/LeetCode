/*
 * File Name:ReshapeTheMatrix
 * Author   :ksgin
 * Date     :2017/9/7
 */

#ifndef LEETCODE_RESHAPETHEMATRIX_H
#define LEETCODE_RESHAPETHEMATRIX_H

#include <vector>

class ReshapeTheMatrix {
public:
    std::vector<std::vector<int>> matrixReshape(std::vector<std::vector<int>> &nums, int r, int c) {
        std::vector<std::vector<int>> vv(std::move(nums));
        auto count = static_cast<int>(vv.size() * vv[0].size());
        if (r * c != count || r == vv.size()) {
            return vv;
        }
        std::vector<std::vector<int>> ret(0);
        int row = 1;
        for(auto &i : vv) {
            for(int &j : i) {
                if (row == 1){
                    ret.emplace_back(0);
                }
                if (row == c) {
                    row = 1;
                } else {
                    row++;
                }
                ret[ret.size() - 1].push_back(j);
            }
        }
        return ret;
    }
};

#endif //LEETCODE_RESHAPETHEMATRIX_H
