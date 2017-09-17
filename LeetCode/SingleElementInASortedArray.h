/*
 * File Name : SingleElementInASortedArray
 * Author    : KsGin
 * Date      : 9/15/2017
 */

#ifndef LEETCODE_SINGLEELEMENTINASORTEDARRAY_H
#define LEETCODE_SINGLEELEMENTINASORTEDARRAY_H

#include <vector>

class SingleElementInASortedArray {
public:
    int singleNonDuplicate(std::vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        if(nums.size() == 1)
            return nums[0];
        int ret = nums[0];
        int count = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == ret){
                count++;
            }else{
                if(count > 1) {
                    ret = nums[i];
                    count = 1;
                }else{
                    return ret;
                }
            }
        }
        return ret;
    }
};

#endif //LEETCODE_SINGLEELEMENTINASORTEDARRAY_H
