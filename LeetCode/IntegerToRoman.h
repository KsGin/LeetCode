//
// Given an integer, convert it to a roman numeral.
// Input is guaranteed to be within the range from 1 to 3999.
// Created by ksgin on 2017/6/26.
//

#pragma once
#include <string>
#include <vector>

using namespace std;

class IntToRoman
{
public:
    string intToRoman(int num)
    {
        vector<int> value{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> key{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        string s("");

        while (num != 0)
        {
            auto v = value.begin();
            auto k = key.begin();
            for (; v != value.end() && k != key.end(); ++v, ++k)
            {
                if (num >= *v)
                {
                    s += *k;
                    num -= *v;
                    break;
                }
            }
        }

        return s;
    }
};


