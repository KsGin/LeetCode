//
// Created by KsGin on 2017/7/1.
//

#include <vector>
#include <algorithm>
#include <climits>

using std::vector;
using std::sort;

class ThreeSumClosest {
public:
    static int threeSumClosest(vector<int> nums, int target) {
        sort(nums.begin() , nums.end());    //STL提供的算法 Sort
        int tmp = INT_MAX , result;
        for (int k = 0; k < nums.size(); ++k) {
            int tar = target - nums[k];
            int i = k + 1, j = nums.size() - 1;
            while (i < j) {
                if (nums[i] + nums[j] == tar) {
                    return target;
                } else {
                    if (abs(target - (nums[i] + nums[j] + nums[k])) < tmp){
                        tmp = abs(target - (nums[i] + nums[j] + nums[k]));
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