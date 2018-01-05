/*
 * File   : TargetSum
 * Author : KsGin 
 * Date   : 2018/1/4
 */

#ifndef LEETCODE_TARGETSUM_H
#define LEETCODE_TARGETSUM_H

#include <vector>

using namespace std;


class TargetSum {
    void findWays(vector<int>& atoms, int target, int dep, int &res) {
        if (dep >= atoms.size()) {
            if(target == 0) ++res;
            return;
        }
        findWays(atoms, target - atoms[dep], dep + 1, res);
        findWays(atoms, target + atoms[dep], dep + 1, res);
    }
public:
    int findTargetSumWays(vector<int> &nums, int S) {
        int res = 0;
        findWays(nums, S, 0, res);
        return res;
    }
};

#endif //LEETCODE_TARGETSUM_H
