/*
 * File Name : NextGreaterElementOne
 * Author    : KsGin
 * Date      : 2017/9/10
 */

#ifndef LEETCODE_NEXTGREATERELEMENT_I_H
#define LEETCODE_NEXTGREATERELEMENT_I_H

#include <vector>
#include <algorithm>

class NextGreaterElementOne {
public:
    std::vector<int> nextGreaterElement(std::vector<int>& findNums, std::vector<int>& nums) {
        std::vector<int> ret(0);
        for (auto i = findNums.begin(); i != findNums.end() ; ++i) {
            auto it = std::find(nums.begin() , nums.end() , *i);
            auto j = it;
            for ( ; j != nums.end() ; ++j) {
                if(*j > *it) {
                    ret.push_back(*j);
                    break;
                }
            }
            if (j == nums.end()) ret.push_back(-1);
        }
        return ret;
    }
};


#endif //LEETCODE_NEXTGREATERELEMENT_I_H
