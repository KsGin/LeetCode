/*
 * File   : MinimumMovesToEqualArrayElements
 * Author : KsGin 
 * Date   : 07/11/2017
 */

#ifndef LEETCODE_MINIMUMMOVESTOEQUALARRAYELEMENTS_H
#define LEETCODE_MINIMUMMOVESTOEQUALARRAYELEMENTS_H

#include <vector>

class MinimumMovesToEqualArrayElements {
public:
    int minMoves(std::vector<int>& nums) {
        std::sort(nums.begin() , nums.end());
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
        }
        return static_cast<int>(sum - *nums.begin() * nums.size());
    }
};

#endif //LEETCODE_MINIMUMMOVESTOEQUALARRAYELEMENTS_H
