/*
 * File Name:DistributeCandies
 * Author   :ksgin
 * Date     :2017/9/6
 */

#ifndef LEETCODE_DISTRIBUTECANDIES_H
#define LEETCODE_DISTRIBUTECANDIES_H

#include <vector>
#include <set>

class DistributeCandies {
public:
    int distributeCandies(std::vector<int>& candies) {
        std::set<int> cds;
        for (int candie : candies) {
            cds.insert(candie);
        }
        return static_cast<int>(cds.size() < candies.size() / 2 ? cds.size() : candies.size() / 2);
    }
};

#endif //LEETCODE_DISTRIBUTECANDIES_H
