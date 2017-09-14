/*
 * File Name : QueueReconstructionByHeight
 * Author    : KsGin
 * Date      : 9/14/2017
 */

#ifndef LEETCODE_QUEUERECONSTRUCTIONBYHEIGHT_H
#define LEETCODE_QUEUERECONSTRUCTIONBYHEIGHT_H

#include <vector>
#include <algorithm>

class QueueReconstructionByHeight {
public:
    std::vector<std::pair<int, int>> reconstructQueue(std::vector<std::pair<int, int>>& people) {
        std::sort(people.begin(), people.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
            return a.first > b.first || (a.first == b.first && a.second < b.second);
        });
        std::vector<std::pair<int, int>> res;
        for (auto a : people) {
            res.insert(res.begin() + a.second, a);
        }
        return res;
    }
};

#endif //LEETCODE_QUEUERECONSTRUCTIONBYHEIGHT_H
