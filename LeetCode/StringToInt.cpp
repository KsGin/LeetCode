//
//  StringToInt.cpp
//  LeetCode
//  Implement atoi to convert a string to an integer.
//  Hint: Carefully consider all possible input cases. If you want a challenge, please do not see below and ask     yourself what are the possible input cases.
//
//  Notes: It is intended for this problem to be specified vaguely (ie, no given input specs). You are responsible to gather all the input requirements up front.
//  Created by ksgin on 2017/6/23.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <sstream>
#include <string>

using std::stringstream;
using std::string;

class StringToInt
{
public:
	static int myAtoi(string str)
	{
		if (str.length() == 0)
		{
			return 0;
		}
		stringstream ss(str);
		int value;
		ss >> value;
		return value;
	}
};
