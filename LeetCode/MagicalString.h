/*
 * File   : MagicalString
 * Author : KsGin 
 * Date   : 2017/12/4
 */

#ifndef LEETCODE_MAGICALSTRING_H
#define LEETCODE_MAGICALSTRING_H

#include <string>

class MagicalString {
public:
    int magicalString(int n) {
        std::string s = "122";
        int i = 2;
        while (s.size() < n) {
            s += std::string(static_cast<unsigned long>(s[i++] - '0')
                    , static_cast<char>(s.back() ^ 3));
        }
        return static_cast<int>(count(s.begin(), s.begin() + n, '1'));
    }
};


#endif //LEETCODE_MAGICALSTRING_H
