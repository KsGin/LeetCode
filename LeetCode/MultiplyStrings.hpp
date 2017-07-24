//
// Created by KsGin on 2017/7/24.
//

#ifndef LEETCODE_MULTIPLYSTRINGS_HPP
#define LEETCODE_MULTIPLYSTRINGS_HPP

#include <string>
#include <sstream>
using namespace std;

class MultiplyStrings {
private:
    string simple_multiply(string num , int n){
        if (n == 0 || num == "0") {
            return "0";
        }
        int tmp = 0;
        for (int j = (int) (num.size() - 1); j >= 0; --j) {
            tmp = (num[j] - 48) * n + tmp;
            if (tmp / 10 == 0){
                num[j] = (char) (tmp + 48);
                tmp = 0;
            }else{
                num[j] = (char) (tmp % 10 + 48);
                tmp = tmp / 10;
            }
        }
        stringstream ss;
        ss << tmp;
        if (tmp > 0) num.insert(0 , ss.str());
        return num;
    }
public:
    string multiply(string num1, string num2) { //大正整数相乘
        if (num1 == "0" || num2 == "0") {
            return "0";
        }
        int idx = 0;
        string ret("0");
        for (int i = (int) (num2.size() - 1); i >= 0 ; --i) {
            string tmp("");
            for (int j = 0; j < idx; ++j) {
                tmp.push_back('0');
            }
            ret = add(ret , simple_multiply(num1+tmp , num2[i] - 48));
            idx++;
        }
        return ret;
    }

    string add(string num1, string num2) {  //大正整数相加
        if (num1 == "0") return num2;
        if (num2 == "0") return num1;
        if (num1.size() > num2.size()) {
            for (auto i = num2.size(); i < num1.size(); ++i) {
                num2.insert(0, "0");
            }
        } else {
            for (auto i = num1.size(); i < num2.size(); ++i) {
                num1.insert(0, "0");
            }
        }
        int tmp = 0;
        for (int j = (int) (num1.size() - 1); j >= 0; --j) {
            tmp = num1[j] + num2[j] + tmp - 96;
            if (tmp < 10) {
                num1[j] = (char) (tmp + 48);
                tmp = 0;
            }else{
                tmp -= 10;
                num1[j] = (char) (tmp + 48);
                tmp = 1;
            }
        }
        if (tmp == 1){
            num1.insert(0 , "1");
        }
        return num1;
    }
};


#endif //LEETCODE_MULTIPLYSTRINGS_HPP
