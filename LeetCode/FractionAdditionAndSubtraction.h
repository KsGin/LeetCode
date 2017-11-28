/*
 * File   : FractionAdditionAndSubtraction
 * Author : KsGin 
 * Date   : 2017/11/28
 */

#ifndef LEETCODE_FRACTIONADDITIONANDSUBTRACTION_H
#define LEETCODE_FRACTIONADDITIONANDSUBTRACTION_H

#include <string>
#include <regex>
#include <iostream>
#include <sstream>

class FractionAdditionAndSubtraction {

    int gcd(int a , int b){
        if(b == 0) return a;
        return gcd(b , a % b);
    }

public:
    std::string fractionAddition(std::string expression) {
        std::regex r("([+-]?\\d+)/([+-]?\\d+)");
        std::sregex_iterator begin(expression.begin() , expression.end() , r);
        std::sregex_iterator end;

        std::stringstream ss;
        std::vector<std::pair<int , int>> fractionArray(0);
        std::pair<int , int> result;
        for (auto it = begin ; it != end ; ++it){

            auto f = (*it)[1];
            auto s = (*it)[2];
            int fi = 0;
            int si = 0;

            ss << f ;   ss >> fi;   ss.clear();
            ss << s;    ss >> si;   ss.clear();

            fractionArray.emplace_back(fi , si);
        }

        if(fractionArray.empty()) return "0/1";
        result = fractionArray[0];

        for (int i = 1; i < fractionArray.size(); ++i) {
            //当分母与当前分母相等时  分子直接相加
            if(fractionArray[i].second == result.second){
                result.first += fractionArray[i].first;
            } else { //分母为其乘积   分子互乘相加
                int s = result.second * fractionArray[i].second;
                int f = result.first * fractionArray[i].second
                        + fractionArray[i].first * result.second;
                result.first = f;
                result.second = s;
            }
        }

        //约分 求最大公约数 s  并分子分母同时除以 s
        auto gc = gcd(result.first , result.second);

        result.first /= gc;
        result.second /= gc;

        //消除负号 & 将负号提前
        if(result.first < 0 && result.second < 0){
            result.first = abs(result.first);
            result.second = abs(result.second);
        }
        if(result.first  < 0 || result.second < 0){
            result.first = abs(result.first) * -1;
            result.second = abs(result.second);
        }

        return std::to_string(result.first) + "/" + std::to_string(result.second);
    }
};

#endif //LEETCODE_FRACTIONADDITIONANDSUBTRACTION_H
