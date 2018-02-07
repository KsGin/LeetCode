/*
 * File   : BulbSwitcher
 * Author : KsGin 
 * Date   : 2018/2/5
 */

#ifndef LEETCODE_BULBSWITCHER_H
#define LEETCODE_BULBSWITCHER_H

#include <vector>
#include <cmath>

using namespace std;

class BulbSwitcher {
public:
    int bulbSwitch(int n) {
        int res = 0;
        while (res * res <= n) ++ res;
        return res;
    }
};

#endif //LEETCODE_BULBSWITCHER_H
