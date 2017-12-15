/*
 * File   : IntersectionOfTwoArraysTwo
 * Author : KsGin 
 * Date   : 2017/12/15
 */

#ifndef LEETCODE_INTERSECTIONOFTWOARRAYSTWO_H
#define LEETCODE_INTERSECTIONOFTWOARRAYSTWO_H

#include <vector>
#include <set>
#include <unordered_map>

using namespace std;

class IntersectionOfTwoArraysTwo {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int , int> um;
        for (auto num : nums1){
            if(um.find(num) != um.end()) ++um[num];
            else um[num] = 1;
        }
        vector<int> ret(0);
        for (auto num: nums2) {
            if(um[num] > 0){
                ret.push_back(num);
                --um[num];
            }
        }
        return ret;
    }
};

#endif //LEETCODE_INTERSECTIONOFTWOARRAYSTWO_H
