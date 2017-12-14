/*
 * File   : BinaryWatch
 * Author : KsGin 
 * Date   : 2017/12/14
 */

#ifndef LEETCODE_BINARYWATCH_H
#define LEETCODE_BINARYWATCH_H

#include <string>
#include <vector>
#include <set>

using namespace std;

class BinaryWatch {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> res;
        for (int h = 0; h < 12; ++h) {
            for (int m = 0; m < 60; ++m) {
                if (bitset<10>(static_cast<unsigned long long int>((h << 6) + m)).count() == num) {
                    res.push_back(to_string(h) + (m < 10 ? ":0" : ":") + to_string(m));
                }
            }
        }
        return res;
    }
};

#endif //LEETCODE_BINARYWATCH_H
