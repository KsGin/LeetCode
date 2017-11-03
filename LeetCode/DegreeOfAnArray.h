/*
 * File   : DegreeOfAnArray
 * Author : KsGin 
 * Date   : 03/11/2017
 */

#ifndef LEETCODE_DEGREEOFANARRAY_H
#define LEETCODE_DEGREEOFANARRAY_H


#include <vector>

class DegreeOfAnArray {
public:
    int findShortestSubArray(std::vector<int>& nums) {
        if(nums.size() < 2) return static_cast<int>(nums.size());
        std::vector<std::pair<int,int>> tmp(0);
        for (int n : nums) {
            bool f = false;
            for (auto &t : tmp) {
                if(t.first == n) {
                    ++t.second;
                    f = true;
                    break;
                }
            }
            if(!f) tmp.emplace_back(n , 1);
        }
        std::sort(tmp.begin() , tmp.end() ,
                  [](std::pair<int,int> a , std::pair<int , int> b){ return a.second > b.second; });

        std::vector<int> max_v(1 , tmp[0].first);
        for (auto i : tmp){
            if(i.first != max_v[0] && i.second == tmp[0].second){
                max_v.push_back(i.first);
            }
            if(i.second < tmp[0].second) break;
        }

        auto ret = static_cast<int>(nums.size());

        for (int i : max_v) {

            auto ttmp = static_cast<int>(nums.size());
            for (int num : nums) {
                if(num != i)--ttmp;
                else break;
            }
            for (int j = static_cast<int>(nums.size() - 1); j > 0 ; --j) {
                if(nums[j] != i)--ttmp;
                else break;
            }

            if(ttmp < ret) ret = ttmp;
        }

        return ret;
    }
};

#endif //LEETCODE_DEGREEOFANARRAY_H
