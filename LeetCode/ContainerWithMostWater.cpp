//
// Created by KsGin on 2017/6/25.
//
// Given n non-negative integers a1, a2, ..., an,
// where each represents a point at coordinate (i, ai).
// n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines,
// which together with x-axis forms a container, such that the container contains the most water.
//
// Note: You may not slant the container and n is at least 2.
//
//
//

#include <vector>

using std::vector;

class ContainerWithMostWater {
public:
    static int maxArea(vector<int> height) {
        auto size = height.size();
        auto maxWater = 0;
        for (auto i = 0; i < size; ++i) {
            if (height[i] == 0) continue;
            auto maxPossibleIdx = i - maxWater / height[i];
            for (auto j = 0 ; j < i && j < maxPossibleIdx ; ++j) {
                auto curWater = (i-j)*(height[i] < height[j] ? height[i] : height[j]);
                maxWater = maxWater > curWater ? maxWater : curWater;
            }
        }
        return maxWater;
    }
};