/*
 * File   : NQueensTwo
 * Author : KsGin 
 * Date   : 2017/12/1
 */

#ifndef LEETCODE_NQUEENSTWO_H
#define LEETCODE_NQUEENSTWO_H

#include <vector>

class NQueensTwo {

    bool validPos(int row , int col , std::vector<int> cols){
        for (int i = 0 ; i < cols.size() ; ++i){
            if(col == cols[i] || abs(row - i) == abs(col - cols[i])) return false;
        }
        return true;
    }

    void solveNQ(int n , int row , std::vector<int>& cols , int &totalNumber){
        if(row == n){
            totalNumber++;
            return;
        }

        for (int i = 0; i < n; ++i) {
            if(validPos(row , i , cols)){
                cols.push_back(i);
                solveNQ(n , row+1 , cols , totalNumber);
                cols.pop_back();
            }
        }
    }

public:
    int totalNQueens(int n) {
        int totalNumber = 0;
        std::vector<int> cols(0);
        solveNQ(n , 0 , cols , totalNumber);
        return totalNumber;
    }
};

#endif //LEETCODE_NQUEENSTWO_H
