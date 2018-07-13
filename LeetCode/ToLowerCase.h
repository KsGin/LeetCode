/*
 * File   : ToLowerCase
 * Author : KsGin 
 * Date   : 2018/7/13
 */

#ifndef LEETCODE_TOLOWERCASE_H
#define LEETCODE_TOLOWERCASE_H

#include <string>

using namespace std;

class ToLowerCase {
public:
    string toLowerCase(string str) {
        for (auto &c : str) {
            if (c >= 'A' && c <= 'Z') {
                c += 32;
            }
        }
        return str;
    }
};

#endif //LEETCODE_TOLOWERCASE_H
