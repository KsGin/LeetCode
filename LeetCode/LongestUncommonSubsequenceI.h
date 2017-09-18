/*
 * File Name : LongestUncommonSubsequenceI
 * Author    : KsGin
 * Date      : 9/18/2017
 */

#ifndef LEETCODE_LONGESTUNCOMMONSUBSEQUENCEI_H
#define LEETCODE_LONGESTUNCOMMONSUBSEQUENCEI_H

#include <string>

class LongestUncommonSubsequenceI {
public:
    int findLUSlength(std::string a, std::string b) {
        return a==b ? static_cast<unsigned int>(-1) : (a.size() > b.size() ? a.size() : b.size());
    }
};

#endif //LEETCODE_LONGESTUNCOMMONSUBSEQUENCEI_H
