/*
 * File   : BestTimeToBuyAndSellStock
 * Author : KsGin 
 * Date   : 2018/3/14
 */

#ifndef LEETCODE_BESTTIMETOBUYANDSELLSTOCK_H
#define LEETCODE_BESTTIMETOBUYANDSELLSTOCK_H

#include <vector>

using namespace std;

class BestTimeToBuyAndSellStock {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int minIdx = 0 , maxIdx = 0;
        for (int i = 1; i < prices.size(); ++i) {
            if(prices[i] <= prices[minIdx]) {
                minIdx = i;
                maxIdx = i;
            } else if(prices[i] >= prices[maxIdx]){
                maxIdx = i;
                res = max(res , prices[maxIdx] - prices[minIdx]);
            }
        }
        return res;
    }
};

#endif //LEETCODE_BESTTIMETOBUYANDSELLSTOCK_H
