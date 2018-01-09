/*
 * File   : ShoppingOffers
 * Author : KsGin 
 * Date   : 2018/1/9
 */

#ifndef LEETCODE_SHOPPINGOFFERS_H
#define LEETCODE_SHOPPINGOFFERS_H

#include <vector>

using namespace std;

class ShoppingOffers {

    void recvShopping(vector<int>& price, const vector<vector<int>> special , vector<int> needs , int cut , int& res){
        for (int i = 0; i < special.size(); ++i) {
            bool isValid = true;
            for (int j = 0; j < special[i].size() - 1; ++j) {
                if(isValid && special[i][j] > needs[j]) isValid = false;
            }
            if(isValid){
                vector<int> tmpNeeds = needs;
                int tmpCut = cut;
                for (int j = 0; j < special[i].size()-1; ++j) {
                    needs[j] -= special[i][j];
                }
                cut += special[i][special[i].size()-1];
                recvShopping(price, special , needs , cut , res);
                needs = tmpNeeds;
                cut = tmpCut;
            }
        }
        for (int i = 0; i < needs.size(); ++i) {
            cut += needs[i] * price[i];
        }
        res = min(res , cut);
    }


public:
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        int res = 0;
        //初始化res
        for (int i = 0; i < price.size(); ++i) {
            res += price[i] * needs[i];
        }

        recvShopping(price , special , needs , 0 , res);

        return res;
    }
};

#endif //LEETCODE_SHOPPINGOFFERS_H
