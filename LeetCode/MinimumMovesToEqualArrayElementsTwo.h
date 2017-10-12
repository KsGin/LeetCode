/*
 * File   : MinimumMovesToEqualArrayElementsTwo
 * Author : KsGin 
 * Date   : 2017/10/12
 */

#ifndef LEETCODE_MINIMUMMOVESTOEQUALARRAYELEMENTSTWO_H
#define LEETCODE_MINIMUMMOVESTOEQUALARRAYELEMENTSTWO_H

#include <vector>
#include <algorithm>

class MinimumMovesToEqualArrayElementsTwo {
public:
    int minMoves2(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        auto mid = static_cast<int>(nums.size() / 2);


        int left_sum = 0;
        for (int i = 0; i < mid; ++i) {
            left_sum += nums[i];
        }

        int right_sum = 0;
        for (int i = mid+1; i < nums.size(); ++i) {
            right_sum += nums[i];
        }

        return static_cast<int>((nums[mid] * mid - left_sum) + (right_sum - nums[mid] * (nums.size() - mid-1)));
    }
};

#endif //LEETCODE_MINIMUMMOVESTOEQUALARRAYELEMENTSTWO_H
