/*
 * File Name : OptimalDivision
 * Author    : KsGin
 * Date      : 9/20/2017
 */

#ifndef LEETCODE_OPTIMALDIVISION_H
#define LEETCODE_OPTIMALDIVISION_H

#include <string>
#include <vector>

class OptimalDivision {
public:
    std::string optimalDivision(std::vector<int>& nums) {
        std::string res = "";
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (i > 0) res += "/";
            if (i == 1 && n > 2) res += "(";
            res += std::to_string(nums[i]);
            if (i == n - 1 && n > 2) res += ")";
        }
        return res;

    }
};

#endif //LEETCODE_OPTIMALDIVISION_H
