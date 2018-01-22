/*
 * File   : BestTimeToBuyAndSellStockWithTransactionFee
 * Author : KsGin 
 * Date   : 2018/1/22
 */

#ifndef LEETCODE_BESTTIMETOBUYANDSELLSTOCKWITHTRANSACTIONFEE_H
#define LEETCODE_BESTTIMETOBUYANDSELLSTOCKWITHTRANSACTIONFEE_H

#include <vector>

using namespace std;

class BestTimeToBuyAndSellStockWithTransactionFee {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int sold = 0, hold = -prices[0];
        for (int price : prices) {
            int t = sold;
            sold = max(sold, hold + price - fee);
            hold = max(hold, t - price);
        }
        return sold;
    }
};

#endif //LEETCODE_BESTTIMETOBUYANDSELLSTOCKWITHTRANSACTIONFEE_H
