/*
 * File   : JumpGame
 * Author : KsGin 
 * Date   : 2018/4/4
 */

#ifndef LEETCODE_JUMPGAME_H
#define LEETCODE_JUMPGAME_H

#include <vector>

using namespace std;

class JumpGame {
public:
    bool canJump(vector<int>& nums) {
        int firstIdx = nums.size() - 1;
        for (int i = nums.size() - 2; i >= 0; --i)
            if(i + nums[i] >= firstIdx) firstIdx = i;
        return firstIdx == 0;
    }
};

#endif //LEETCODE_JUMPGAME_H
