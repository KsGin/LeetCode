/*
 * File   : ConstructTheRectangle
 * Author : KsGin 
 * Date   : 03/11/2017
 */

#ifndef LEETCODE_CONSTRUCTTHERECTANGLE_H
#define LEETCODE_CONSTRUCTTHERECTANGLE_H

#include <vector>

class Solution {
public:
    std::vector<int> constructRectangle(int area) {
        int length = area , width = 1;
        for (int i = area / 2; i > 0 ; --i) {
            if(area % i == 0 && abs((area / i) - i) < length - width){
                length = std::max(area / i , i);
                width = area / length;
            }
        }
        return std::vector<int> {length , width};
    }
};

#endif //LEETCODE_CONSTRUCTTHERECTANGLE_H
