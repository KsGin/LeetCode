//
//  ZigZagConversion.cpp
//  LeetCode
//  The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want   to display this pattern in a fixed font for better legibility)
//
//  P   A   H   N
//  A P L S I I G
//  Y   I   R
//
//  And then read line by line: "PAHNAPLSIIGYIR"
//  Write the code that will take a string and make this conversion given a number of rows:
//
//  string convert(string text, int nRows);
//  convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".
//
//  Created by ksgin on 2017/6/22.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class ZigZagConversion
{
public:

	static string zigZagConversion(string s, int numRows)
	{
		auto fc = numRows;
		auto re = string("");
		auto size = s.size();
		auto numCols = fc <= 2
			               ? (size % fc == 0
				                  ? size / fc
				                  : size / fc + 1)
			               : (size % (2 * fc - 2) == 0
				                  ? size / (2 * fc - 2)
				                  : size / (2 * fc - 2) + 1);
		if (fc <= 1 || size <= 1)
		{
			return s;
		}
		if (fc == 2)
		{
			for (auto i = 0; i < numCols; ++i)
			{
				re += s.at(i * fc);
			}
			for (auto i = 0; i < numCols; ++i)
			{
				if (i * fc + 1 < size)
				{
					re += s.at(i * fc + 1);
				}
			}
			return re;
		}

		for (auto i = 0; i < numCols; ++i)
		{
			re += s.at(i * (2 * fc - 2));
		}
		for (auto i = 1; i < fc - 1; ++i)
		{
			for (auto j = 0; j < numCols; ++j)
			{
				if (j * (2 * fc - 2) + i < size)
				{
					re += s.at(j * (2 * fc - 2) + i);
				}
				if ((j + 1) * (2 * fc - 2) - i < size)
				{
					re += s.at((j + 1) * (2 * fc - 2) - i);
				}
			}
		}
		for (auto i = 0; i < numCols; ++i)
		{
			if (i * (2 * fc - 2) + fc - 1 < size)
			{
				re += s.at(i * (2 * fc - 2) + fc - 1);
			}
		}

		return re;
	}
};
