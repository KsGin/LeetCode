/*
 * File   : NextGreaterElementTwo
 * Author : KsGin 
 * Date   : 2017/11/9
 */

#ifndef LEETCODE_NEXTGREATERELEMENTTWO_H
#define LEETCODE_NEXTGREATERELEMENTTWO_H

#include <vector>

class NextGreaterElementTwo {
public:
    std::vector<int> nextGreaterElements(std::vector<int>& nums) {
        std::vector<int> ret(nums.size() , 0);
        if (nums.empty()) return ret;

        for (int i = 0; i < nums.size(); ++i) {
            bool isFind = false;
            for (int j = i + 1; j < nums.size(); ++j) {
                if (!isFind && nums[j] > nums[i]) {
                    ret[i] = nums[j];
                    isFind = true;
                }
            }
            for (int j = 0; j < i; ++j) {
                if (!isFind && nums[j] > nums[i]) {
                    ret[i] = nums[j];
                    isFind = true;
                }
            }
            if(!isFind) ret[i] = -1;
        }
        return ret;
    }
};

#endif //LEETCODE_NEXTGREATERELEMENTTWO_H
