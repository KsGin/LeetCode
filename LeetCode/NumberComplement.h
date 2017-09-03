/**
 * File : NumberComplement
 * Author : KsGin 
 * Date : 2017/9/3.
 */
#ifndef LEETCODE_NUMBERCOMPLEMENT_H
#define LEETCODE_NUMBERCOMPLEMENT_H

#include <string>
#include <complex>

class NumberComplement {
public:
    int findComplement(int num) {
        std::string s = getBitsString(num);
        for (int i = 0; i < s.size(); ++i) {
            s[i] = s[i] == '1' ? '0' : '1';
        }
        return getNumberFromBitsString(s);
    }

private:
    std::string getBitsString(int x){
        std::string ret("");
        while (x != 0){
            if (x % 2 == 0){
                ret = '0' + ret;
            }else{
                ret = '1' + ret;
            }
            x = x / 2;
        }
        return ret;
    }

    int getNumberFromBitsString(std::string bits){
        int ret = 0;
        for (int i = bits.size()-1; i >= 0 ; --i) {
            if (bits[i] == '1') ret += pow(2 , bits.size() - i - 1);
        }
        return ret;
    }
};

#endif //LEETCODE_NUMBERCOMPLEMENT_H
