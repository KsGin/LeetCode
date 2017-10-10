/*
 * File   : BinaryNumberWithAlternatingBits
 * Author : KsGin 
 * Date   : 2017/10/10
 */

#ifndef LEETCODE_BINARYNUMBERWITHALTERNATINGBITS_H
#define LEETCODE_BINARYNUMBERWITHALTERNATINGBITS_H

class BinaryNumberWithAlternatingBits {
public:
    bool hasAlternatingBits(int n) {
        if(n == 0 || n == 1 || n == 2) return true;
        if(n % 2 == 0 && (n / 2) % 2 != 0) return hasAlternatingBits(n/2);
        if(n % 2 != 0 && ((n - 1) / 2) % 2 == 0) return hasAlternatingBits((n-1)/2);
        return false;
    }
};

#endif //LEETCODE_BINARYNUMBERWITHALTERNATINGBITS_H
