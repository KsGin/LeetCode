/*
 * File   : FindTheDuplicateNumber
 * Author : KsGin 
 * Date   : 2018/1/1
 */

#ifndef LEETCODE_FINDTHEDUPLICATENUMBER_H
#define LEETCODE_FINDTHEDUPLICATENUMBER_H

#include <vector>

using namespace std;

class FindTheDuplicateNumber {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0, fast = 0, t = 0;
        while (true) {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if (slow == fast) break;
        }
        while (true) {
            slow = nums[slow];
            t = nums[t];
            if (slow == t) break;
        }
        return slow;
    }
};

#endif //LEETCODE_FINDTHEDUPLICATENUMBER_H
