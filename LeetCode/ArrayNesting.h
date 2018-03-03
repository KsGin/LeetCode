/*
 * File   : ArrayNesting
 * Author : imqqy
 * Date   : 2018/3/3
 */

#ifndef LEETCODE_ARRAYNESTING_H
#define LEETCODE_ARRAYNESTING_H

#include <vector>

using namespace std;

class ArrayNesting {

    int recv(int start , int current , vector<int>& nums , vector<bool>& isVisted){
        if(nums[current] == start) return 1;
        else {
            isVisted[current] = true;
            return 1 + recv(start , nums[current] , nums , isVisted);
        }
    }

public:
    int arrayNesting(vector<int>& nums) {
        int ret = 0;
        vector<bool> isVisted(nums.size() , false);
        for (int i = 0 ; i < nums.size() ; ++i){
            if(!isVisted[i])
                ret = max(ret , recv(nums[i] , nums[i] , nums , isVisted));
        }
        return ret;
    }
};

#endif //LEETCODE_ARRAYNESTING_H
