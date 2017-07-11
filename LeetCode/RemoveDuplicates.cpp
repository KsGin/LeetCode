//
// Created by KsGin on 2017/7/11.
//

#include <vector>

using namespace std;

class RemoveDuplicates {
public:
    int removeDuplicates(vector<int> &nums) {
        if (nums.size() == 0 || nums.size() == 1) return nums.size();

        auto cur = nums[0];
        auto it = nums.begin() + 1;

        while (it != nums.end()) {
            if (*it != cur) {
                cur = *it;
                it++;
            } else {
                it = nums.erase(it);
            }
        }

        return nums.size();

    }
};