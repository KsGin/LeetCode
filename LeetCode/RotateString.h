/*
 * File   : RotateString
 * Author : KsGin 
 * Date   : 2018/4/10
 */

#ifndef LEETCODE_ROTATESTRING_H
#define LEETCODE_ROTATESTRING_H

#include <string>

using namespace std;

class RotateString {
public:
    bool rotateString(string A, string B) {
        return (A.length() == B.length()) && ((A + A).find(B) != string::npos);
    }
};

#endif //LEETCODE_ROTATESTRING_H
