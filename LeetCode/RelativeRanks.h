/*
 * File   : RelativeRanks
 * Author : KsGin 
 * Date   : 2017/11/17
 */

#ifndef LEETCODE_RELATIVERANKS_H
#define LEETCODE_RELATIVERANKS_H

#include <string>
#include <vector>

class SoluRelativeRankstion {
public:
    std::vector<std::string> findRelativeRanks(std::vector<int>& nums) {
        std::vector<int> tmp(nums.begin() , nums.end());
        std::sort(tmp.begin() , tmp.end() , [](int a , int b){ return a>b;});
        std::vector<std::string> result(nums.size());

        for (int i = 0; i < tmp.size(); ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if(tmp[i] == nums[j]){
                    if(i == 0) result[j] = "Gold Medal";
                    else if(i == 1) result[j] = "Silver Medal";
                    else if(i == 2) result[j] = "Bronze Medal";
                    else result[j] = std::to_string(i+1);
                }

            }
        }
        return result;
    }
};

#endif //LEETCODE_RELATIVERANKS_H
