/*
 * File   : EliminationGame
 * Author : KsGin 
 * Date   : 2018/3/17
 */

#ifndef LEETCODE_ELIMINATIONGAME_H
#define LEETCODE_ELIMINATIONGAME_H

#include <vector>

using namespace std;

class EliminationGame {
public:
    int lastRemaining(int n) {
        return n == 1 ? 1 : 2 * (n / 2 + 1 - lastRemaining(n / 2));
    }
};

#endif //LEETCODE_ELIMINATIONGAME_H
