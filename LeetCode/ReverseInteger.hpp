//
//  ReverseInteger.cpp
//  LeetCode
//  Reverse digits of an integer.
//  Example1: x = 123, return 321
//  Example2: x = -123, return -321
//  Created by ksgin on 2017/6/23.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#pragma once
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

template <typename T>
void convertString(T& value, const string s)
{
	stringstream ss(s);
	ss >> value;
}

class Reverse
{
public:

	int reverse(int x)
	{
		auto xw = true;

		stringstream ss;
		stringstream sss;

		ss << x;

		auto s = ss.str();
		auto value = 0;

		if (s.at(0) == '-')
		{
			s = s.substr(1);
			xw = false;
		}

		for (int i = static_cast<int>(s.length() - 1); i >= 0; --i)
		{
			sss << s.at(i);
		}

		s = sss.str();

		if (s.at(0) == '-' && s.length() >= 11)
		{
			if (s > "-2147483648")
			{
				s = "0";
			}
		}
		else if (s.length() >= 10)
		{
			if (s > "2147483647")
			{
				s = "0";
			}
		}

		convertString(value, s);

		if (!xw)
		{
			value = -value;
		}

		if (value > INT32_MAX || value < INT32_MIN)
		{
			value = 0;
		}

		return value;
	}
};
