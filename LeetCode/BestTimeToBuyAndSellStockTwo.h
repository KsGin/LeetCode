/*
 * File   : BestTimeToBuyAndSellStockTwo
 * Author : KsGin 
 * Date   : 2017/11/7
 */

#ifndef LEETCODE_BESTTIMETOBUYANDSELLSTOCKTWO_H
#define LEETCODE_BESTTIMETOBUYANDSELLSTOCKTWO_H


#include <vector>

class BestTimeToBuyAndSellStockTwo {
public:
    int maxProfit(std::vector<int>& prices) {
        if(prices.empty()) return 0;

        int transactions = 0;

        for (int i = 0; i < prices.size()-1; ++i) {
            if(prices[i+1] > prices[i])
                transactions += prices[i+1] -prices[i];
        }

        return transactions;
    }
};

#endif //LEETCODE_BESTTIMETOBUYANDSELLSTOCKTWO_H
