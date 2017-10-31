/*
 * File   : OneBitAndTwoBitCharacters
 * Author : KsGin 
 * Date   : 31/10/2017
 */

#ifndef LEETCODE_ONEBITANDTWOBITCHARACTERS_H
#define LEETCODE_ONEBITANDTWOBITCHARACTERS_H

#include <vector>

class OneBitAndTwoBitCharacters {
private:
    bool ledge(std::vector<int> &bits, int begin) {
        if (bits.size() == begin) return false;
        if (bits.size() - 1 == begin) return true;
        if (bits[begin] == 0) return ledge(bits, begin + 1);
        if (bits[begin + 1] == 1) return ledge(bits, begin + 2);
        return ledge(bits, begin + 2);
    }

public:
    bool isOneBitCharacter(std::vector<int> &bits) {
        return ledge(bits, 0);
    }
};

#endif //LEETCODE_ONEBITANDTWOBITCHARACTERS_H
