/*
 * File   : MaxChunksToMakeSorted
 * Author : KsGin 
 * Date   : 2018/1/23
 */

#ifndef LEETCODE_MAXCHUNKSTOMAKESORTED_H
#define LEETCODE_MAXCHUNKSTOMAKESORTED_H

#include <vector>

using namespace std;

class MaxChunksToMakeSorted {
    int maxV(vector<int> num , int idx){
        int rs = num[0];
        for (int i = 0; i <= idx; ++i) {
            rs = max(rs ,num[i]);
        }
        return rs;
    }
public:
    int maxChunksToSorted(vector<int>& arr) {
        int size =static_cast<int>(arr.size()) , res = 1;
        int rmin = arr[size-1];
        for (int i = size-2; i >= 0; --i) {
            int lmax = maxV(arr , i);
            if(lmax < rmin) res++;
            if(arr[i] < rmin) rmin = arr[i];
        }
        return res;
    }
};

#endif //LEETCODE_MAXCHUNKSTOMAKESORTED_H
