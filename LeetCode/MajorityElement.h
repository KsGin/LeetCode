/*
 * File   : MajorityElement
 * Author : KsGin 
 * Date   : 2017/11/13
 */

#ifndef LEETCODE_MAJORITYELEMENT_H
#define LEETCODE_MAJORITYELEMENT_H


#include <vector>
#include <unordered_map>

class MajorityElement {
public:
    int majorityElement(std::vector<int>& nums) {
        std::sort(nums.begin() , nums.end());
        int count = 1;
        int val = nums[0];
        for (int i = 1 ; i < nums.size() ; i++){
            if(nums[i] == nums[i-1]) {
                count++;
                if(count > nums.size() / 2) return val;
                continue;
            }
            count = 1;
            val = nums[i];
        }
        return val;
    }
};


#endif //LEETCODE_MAJORITYELEMENT_H
