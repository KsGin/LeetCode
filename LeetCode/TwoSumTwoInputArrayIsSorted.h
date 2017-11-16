/*
 * File   : TwoSumTwoInputArrayIsSorted
 * Author : KsGin 
 * Date   : 2017/11/16
 */

#ifndef LEETCODE_TWOSUMTWOINPUTARRAYISSORTED_H
#define LEETCODE_TWOSUMTWOINPUTARRAYISSORTED_H

#include <vector>

class SolTwoSumTwoInputArrayIsSortedution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int left = 0 , right = static_cast<int>(numbers.size() - 1);
        while (left  < right){
            int sum = numbers[left] + numbers[right];
            if(sum < target){
                left++;
            } else if(sum > target){
                right++;
            } else {
                return std::vector<int> {left+1 , right+1};
            }
        }
        return std::vector<int>(0);
    }
};

#endif //LEETCODE_TWOSUMTWOINPUTARRAYISSORTED_H
