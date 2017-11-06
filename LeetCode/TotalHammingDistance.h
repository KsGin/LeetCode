/*
 * File   : TotalHammingDistance
 * Author : KsGin 
 * Date   : 06/11/2017
 */

#ifndef LEETCODE_TOTALHAMMINGDISTANCE_H
#define LEETCODE_TOTALHAMMINGDISTANCE_H

#include <vector>
#include <string>

class TotalHammingDistance {
public:
    int totalHammingDistance(std::vector<int>& nums) {
        int res = 0, n = static_cast<int>(nums.size());
        for (int i = 0; i < 32; ++i) {
            int cnt = 0;
            for (int num : nums) {
                if (num & (1 << i)) ++cnt;
            }
            res += cnt * (n - cnt);
        }
        return res;
    }
};

#endif //LEETCODE_TOTALHAMMINGDISTANCE_H
