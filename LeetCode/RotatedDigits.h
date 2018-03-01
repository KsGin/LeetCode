/*
 * File   : RotatedDigits
 * Author : KsGin 
 * Date   : 2018/3/1
 */

#ifndef LEETCODE_ROTATEDDIGITS_H
#define LEETCODE_ROTATEDDIGITS_H

class RotatedDigits {
    bool judge(int i) {
        bool isHaving = false;
        bool isNotHaving = true;
        while (i > 0) {
            int j = i % 10;
            if(!isHaving && (j == 2 || j == 5 || j == 6 || j == 9))
                isHaving = true;
            if(isNotHaving && (j == 3 || j == 4 || j == 7))
                isNotHaving = false;

            i = i / 10;
        }
        return isHaving && isNotHaving;
    }

public:
    int rotatedDigits(int N) {
        int ret = 0;
        for (int i = 2; i <= N; ++i) {
            ret += judge(i);
        }
        return ret;
    }
};

#endif //LEETCODE_ROTATEDDIGITS_H
