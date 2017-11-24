/*
 * File   : BrickWall
 * Author : KsGin 
 * Date   : 2017/11/24
 */

#ifndef LEETCODE_BRICKWALL_H
#define LEETCODE_BRICKWALL_H

#include <vector>
#include <unordered_map>

class BrickWall {

public:
    int leastBricks(std::vector<std::vector<int>> &wall) {
        int mx = 0;
        std::unordered_map<int, int> m;
        for (auto a : wall) {
            int sum = 0;
            for (int i = 0; i < a.size() - 1; ++i) {
                sum += a[i];
                ++m[sum];
                mx = std::max(mx, m[sum]);
            }
        }
        return static_cast<int>(wall.size() - mx);
    }
};


#endif //LEETCODE_BRICKWALL_H
