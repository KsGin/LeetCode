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
        if (nums.empty()) return 0;
        int sum = 0;
        for (int i = 0; i < nums.size() - 1; ++i) {
            for(int j = i + 1 ; j < nums.size() ; ++j){
                int num = (nums[i] | nums[j]) - (nums[i] & nums[j]);
                sum += [num]()->int
                {
                    int dist = 0;
                    while (num != 0){
                        dist += num % 2 == 0 ? 0 : 1;
                        num = num / 2;
                    }
                    return dist;
                }();
            }
        }
        return sum;
    }
};

#endif //LEETCODE_TOTALHAMMINGDISTANCE_H
