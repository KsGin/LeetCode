/*
 * File   : LexicographicalNumbers
 * Author : KsGin 
 * Date   : 2018/3/25
 */

#ifndef LEETCODE_LEXICOGRAPHICALNUMBERS_H
#define LEETCODE_LEXICOGRAPHICALNUMBERS_H

#include <vector>
#include <string>

using namespace std;

class LexicographicalNumbers {

    void addNumber(int num, int target, vector<int> &res) {
        if (num > target) return;
        res.push_back(num);
        addNumber(num * 10, target, res);
        if (num % 10 == 9) return;
        addNumber(num + 1, target, res);
    }

public:
    vector<int> lexicalOrder(int n) {
        vector<int> res(0);
        addNumber(1 , n , res);
        return res;
    }
};

#endif //LEETCODE_LEXICOGRAPHICALNUMBERS_H
