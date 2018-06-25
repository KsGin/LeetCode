/*
 * File   : PeakIndexInAMountainArray
 * Author : KsGin 
 * Date   : 2018/6/25
 */

#ifndef LEETCODE_PEAKINDEXINAMOUNTAINARRAY_H
#define LEETCODE_PEAKINDEXINAMOUNTAINARRAY_H

#include <vector>

using namespace std;

class PeakIndexInAMountainArray {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        if (A.size() < 3) return 0;
        for (int i = 1; i < A.size(); ++i) {
            if (A[i] < A[i-1]) return i-1;
        }
        return 0;
    }
};

#endif //LEETCODE_PEAKINDEXINAMOUNTAINARRAY_H
