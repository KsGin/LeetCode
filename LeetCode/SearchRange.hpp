#pragma once
#include <vector>

using namespace std;

class SearchRange {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		vector<int> ret{ -1 , -1 };
		if (nums.size() == 0)
		{
			return ret;
		}

		for (auto i = 0 ; i < nums.size() ; i++)
		{
			if (target == nums[i])
			{
				if (ret[1] == -1)
				{
					ret[0] = i;
					ret[1] = i;
				}
				else
				{
					++ret[1];
				}
			}
		}

		return ret;
	}
};
