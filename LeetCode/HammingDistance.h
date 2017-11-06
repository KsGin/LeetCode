/**
 * File : HammingDistance
 * Author : KsGin 
 * Date : 2017/8/27.
 */
#ifndef LEETCODE_HAMMINGDISTANCE_H
#define LEETCODE_HAMMINGDISTANCE_H


#include <string>

class HammingDistance {
public:
    int hammingDistance(int x, int y) {
        int num = (x | y) - (x & y);
        return [&num]()->int
        {
            int dist = 0;
            while (num != 0){
                dist += num % 2 == 0 ? 0 : 1;
                num = num / 2;
            }
            return dist;
        }();
    }
};

#endif //LEETCODE_HAMMINGDISTANCE_H
