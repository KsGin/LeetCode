/*
 * File   : SelfDividingNumbers
 * Author : KsGin 
 * Date   : 2018/1/11
 */

#ifndef LEETCODE_SELFDIVIDINGNUMBERS_H
#define LEETCODE_SELFDIVIDINGNUMBERS_H

#include <vector>

using namespace std;

class SelfDividingNumbers {

    bool isSelfDividingNumber(int number){
        bool res = true;
        int tol = number;
        while (tol > 0 && res){
            int tmp = tol % 10;
            res = tmp && (number % tmp == 0);
            tol = tol / 10;
        }
        return res;
    }

public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int i = left; i <= right; ++i) {
            if(isSelfDividingNumber(i)) res.push_back(i);
        }
        return res;
    }
};

#endif //LEETCODE_SELFDIVIDINGNUMBERS_H
