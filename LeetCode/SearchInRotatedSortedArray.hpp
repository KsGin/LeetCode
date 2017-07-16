#pragma once
#include <vector>
#include <algorithm>

using namespace std;

class SearchInRotatedSortedArray {
public:

	int search(vector<int>& nums, int target) {
		if (nums.empty())
		{
			return -1;
		}

		auto idx = 0;
		while (idx < nums.size())
		{
			if (nums[idx] == target)
			{
				Rotate(nums , 0 , idx);
				return idx;
			}
			idx++;
		}
		return -1;
	}

	void Rotate(vector<int>& nums , int begin , int middle)
	{
		if (middle <= begin || middle >= nums.size())
		{
			return;
		}
		auto leftlength = middle - begin;
		auto rightlength = nums.size() - middle;
		for (auto i = 0; i < min(leftlength , static_cast<int>(rightlength)); i++)
		{
			Swap(nums, begin + i, middle + i);
		}
		if (leftlength < rightlength)
		{
			Rotate(nums, begin +leftlength , middle + leftlength);
		}
		else if (leftlength > rightlength)
		{
			Rotate(nums, begin + rightlength, middle);
		}
	}

	void Swap(vector<int>& nums , const int left , const int right)
	{
		auto tmp = nums[left];
		nums[left] = nums[right];
		nums[right] = tmp;
	}
};
