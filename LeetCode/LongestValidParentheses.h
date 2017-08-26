#pragma once

#include <stack>
#include <algorithm>
#include <string>
using namespace std;

class LongestValidParentheses
{
public:
	int longestValidParentheses(string s)
	{
		if (s.length() <= 1)
		{
			return 0;
		}

		auto maxlen = 0;
		auto last = -1;
		auto idx = 0;

		stack<int> cstack;

		while (idx < s.length())
		{
			if (s[idx] == '(')
			{
				cstack.push(idx);
			}
			else
			{
				if (cstack.empty())
				{
					last = idx;
				}
				else
				{
					cstack.pop();
					if (cstack.empty())
					{
						maxlen = max(maxlen, idx - last);
					}
					else
					{
						maxlen = max(maxlen, idx - cstack.top());
					}
				}
			}
			idx++;
		}
		return maxlen;
	}
};
