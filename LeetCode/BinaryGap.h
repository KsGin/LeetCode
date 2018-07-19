/*
 * File   : BinaryGap
 * Author : KsGin
 * Date   : 2018/7/19
 */

#ifndef LEETCODE_BINARYGAP_H
#define LEETCODE_BINARYGAP_H

class BinaryGap {
public:
    int binaryGap(int N) {
        if (N == 0)
            return 0;
        int ret = -1;
        int cot = 0;
        while (N > 0) {
            if (N & 1) {
                ret = ret > cot ? ret : cot;
                cot = 0;
            }
            N = N >> 1;
            cot += ret >= 0;
        }
        return ret > 0 ? ret : 0;
    }
};

#endif //LEETCODE_BINARYGAP_H
