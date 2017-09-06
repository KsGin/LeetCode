/*
 * File Name:ReverseString
 * Author   :ksgin
 * Date     :2017/9/6
 */

#ifndef LEETCODE_REVERSESTRING_H
#define LEETCODE_REVERSESTRING_H

#include <string>
#include <utility>

class ReverseString {
public:
    std::string reverseString(std::string s) {
        std::string ss(std::move(s));
        for (int i = 0 , j = static_cast<int>(ss.size() - 1); i < j; ++i , --j) {
            std::swap(ss[i],ss[j]);
        }
        return ss;
    }
};

#endif //LEETCODE_REVERSESTRING_H
