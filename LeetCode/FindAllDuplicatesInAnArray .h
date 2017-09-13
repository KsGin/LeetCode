/*
 * File Name : FindAllDuplicatesInAnArray
 * Author    : KsGin
 * Date      : 9/13/2017
 */

#ifndef LEETCODE_FINDALLDUPLICATESINANARRAY_H
#define LEETCODE_FINDALLDUPLICATESINANARRAY_H

#include <vector>
#include <climits>

class FindAllDuplicatesInAnArray {
public:
    std::vector<int> findDuplicates(std::vector<int>& nums) {
        std::vector<int> res;
        for (int i = 0; i < nums.size(); ++i) {
            int idx = abs(nums[i]) - 1;
            if (nums[idx] < 0) res.push_back(idx + 1);
            nums[idx] = -nums[idx];
        }
        return res;
    }
};

#endif //LEETCODE_FINDALLDUPLICATESINANARRAY_H
