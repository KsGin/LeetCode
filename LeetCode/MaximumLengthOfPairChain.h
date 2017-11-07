/*
 * File   : MaximumLengthOfPairChain
 * Author : KsGin 
 * Date   : 2017/11/7
 */

#ifndef LEETCODE_MAXIMUMLENGTHOFPAIRCHAIN_H
#define LEETCODE_MAXIMUMLENGTHOFPAIRCHAIN_H

#include <vector>

class MaximumLengthOfPairChain {
public:
    int findLongestChain(std::vector<std::vector<int>>& pairs) {
        if(pairs.empty()) return 0;
        std::sort(pairs.begin() , pairs.end() ,
                  [](std::vector<int> a , std::vector<int> b)
                  {
                      return a[1] < b[1];
                  });
        int ret = 0;
        int cutMax = INT32_MIN;
        for (auto it = pairs.begin(); it != pairs.end(); ++it){
            if((*it)[0] > cutMax){
                ++ret;
                cutMax = (*it)[1];
            }
        }
        return ret;
    }
};

#endif //LEETCODE_MAXIMUMLENGTHOFPAIRCHAIN_H
