/*
 * File   : GrayCode
 * Author : imqqy
 * Date   : 2018/3/22
 */

#ifndef LEETCODE_GRAYCODE_H
#define LEETCODE_GRAYCODE_H

#include <vector>
#include <cmath>

using namespace std;

class GrayCode {
public:
    vector<int> grayCode(int n) {
        vector<int> ret(0);
        ret.push_back(0);
        if (n == 0) return ret;
        ret.push_back(1);
        for (int i = 1; i < n; ++i) {
            int size = ret.size();
            for (int j = size - 1; j >= 0; --j) {
                ret.push_back(static_cast<int &&>(ret[j] + pow(2 , i)));
            }
        }
        return ret;
    }
};

#endif //LEETCODE_GRAYCODE_H
