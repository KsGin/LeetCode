/*
 * File   : MoveZeroes
 * Author : KsGin 
 * Date   : 21/10/2017
 */

#ifndef LEETCODE_MOVEZEROES_H
#define LEETCODE_MOVEZEROES_H

#include <vector>

class MoveZeroes {
public:
    void moveZeroes(std::vector<int>& nums) {
        if (nums.empty()) return;
        int idx = 0;
        int size = static_cast<int>(nums.size());
        for (auto it = nums.begin(); it != nums.end() , idx < size; idx++) {
            if(*it == 0){
                it = nums.erase(it);
                nums.push_back(0);
            } else {
                ++it;
            }
        }
    }
};

#endif //LEETCODE_MOVEZEROES_H
