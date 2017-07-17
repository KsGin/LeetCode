#pragma once

#include <vector>

using namespace std;

class SearchInsertPosition {
public:
	int searchInsert(vector<int>& nums, int target) {
		if (nums.size() == 0 || target <= nums[0])
		{
			return 0;
		}

		for (auto i = 0 ; i < nums.size() - 1; i++)
		{
			if (nums[i] < target && nums[i+1] >= target)
			{
				return i+1;
			}
		}

		return nums.size();
	}
};