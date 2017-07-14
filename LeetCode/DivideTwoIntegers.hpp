//
// Created by KsGin on 2017/7/13.
//

#pragma once
#include <iostream>

class DivideTwoIntegers {
public:
    int divide(int dividend, int divisor) {

        if (!divisor) return dividend >= 0 ? INT_MAX : INT_MIN;    // 当divisor = 0
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;

        bool isNeg = false;
        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) isNeg = true;
        unsigned long long dvd = abs((long long) dividend);
        unsigned long long dvs = abs((long long) divisor);
        unsigned long long dvs_original = dvs;

        int i = 0;
        while (dvs << (i + 1) <= dvd) i++;

        int res = 0;
        while (dvd >= dvs_original) {
            if (dvd >= dvs << i) {
                dvd -= dvs << i;
                res += 1 << i;
            }
            i--;
        }

        return isNeg ? 0 - res : res;
    }
};