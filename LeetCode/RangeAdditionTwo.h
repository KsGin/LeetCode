/*
 * File   : RangeAdditionTwo
 * Author : KsGin 
 * Date   : 03/11/2017
 */

#ifndef LEETCODE_RANGEADDITIONTWO_H
#define LEETCODE_RANGEADDITIONTWO_H

#include <vector>

class RangeAdditionTwo {
public:
    int maxCount(int m, int n, std::vector<std::vector<int>>& ops) {
        if(!m || !n) return 0;
        if(ops.empty()) return m*n;

        int am = m;
        int bm = n;
        for (auto o : ops){
            if(o[0] < am) am = o[0];
            if(o[1] < bm) bm = o[1];
        }



        return am * bm;
    }
};

#endif //LEETCODE_RANGEADDITIONTWO_H
