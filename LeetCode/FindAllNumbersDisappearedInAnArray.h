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
    // Limit time exceeded
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        for (auto it = nums.begin(); it != nums.end() ;) {
            int dis = *(it+1) - *it;
            if(*(it+1) - *it > 1){
                for (int i = 1; i < dis; ++i) {
                    nums.push_back(*it+i);
                }
                it = nums.erase(it);
            } else if(dis < 0){
                for (int i = *it+1; i < 10; ++i) {
                    nums.push_back(i);
                }
            } else{
                it = nums.erase(it);
            }
        }

        return nums;
    }

    //right
    std::vector<int> findDisappearedNumbersR(std::vector<int>& nums) {
        std::vector<int> res;
        for (int i = 0; i < nums.size(); ++i) {
            int idx = abs(nums[i]) - 1;
            nums[idx] = (nums[idx] > 0) ? -nums[idx] : nums[idx];
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) {
                res.push_back(i + 1);
            }
        }
        return res;
    }
};

#endif //LEETCODE_FINDALLNUMBERSDISAPPEAREDINANARRAY_H
