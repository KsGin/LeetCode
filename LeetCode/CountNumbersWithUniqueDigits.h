/*
 * File   : CountNumbersWithUniqueDigits
 * Author : KsGin 
 * Date   : 2017/11/23
 */

#ifndef LEETCODE_COUNTNUMBERSWITHUNIQUEDIGITS_H
#define LEETCODE_COUNTNUMBERSWITHUNIQUEDIGITS_H

#include <cmath>

class CountNumbersWithUniqueDigits {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) return 1;
        int res = 10, cnt = 9;
        for (int i = 2; i <= n; ++i) {
            cnt *= (11 - i);
            res += cnt;
        }
        return res;
    }
};

#endif //LEETCODE_COUNTNUMBERSWITHUNIQUEDIGITS_H
