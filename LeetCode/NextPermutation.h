//
// Created by KsGin on 2017/7/14.
//

#pragma once
#include <vector>
#include <algorithm>

using namespace std;

template <typename T> void swap(T& a , T& b){
    T c = a;
    a = b;
    b = c;
}

class NextPermutation {
public:
    void nextPermutation(vector<int> &nums) {
        if (nums.size() < 2) return;
        int n = nums.size(), j = n - 2;
        while (j >= 0 && nums[j] >= nums[j + 1]) j--;

        if (j < 0) {                                   //当已经是递减序列的时候直接排序
            sort(nums.begin(), nums.end());
            return;
        }

	    auto i = j + 1;
        while (i < n && nums[i] > nums[j]) i++;
        i--;

        swap(nums[i], nums[j]);
        sort(nums.begin() + j + 1, nums.end());
    }
};