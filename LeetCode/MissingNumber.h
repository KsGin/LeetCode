/*
 * File   : MissingNumber
 * Author : KsGin 
 * Date   : 2017/12/22
 */

#ifndef LEETCODE_MISSINGNUMBER_H
#define LEETCODE_MISSINGNUMBER_H

#include <vector>

using namespace std;

class MissingNumber {
public:
    int missingNumber(vector<int> &nums) {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum1 += i;
            sum2 += nums[i];
        }
        sum1 += nums.size();
        return sum1 - sum2;
    }
};

#endif //LEETCODE_MISSINGNUMBER_H
