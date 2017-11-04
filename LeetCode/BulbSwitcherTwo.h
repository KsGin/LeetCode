/*
 * File   : BulbSwitcherTwo
 * Author : KsGin
 * Date   : 2017/11/04
 */

#ifndef LEETCODE_BULBSWITCHERTWO_H
#define LEETCODE_BULBSWITCHERTWO_H

#include <algorithm>

class BulbSwitcherTwo {
public:
    int flipLights(int n, int m) {
        n = std::min(n, 3);
        return std::min(1 << n, 1 + m * n);
    }
};

#endif //LEETCODE_BULBSWITCHERTWO_H
