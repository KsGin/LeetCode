//
//  LongestPalindrome.cpp
//  LeetCode
//  Given a string s, find the longest palindromic substring in s.
//  You may assume that the maximum length of s is 1000.
//  Created by ksgin on 2017/6/22.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#pragma once
#include <string>
#include <vector>

using namespace std;

class LongestPalindrome
{
public:
	string longestPalindrome(string s)
	{
		auto size = s.size();
		if (size < 2)
		{
			return s;
		}
		auto dp = ::vector<vector<bool>>(size, vector<bool>(size, false));
		dp.at(0).at(0) = true;
		for (auto i = 1; i < size; i++)
		{
			dp.at(i).at(i) = true;
			dp.at(i).at(i - 1) = true;
		}
		auto r = 0, l = 0;
		for (auto i = 2; i <= size; i++)
		{
			for (auto j = 0; j <= size - i; j++)
			{
				if (s.at(j) == s.at(j + i - 1) && dp.at(j + 1).at(j + i - 2))
				{
					dp.at(j).at(j + i - 1) = true;
					if (r - l + 1 < i)
					{
						l = j;
						r = j + i - 1;
					}
				}
			}
		}
		return s.substr(l, r - l + 1);
	}
};
