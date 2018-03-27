/*
 * File   : NthDigit
 * Author : KsGin 
 * Date   : 2018/3/27
 */

#ifndef LEETCODE_NTHDIGIT_H
#define LEETCODE_NTHDIGIT_H

#include <string>

using namespace std;

class NthDigit {
public:
    int findNthDigit(int n) {
        long long len = 1, cnt = 9, start = 1;
        while (n > len * cnt) {
            n -= len * cnt;
            ++len;
            cnt *= 10;
            start *= 10;
        }
        start += (n - 1) / len;
        string t = to_string(start);
        return t[(n - 1) % len] - '0';
    }
};

#endif //LEETCODE_NTHDIGIT_H
