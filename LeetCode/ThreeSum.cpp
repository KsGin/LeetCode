//
// LeetCode题解 3Sum -> 2Sum解题
// Created by KsGin on 2017/6/30.
// return a + b + c
//

#include <vector>
#include <algorithm>


using namespace std;

class ThreeSum {
public:
    vector<vector<int>> threeSum(vector<int> nums) {
        vector<vector<int>> res;
        if (nums.size() < 3){
            return res;
        }

        sort(nums.begin() , nums.end());    //STL提供的算法 Sort

        for (int k = 0; k < nums.size(); ++k) {
            if (nums[k] > 0) break;
            if (k > 0 && nums[k] == nums[k - 1]) continue;
            int target = 0 - nums[k];
            int i = k + 1, j = nums.size() - 1;
            while (i < j) {
                if (nums[i] + nums[j] == target) {
                    res.push_back({nums[k], nums[i], nums[j]});
                    while (i < j && nums[i] == nums[i + 1]) ++i;
                    while (i < j && nums[j] == nums[j - 1]) --j;
                    ++i; --j;
                } else if (nums[i] + nums[j] < target) ++i;
                else --j;
            }
        }
        return res;

    }
};