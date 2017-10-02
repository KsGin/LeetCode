/*
 * File   : MaxConsecutiveOnes
 * Author : KsGin 
 * Date   : 2017/10/3
 */

#ifndef LEETCODE_MAXCONSECUTIVEONES_H
#define LEETCODE_MAXCONSECUTIVEONES_H

#include <vector>

class MaxConsecutiveOnes {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
        if(nums.empty())
            return 0;
        if(nums.size() == 1)
            return nums[0] == 0 ? 0 : 1;
        int max = 0;
        int cut = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if(nums[i] == 1) cut += 1;
            else {
                max = max > cut ? max : cut;
                cut = 0;
            }
        }
        return max;
    }
};

#endif //LEETCODE_MAXCONSECUTIVEONES_H
