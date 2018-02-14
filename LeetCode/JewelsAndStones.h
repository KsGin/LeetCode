/*
 * File   : JewelsAndStones
 * Author : KsGin 
 * Date   : 2018/2/14
 */

#ifndef LEETCODE_JEWELSANDSTONES_H
#define LEETCODE_JEWELSANDSTONES_H

#include <string>

using namespace std;

class JewelsAndStones {
public:
    int numJewelsInStones(string J, string S) {
        int ret = 0;
        for (auto j : J) {
            for (auto s : S) {
                ret += j == s;
            }
        }
        return ret;
    }
};

#endif //LEETCODE_JEWELSANDSTONES_H
