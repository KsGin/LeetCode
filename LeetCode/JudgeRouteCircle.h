//
// Created by ksgin on 2017/8/27.
//

#ifndef LEETCODE_JUDGEROUTECIRCLE_H
#define LEETCODE_JUDGEROUTECIRCLE_H

#include <string>

using std::string;

class JudgeRouteCircle {
public:
    bool judgeCircle(string moves) {
        int U = 0, D = 0, L = 0, R = 0;
        for (char move : moves)
        {
            if (move == 'U') U++;
            if (move == 'D') D++;
            if (move == 'L') L++;
            if (move == 'R') R++;
        }
        return !(U != D || L != R);
    }
};

#endif //LEETCODE_JUDGEROUTECIRCLE_H
