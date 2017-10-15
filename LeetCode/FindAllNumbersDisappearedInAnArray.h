/*
 * File   : FindAllNumbersDisappearedInAnArray
 * Author : KsGin 
 * Date   : 2017/10/15
 */

#ifndef LEETCODE_FINDALLNUMBERSDISAPPEAREDINANARRAY_H
#define LEETCODE_FINDALLNUMBERSDISAPPEAREDINANARRAY_H

#include <vector>
#include <algorithm>

class FindAllNumbersDisappearedInAnArray {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        for (auto it = nums.begin(); it != nums.end() ;) {
            if(*(it+1) - *it > 1){
                nums.push_back(*it+1);
                ++it;
            }else{
                it = nums.erase(it);
            }
        }

        return nums;
    }
};

#endif //LEETCODE_FINDALLNUMBERSDISAPPEAREDINANARRAY_H
