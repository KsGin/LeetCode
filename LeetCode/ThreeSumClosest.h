//
// Created by KsGin on 2017/7/1.
//

#pragma once
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;


class ThreeSumClosest {
public:
    int threeSumClosest(vector<int> nums, int target) {
        sort(nums.begin() , nums.end());    //STL提供的算法 Sort
        int tmp = INT_MAX , result;
        for (int k = 0; k < nums.size(); ++k) {
            int tar = target - nums[k];
            int i = k + 1, j = nums.size() - 1;
            while (i < j) {
                if (nums[i] + nums[j] == tar) {
                    return target;
                } else {
                    if (fabs(target - (nums[i] + nums[j] + nums[k])) < tmp){
                        tmp = fabs(target - (nums[i] + nums[j] + nums[k]));
                        result = nums[i] + nums[j] + nums[k];
                    }
                    if (nums[i] + nums[j] < tar) {
                        ++i;
                    }
                    else --j;
                }
            }
        }
        return result;
    }
};