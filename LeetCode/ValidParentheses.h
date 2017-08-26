//
// Created by KsGin on 2017/7/6.
//

#pragma once
#include <string>
#include <stack>

using namespace std;

class ValidParentheses {
public:
    bool isValid(string s) {
        stack<char> sta;

        for (auto i = 0; i < s.length(); ++i) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                sta.push(s[i]);
            } else {
                char ch;
                switch (s[i]) {
                    case ')':
                        ch = '(';
                        break;
                    case ']':
                        ch = '[';
                        break;
                    case '}':
                        ch = '{';
                        break;
                    default:
                        ch = s[i];
                        break;
                }
                if (sta.empty() || sta.top() != ch) { return false; }
                else sta.pop();
            }
        }
        return sta.empty();
    }
};