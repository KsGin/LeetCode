//
// Created by KsGin on 2017/6/28.
//

#include <string>
#include <vector>

using std::string;
using std::vector;

class RomanToInteger {
public:
    static int romanToInt(string s) {
        vector<int> value {1000 , 900 , 500 , 400 , 100 , 90 , 50 , 40 , 10 , 9 , 5 , 4 , 1};
        vector<string> key {"M" , "CM" , "D" , "CD" , "C" , "XC" , "L" , "XL" , "X", "IX" , "V" , "IV" , "I"};

        int num = 0;

        while (s.length() != 0)
        {
            auto v = value.begin();
            auto k = key.begin();
            for ( ; v != value.end() && k != key.end() ; ++v , ++k)
            {
                if ((*k).length() == 1)
                {
                    if ((*k)[0] == s[0])
                    {
                        num += *v;
                        s = s.substr(1);
                    }
                }
                else
                {
                    if ((*k)[0] == s[0] && s.length() > 1 && (*k)[1] == s[1])
                    {
                        num += *v;
                        s = s.substr(2);
                    }
                }
            }
        }
        return num;
    }
};