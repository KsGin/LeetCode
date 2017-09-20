/*
 * File Name:NimGame
 * Author   :ksgin
 * Date     :20/09/2017
 */

#ifndef LEETCODE_NIMGAME_H
#define LEETCODE_NIMGAME_H

class NimGame {
public:
    bool canWinNim(int n) {
        return n % 4 != 0;
    }
};

#endif //LEETCODE_NIMGAME_H
