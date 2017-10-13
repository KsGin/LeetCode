/*
 * File   : TeemoAttacking
 * Author : KsGin 
 * Date   : 2017/10/13
 */

#ifndef LEETCODE_TEEMOATTACKING_H
#define LEETCODE_TEEMOATTACKING_H

#include <vector>

class TeemoAttacking {
public:
    int findPoisonedDuration(std::vector<int>& timeSeries, int duration) {
        if(timeSeries.empty())
            return 0;
        int ret = 0;
        for (int i = 1; i < timeSeries.size(); ++i) {
            ret += std::min(timeSeries[i] - timeSeries[i-1] , duration);
        }
        return ret + duration;
    }
};

#endif //LEETCODE_TEEMOATTACKING_H
