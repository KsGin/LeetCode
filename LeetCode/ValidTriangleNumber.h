/*
 * File   : ValidTriangleNumber
 * Author : KsGin 
 * Date   : 2018/5/25
 */

#ifndef LEETCODE_VALIDTRIANGLENUMBER_H
#define LEETCODE_VALIDTRIANGLENUMBER_H

#include <vector>

using namespace std;

class ValidTriangleNumber {
public:
    int triangleNumber(vector<int> &nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); ++i) {
            int n1 = nums[i];
            for (int j = i + 1; j < nums.size(); ++j) {
                int n2 = nums[j];
                for (int k = j + 1; k < nums.size(); ++k) {
                    int n3 = nums[k];
                    res += !(n1 + n2 <= n3 || n2 + n3 <= n1 || n1 + n3 <= n2);
                }
            }
        }
        return res;
    }
};

#endif //LEETCODE_VALIDTRIANGLENUMBER_H
