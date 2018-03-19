/*
 * File   : SingleNumberTwo
 * Author : KsGin 
 * Date   : 2018/3/19
 */

#ifndef LEETCODE_SINGLENUMBERTWO_H
#define LEETCODE_SINGLENUMBERTWO_H

#include <vector>
#include <algorithm>

using namespace std;

class SingleNumberTwo {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        bool isDup = false;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i-1]){
                if (!isDup) return nums[i-1];
                isDup = false;
            } else {
                isDup = true;
            }
        }
        return nums[nums.size()-1];
    }
};

#endif //LEETCODE_SINGLENUMBERTWO_H
