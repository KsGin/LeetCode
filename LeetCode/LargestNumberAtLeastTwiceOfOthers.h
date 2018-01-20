/*
 * File   : LargestNumberAtLeastTwiceOfOthers
 * Author : KsGin 
 * Date   : 2018/1/20
 */

#ifndef LEETCODE_LARGESTNUMBERATLEASTTWICEOFOTHERS_H
#define LEETCODE_LARGESTNUMBERATLEASTTWICEOFOTHERS_H

#include <vector>

using namespace std;

class LargestNumberAtLeastTwiceOfOthers {
public:
    int dominantIndex(vector<int>& nums) {
        int ldx = 0 , sdx = -1;
        for (int i = 1; i < nums.size(); ++i) {
            if(nums[i] > nums[ldx]){
                sdx = ldx;
                ldx = i;
            } else {
                if(sdx == -1 || nums[i] > nums[sdx]) {
                    sdx = i;
                }
            }
        }
        return nums[ldx] > nums[sdx] * 2 ? ldx : -1;
    }
};

#endif //LEETCODE_LARGESTNUMBERATLEASTTWICEOFOTHERS_H
