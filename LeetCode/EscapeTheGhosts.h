/*
 * File   : EscapeTheGhosts
 * Author : KsGin 
 * Date   : 2018/3/9
 */

#ifndef LEETCODE_ESCAPETHEGHOSTS_H
#define LEETCODE_ESCAPETHEGHOSTS_H

#include <vector>
#include <cmath>

using namespace std;

class EscapeTheGhosts {
    bool canEscape(vector<int> &ghost , vector<int>& target) {
        auto distance1 = abs(target[0]) + abs(target[1]);
        auto distance2 = abs(target[0]-ghost[0]) + abs(target[1] - ghost[1]);
        return distance1 < distance2;
    }

public:
    bool escapeGhosts(vector<vector<int>> &ghosts, vector<int> &target) {
        for (auto &ghost : ghosts) {
            if(!canEscape(ghost , target)) return false;
        }
        return true;
    }
};

#endif //LEETCODE_ESCAPETHEGHOSTS_H
