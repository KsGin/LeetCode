/*
 * File   : TopKFrequentElements
 * Author : KsGin 
 * Date   : 03/11/2017
 */

#ifndef LEETCODE_TOPKFREQUENTELEMENTS_H
#define LEETCODE_TOPKFREQUENTELEMENTS_H

#include <vector>

#define max 10

class TopKFrequentElements {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        if(nums.empty()) return nums;

        std::vector<std::pair<int , int>> tmp(0);
        std::vector<int> ret(0);

        for (int &n : nums) {
            bool is_inc = false;
            for (auto &t : tmp) {
                if(t.first == n){
                    t.second++;
                    is_inc = true;
                    break;
                }
            }
            if(!is_inc) tmp.emplace_back(n , 1);
        }

        std::sort(tmp.begin() , tmp.end() ,
                  [](std::pair<int , int> a , std::pair<int , int> b)
                  { return a.second > b.second;});

        for (int j = 0; j < k; ++j) {
            ret.push_back(tmp[j].first);
        }
        return ret;
    }
};

#endif //LEETCODE_TOPKFREQUENTELEMENTS_H
