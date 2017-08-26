#pragma once
#include <string>

using namespace std;

class CountAndSay {
public:
	string countAndSay(int n) 
	{
		string ret("1");
		for (auto i = 1 ; i < n ; i++)
		{
			ret = Cs(ret);
		}
		return ret;
	}

	string Cs(string s)
	{
		string ret("");
		auto tmp = s[0];
		auto count = 1;
		if (s.empty())
		{
			return "";
		}
		for (auto i = 1 ; i < s.size() ; ++i)
		{
			if (s[i] == tmp)
			{
				++count;
			}
			else
			{
				ret += count+48;
				ret += tmp;
				tmp = s[i];
				count = 1;
			}
		}
		ret += count + 48;
		ret += tmp;
		return ret;
	}
};
