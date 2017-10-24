/*
 * File   : ProductOfArrayExceptSelf
 * Author : KsGin 
 * Date   : 24/10/2017
 */

#ifndef LEETCODE_PRODUCTOFARRAYEXCEPTSELF_H
#define LEETCODE_PRODUCTOFARRAYEXCEPTSELF_H

#include <vector>

class ProductOfArrayExceptSelf {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        if(nums.size() < 2) return nums;
        std::vector<int> ret(nums.size() , 0);
        int val = 1;
        int if_not_zero_val = 1;
        int zero_count = 0;
        for (int num : nums) {
            val *= num;
            if(num != 0){
                if_not_zero_val *= num;
            }else{
                zero_count += 1;
            }
        }

        if(zero_count > 1) return ret;

        for (int i = 0; i < nums.size(); ++i) {
            if(nums[i] == 0) ret[i] = if_not_zero_val;
            else ret[i] = val / nums[i];
        }

        return ret;
    }
};

#endif //LEETCODE_PRODUCTOFARRAYEXCEPTSELF_H
