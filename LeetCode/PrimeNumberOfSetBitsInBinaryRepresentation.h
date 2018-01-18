/*
 * File   : PrimeNumberOfSetBitsInBinaryRepresentation
 * Author : KsGin 
 * Date   : 2018/1/18
 */

#ifndef LEETCODE_PRIMENUMBEROFSETBITSINBINARYREPRESENTATION_H
#define LEETCODE_PRIMENUMBEROFSETBITSINBINARYREPRESENTATION_H

class PrimeNumberOfSetBitsInBinaryRepresentation {
    bool isPrimeNumberOfSetBitsInBinaryRepresentation(int n){
        int c = 0;
        while(n > 0){
            if((n & 1) == 1) c++;
            n = n >> 1;
        }
        if(c < 2) return false;
        for (int i = 2; i <  c; ++i) {
            if(c % i == 0) return false;
        }
        return true;
    }
public:
    int countPrimeSetBits(int L, int R) {
        int ret = 0;
        for (int i = L; i <= R; ++i) {
            ret += isPrimeNumberOfSetBitsInBinaryRepresentation(i);
        }
        return ret;
    }
};

#endif //LEETCODE_PRIMENUMBEROFSETBITSINBINARYREPRESENTATION_H
