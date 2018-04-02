/*
 * File   : QSqrt
 * Author : KsGin 
 * Date   : 2018/4/2
 */

#ifndef LEETCODE_QSQRT_H
#define LEETCODE_QSQRT_H

class QSqrt {
public:
    int mySqrt(int x) {
        long i = 0;
        for (i = 1; i <= x; ++i) {
            if(i * i > x && (i-1) * (i-1) <= x) {
                return i-1;
            }
        }
        return i;
    }
};

#endif //LEETCODE_QSQRT_H
