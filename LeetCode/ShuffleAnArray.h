/*
 * File   : ShuffleAnArray
 * Author : KsGin 
 * Date   : 2017/11/17
 */

#ifndef LEETCODE_SHUFFLEANARRAY_H
#define LEETCODE_SHUFFLEANARRAY_H

#include <vector>

class ShuffleAnArray {

    std::vector<int> fuck;
    std::vector<int> shit;

public:
    ShuffleAnArray(std::vector<int> nums) {
        fuck = nums;
        shit = std::vector<int>(nums.begin() , nums.end());
    }

    /** Resets the array to its original configuration and return it. */
    std::vector<int> reset() {
        return fuck;
    }

    /** Returns a random shuffling of the array. */
    std::vector<int> shuffle() {
        for (int i = 0; i < fuck.size(); ++i) {
            int tmp = static_cast<int>(random() % fuck.size());
            std::swap(shit[i] , shit[tmp]);
        }
        return shit;
    }
};

#endif //LEETCODE_SHUFFLEANARRAY_H
