/*
 * File Name : BaseballGame
 * Author    : KsGin
 * Date      : 9/26/2017
 */

#ifndef LEETCODE_BASEBALLGAME_H
#define LEETCODE_BASEBALLGAME_H

#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>

class BaseballGame {
public:
    int calPoints(std::vector<std::string>& ops) {
        if (ops.size() == 0) return 0;

        int lf = atoi(ops[0].c_str());

    }
};

#endif //LEETCODE_BASEBALLGAME_H
