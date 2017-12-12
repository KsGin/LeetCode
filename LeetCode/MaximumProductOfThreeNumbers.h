/*
 * File   : MaximumProductOfThreeNumbers
 * Author : KsGin 
 * Date   : 2017/12/12
 */

#ifndef LEETCODE_MAXIMUMPRODUCTOFTHREENUMBERS_H
#define LEETCODE_MAXIMUMPRODUCTOFTHREENUMBERS_H

#include <vector>

using namespace std;

class MaximumProductOfThreeNumbers {
public:
    int maximumProduct(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        return max(nums[0] * nums[1] * nums[nums.size() - 1],
                   nums[nums.size() - 1] * nums[nums.size() - 2] * nums[nums.size() - 3]);
    }
};

#endif //LEETCODE_MAXIMUMPRODUCTOFTHREENUMBERS_H
