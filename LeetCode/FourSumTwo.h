/*
 * File   : FourSumTwo
 * Author : KsGin 
 * Date   : 2017/11/12
 */

#ifndef LEETCODE_FOURSUMTWO_H
#define LEETCODE_FOURSUMTWO_H

#include <vector>
#include <unordered_map>

class FourSumTwo {

    void shit(std::vector<std::vector<int>> vcs , int dep , int tar , int& cot){
        if(dep >= vcs.size())
            return;

        if(dep == vcs.size()-1){
            for (int i = 0; i < vcs[dep].size(); ++i) {
                if(tar - vcs[dep][i] == 0){
                    ++cot;
                }
            }
            return;
        }

        for (int i = 0; i < vcs[dep].size(); ++i) {
            shit(vcs , dep+1 , tar - vcs[dep][i] , cot);
        }
    }

public:
    /*O(N^4) Time Limit Exceeded*/
    int fourSumCountW(std::vector<int>& A, std::vector<int>& B, std::vector<int>& C, std::vector<int>& D) {
        std::vector<std::vector<int>> fuck { A , B , C , D};
        int cot = 0;
        shit(fuck , 0 , 0 , cot);
        return cot;
    }

    /*AC*/
    int fourSumCount(std::vector<int>& A, std::vector<int>& B, std::vector<int>& C, std::vector<int>& D) {
        int res = 0;
        std::unordered_map<int, int> m;
        for (int i = 0; i < A.size(); ++i) {
            for (int j = 0; j < B.size(); ++j) {
                ++m[A[i] + B[j]];
            }
        }
        for (int i = 0; i < C.size(); ++i) {
            for (int j = 0; j < D.size(); ++j) {
                int target = -1 * (C[i] + D[j]);
                res += m[target];
            }
        }
        return res;
    }

};

#endif //LEETCODE_FOURSUMTWO_H
