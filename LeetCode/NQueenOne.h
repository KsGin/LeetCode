/*
 * File   : NQueenOne
 * Author : KsGin 
 * Date   : 2017/12/1
 */

#ifndef LEETCODE_NQUEENONE_H
#define LEETCODE_NQUEENONE_H

#include <vector>
#include <string>

class NQueenOne {


    bool validPos(int row , int col , std::vector<int> cols){
        for (int i = 0 ; i < cols.size() ; ++i){
            if(col == cols[i] || abs(row - i) == abs(col - cols[i])) return false;
        }
        return true;
    }

    void solveNQ(int n , int row
            , std::vector<int>& cols
            , std::vector<std::string> solution
            ,std::vector<std::vector<std::string>> & ret){
        if(row == n){
            ret.push_back(solution);
            return;
        }

        for (int i = 0; i < n; ++i) {
            if(validPos(row , i , cols)){
                cols.push_back(i);
                solution[row][i] = 'Q';
                solveNQ(n , row+1 , cols , solution , ret);
                solution[row][i] = '.';
                cols.pop_back();
            }
        }
    }

public:
    std::vector<std::vector<std::string>> solveNQueens(int n) {
        std::vector<int> cols(0);
        std::vector<std::string> solution(n , std::string(n , '.'));
        std::vector<std::vector<std::string>> ret(0);
        solveNQ(n , 0 , cols , solution , ret);
        return ret;
    }
};


#endif //LEETCODE_NQUEENONE_H
