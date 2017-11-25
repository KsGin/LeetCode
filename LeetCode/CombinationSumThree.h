/*
 * File   : CombinationSumThree
 * Author : KsGin 
 * Date   : 2017/11/25
 */

#ifndef LEETCODE_COMBINATIONSUMTHREE_H
#define LEETCODE_COMBINATIONSUMTHREE_H

#include <vector>

class CombinationSumThree {
public:
    void combination(std::vector<std::vector<int>>& vc ,std::vector<int> cur , int tar, int dep) {

        if(cur.size() == dep && tar == 0) {
            vc.push_back(cur);
            return;
        }

        if(cur.size() > dep) return;

        int start = cur.empty() ? 1 : cur[cur.size()-1] + 1;
        if(start > 9)
            return;

        cur.push_back(start);
        combination(vc , cur , tar - start , dep);

        for (int i = start + 1; i <= 9; ++i) {
            cur[cur.size()-1] = i;
            combination(vc , cur , tar - i , dep);
        }
    }

    std::vector<std::vector<int>> combinationSum3(int k, int n) {
        std::vector<std::vector<int>> result(0);
        std::vector<int> tmp(0);

        combination(result , tmp , n , k);

        return result;
    }
};

#endif //LEETCODE_COMBINATIONSUMTHREE_H
