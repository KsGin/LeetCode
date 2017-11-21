/*
 * File   : IntegerBreak
 * Author : KsGin 
 * Date   : 2017/11/21
 */

#ifndef LEETCODE_INTEGERBREAK_H
#define LEETCODE_INTEGERBREAK_H

class IntegerBreak {
    int rec(int n){
        if(n == 1) return 1;
        if(n == 2) return 2;
        if(n == 3) return 3;
        if(n % 3 == 0) return 3 * rec(n-3);
        else return 2 * rec(n-2);
    }

public:
    int integerBreak(int n) {
        if(n == 0) return 1;
        if(n == 1) return 1;
        if(n == 2) return 1;
        if(n == 3) return 2;
        return rec(n);
    }
};

#endif //LEETCODE_INTEGERBREAK_H
