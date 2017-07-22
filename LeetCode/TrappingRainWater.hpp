//
// Created by KsGin on 2017/7/22.
//

#ifndef LEETCODE_TRAPPINGRAINWATER_HPP
#define LEETCODE_TRAPPINGRAINWATER_HPP

#include <vector>

using namespace std;

class TrappingRainWater {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n<3) return 0;
        vector<int> leftHeight(n,0);
        vector<int> rightHeight(n,0);
        int water = 0;

        for(int i=1; i<n; i++)
            leftHeight[i] = max(leftHeight[i-1], height[i-1]);

        for(int i=n-2; i>=0; i--) {
            rightHeight[i] = max(rightHeight[i+1], height[i+1]);
            int minHeight = min(leftHeight[i], rightHeight[i]);
            if(minHeight>height[i]) water += (minHeight - height[i]);
        }

        return water;
    }
};

#endif //LEETCODE_TRAPPINGRAINWATER_HPP
