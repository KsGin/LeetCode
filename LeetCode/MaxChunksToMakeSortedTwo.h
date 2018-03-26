/*
 * File   : MaxChunksToMakeSortedTwo
 * Author : KsGin 
 * Date   : 2018/3/26
 */

#ifndef LEETCODE_MAXCHUNKSTOMAKESORTEDTWO_H
#define LEETCODE_MAXCHUNKSTOMAKESORTEDTWO_H

#include <vector>

using namespace std;

class MaxChunksToMakeSortedTwo {
public:
    int maxChunksToSorted(vector<int>& arr) {
        if (arr.empty()) return 0;
        int chunkCount = 1;
        int chunkMaxIdx = 0;
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] >= arr[chunkMaxIdx]){
                int tMax = chunkMaxIdx;
                int j = i;
                for (; j < arr.size(); ++j) {
                    if (arr[j] > arr[tMax]) tMax = j;
                    if (arr[j] < arr[chunkMaxIdx]){
                        chunkMaxIdx = tMax;
                        i = j;
                        break;
                    }
                }
                if( j == arr.size() ) {
                    chunkCount++;
                    chunkMaxIdx = i;
                }
            }
        }
        return chunkCount;
    }
};

#endif //LEETCODE_MAXCHUNKSTOMAKESORTEDTWO_H
