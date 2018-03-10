/*
 * File   : ParseLispExpression
 * Author : KsGin 
 * Date   : 2018/3/10
 */

#ifndef LEETCODE_PARSELISPEXPRESSION_H
#define LEETCODE_PARSELISPEXPRESSION_H

#include <string>
#include <unordered_map>
#include <stack>

using namespace std;

class ParseLispExpression {
    int cal(string expression , unordered_map<string , int> ky){
        string exp = "";
        int ret = 0;
        if(expression[0] == '('){   //解析 ()
            ret = cal(expression.substr(1 , expression.size()-2) , ky);
            return ret;
        } else if(isdigit(expression[0]) || expression[0] == '-'){  //解析数字
            exp += expression[0];
            for (int i = 1; i < expression.size(); ++i) {
                if(!isdigit(expression[i])) break;
                else exp += expression[i];
            }
            ret = atoi(exp.c_str());
            return ret;
        } else if((expression.substr(0,3) == "add" && expression[3] == ' ')
                  || (expression.substr(0,4) == "mult" && expression[4] == ' ')){ //解析 and 和 mult
            int i , k = 0;
            int start = (expression[0] == 'a') ? 4 : 5;
            if(expression[start] == '('){
                k = 0;
                for (i = start + 1; i < expression.size(); ++i) {
                    if(expression[i] == ')' && k == 0) {
                        i++;
                        break;
                    }
                    else {
                        if(expression[i] == '(') k++;
                        if(expression[i] == ')') k--;
                        exp += expression[i];
                    }
                }
            } else {
                for (i = start; i < expression.size(); ++i) {
                    if(expression[i] == ' ') break;
                    else exp += expression[i];
                }
            }
            int par1 = cal(exp , ky);
            exp = string("");
            if(expression[i+1] == '('){
                k = 0;
                for (i = i+2; i < expression.size(); ++i) {
                    if(expression[i] == ')' && k == 0) {
                        i++;
                        break;
                    }
                    else {
                        if(expression[i] == '(') k++;
                        if(expression[i] == ')') k--;
                        exp += expression[i];
                    }
                }
            } else {
                for (i = i+1; i < expression.size(); ++i) {
                    if(expression[i] == ' ') break;
                    else exp += expression[i];
                }
            }
            int par2 = cal(exp , ky);
            if(expression[0] == 'a'){
                ret = par1 + par2;
            } else {
                ret = par1 * par2;
            }
            return ret;
        } else if(expression[0] == 'l'){  //解析let
            string key = "";
            int k = 0;
            for (int i = 4; i < expression.size(); ++i) {
                if(expression[i] == '('){
                    k = 0;
                    i++;
                    while ((expression[i] != ')' && i < expression.size()) || k != 0) { //key
                        if(expression[i] == '(') k++;
                        if(expression[i] == ')') k--;
                        key += expression[i];
                        i++;
                    }
                    i++;
                } else {
                    while (expression[i] != ' ' && i < expression.size()) { //key
                        key += expression[i];
                        i++;
                    }
                }
                if(i == expression.size()) break;
                ++i;
                if(expression[i] == '('){
                    i++;
                    k = 0;
                    exp = string("");
                    while (expression[i] != ')' || k != 0){
                        if(expression[i] == '(') k++;
                        if(expression[i] == ')') k--;
                        exp += expression[i];
                        i++;
                    }
                    i++;
                    ky[key] = cal(exp , ky);
                    key = string("");
                } else {
                    exp = string("");
                    while (expression[i] != ' '){
                        exp += expression[i];
                        i++;
                    }
                    ky[key] = cal(exp , ky);
                    key = string("");
                }
            }
            ret = cal(key , ky);
            return ret;
        } else {
            exp = string("");
            ret = ky[expression];
            return ret;
        }
    }

public:
    int evaluate(string expression) {
        int ret = cal(expression , unordered_map<string , int>());
        return ret;
    }
};

#endif //LEETCODE_PARSELISPEXPRESSION_H
