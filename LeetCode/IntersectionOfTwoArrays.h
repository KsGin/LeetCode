/*
 * File   : IntersectionOfTwoArrays
 * Author : KsGin 
 * Date   : 2017/11/7
 */

#ifndef LEETCODE_INTERSECTIONOFTWOARRAYS_H
#define LEETCODE_INTERSECTIONOFTWOARRAYS_H

#include <vector>
#include <set>

class IntersectionOfTwoArrays {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::set<int> rset;
        for (auto it = nums1.begin() ; it != nums1.end() ; ++it){
            if(std::find(nums2.begin() , nums2.end() , *it) != std::end(nums2)){
                rset.insert(*it);
            }
        }
        return std::vector<int>(rset.begin(),rset.end());
    }
};

#endif //LEETCODE_INTERSECTIONOFTWOARRAYS_H
