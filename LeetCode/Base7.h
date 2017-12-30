/*
 * File   : Base7
 * Author : KsGin 
 * Date   : 2017/12/30
 */

#ifndef LEETCODE_BASE7_H
#define LEETCODE_BASE7_H

#include <string>

using namespace std;

class Base7 {
public:
    string convertToBase7(int num) {
        bool isMinus = num < 0;
        num = abs(num);
        if (num == 0) return "0";
        int remainder = 0;
        string ret = "";
        while (num >= 7) {
            remainder = num % 7;
            num = num / 7;
            ret = to_string(remainder) + ret;
        }
        ret = to_string(num) + ret;
        if (isMinus) ret = "-" + ret;
        return ret;
    }
};

#endif //LEETCODE_BASE7_H
