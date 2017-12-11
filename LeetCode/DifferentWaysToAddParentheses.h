/*
 * File   : DifferentWaysToAddParentheses
 * Author : KsGin 
 * Date   : 2017/12/11
 */

#ifndef LEETCODE_DIFFERENTWAYSTOADDPARENTHESES_H
#define LEETCODE_DIFFERENTWAYSTOADDPARENTHESES_H

#include <vector>
#include <string>
#include <set>

using namespace std;
class DifferentWaysToAddParentheses {
private:
    vector<string> analyseInput(string input) {
        vector<string> ret(0);
        string tmp="";
        for (int i = 0; i < input.size(); ++i) {
            if(input[i] <= '9' && input[i] >= '0'){
                tmp.push_back(input[i]);
            } else {
                ret.push_back(tmp);
                tmp = "";
                tmp.push_back(input[i]);
                ret.push_back(tmp);
                tmp = "";
            }
        }
        ret.push_back(tmp);
        return ret;
    }

    vector<int> recvCompute(vector<string> vp , int left , int right){
        if(right == left) return vector<int>{atoi(vp[left].c_str())};
        if(right == left + 2) {
            return vector<int>{compute(atoi(vp[left].c_str()) , vp[left+1] , atoi(vp[left+2].c_str()))};
        }
        vector<int> res;
        for (int i = left; i < right; i += 2) {
            vector<int> lres = recvCompute(vp , left , i);
            vector<int> rres = recvCompute(vp , i + 2 , right);
            for (auto l : lres){
                for(auto r : rres){
                    res.push_back(compute(l , vp[i+1] , r));
                }
            }
        }
        return res;
    }

    int compute(int af , string op , int bf){
        switch (op[0]){
            case '+':
                return af + bf;
            case '-':
                return af - bf;
            case '*':
                return af * bf;
            default:break;
        }
        return 0;
    }

public:
    vector<int> diffWaysToCompute(string input) {

        vector<string> cp = analyseInput(input);

        vector<int> res = recvCompute(cp , 0 , static_cast<int>(cp.size() - 1));

        sort(res.begin() , res.end());

        return res;
    }
};

#endif //LEETCODE_DIFFERENTWAYSTOADDPARENTHESES_H
