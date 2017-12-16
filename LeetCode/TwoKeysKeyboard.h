/*
 * File   : TwoKeysKeyboard
 * Author : KsGin 
 * Date   : 2017/12/16
 */

#ifndef LEETCODE_TWOKEYSKEYBOARD_H
#define LEETCODE_TWOKEYSKEYBOARD_H

class TwoKeysKeyboard {
public:
    int minSteps(int n) {
        if (n == 1) return 0;
        int dn = n / 2;
        while (n % dn != 0) --dn;
        return n / dn + minSteps(dn);
    }
};

#endif //LEETCODE_TWOKEYSKEYBOARD_H
