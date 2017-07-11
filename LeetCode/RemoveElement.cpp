//
// Created by KsGin on 2017/7/11.
//

#include<vector>

using namespace std;

class RemoveElement {
public:
    int removeElement(vector<int> &nums, int val) {
        if (nums.size() == 0) return 0;
        auto it = nums.begin();
        while (it != nums.end()) {
            if (*it == val) {
                it = nums.erase(it);
            } else {
                it++;
            }
        }
        return nums.size();
    }
};