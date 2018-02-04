/*
 * File   : DeleteAndEarn
 * Author : KsGin 
 * Date   : 2018/2/4
 */

#ifndef LEETCODE_DELETEANDEARN_H
#define LEETCODE_DELETEANDEARN_H

#include <vector>
#include <unordered_map>

using namespace std;

class DeleteAndEarn {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> sums(10001, 0);
        int take = 0, skip = 0;
        for (int num : nums) sums[num] += num;
        for (int i = 0; i < 10001; ++i) {
            int takei = skip + sums[i];
            int skipi = max(skip, take);
            take = takei; skip = skipi;
        }
        return max(skip, take);
    }
};

#endif //LEETCODE_DELETEANDEARN_H
