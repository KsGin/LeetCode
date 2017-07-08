//
//  FindMedianSortedArrays.cpp
//  LeetCode
//  There are two sorted arrays nums1 and nums2 of size m and n respectively.
//  Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <vector>
#include <climits>

class FindMedianSortedArrays
{
public:
	double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2)
	{
		if (nums1.size() == 0 && nums2.size() > 0)
		{
			return
				nums2.size() % 2 == 0
					? (nums2.at(nums2.size() / 2 - 1) + nums2.at(nums2.size() / 2)) / 2.0
					: nums2.at(nums2.size() / 2);
		}
		if (nums2.size() == 0 && nums1.size() > 0)
		{
			return nums1.size() % 2 == 0
				       ? (nums1.at(nums1.size() / 2 - 1) + nums1.at(nums1.size() / 2)) / 2.0
				       : nums1.at(nums1.size() / 2);
		}
		auto length = nums1.size() + nums2.size();
		auto p1 = nums1.begin(), p2 = nums2.begin();
		auto p = INT_MAX;
		auto count = 0;
		auto ma = INT_MIN, mb = INT_MIN;
		while (p1 != nums1.end() || p2 != nums2.end())
		{
			if (*p1 <= *p2)
			{
				p = *p1;
				if (p1 + 1 != nums1.end())
				{
					++p1;
				}
				else
				{
					*p1 = INT_MAX;
				}
			}
			else
			{
				p = *p2;
				if (p2 + 1 != nums2.end())
				{
					++p2;
				}
				else
				{
					*p2 = INT_MAX;
				}
			}
			if (length % 2 == 0)
			{
				if (count == length / 2 - 1)
				{
					ma = p;
				}
				if (count == length / 2)
				{
					mb = p;
					return (ma + mb) / 2.0;
				}
				count++;
			}
			if (length % 2 != 0)
			{
				if (count++ == length / 2)
				{
					return p;
				}
			}
		}

		return 0.0;
	}
};
