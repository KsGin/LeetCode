#pragma once
#include <vector>
#include <algorithm>

using namespace std;

class FirstMissingPositive {
public:
	int firstMissingPositive(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		auto res = 0;
		auto i = 0;  
        while (i<nums.size() && nums[i]<=0) i++;  
        for (; i < nums.size(); i++)
        {
            if (i>0 && nums[i] == nums[i-1]) continue;
            if (nums[i] - res != 1) return res+1;
            else res = nums[i];
        }  
        return res+1;  
	}
};
