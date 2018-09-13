/*
 * File   : ReverseWordsInAString
 * Author : KsGin 
 * Date   : 2018/9/13
 */

#ifndef LEETCODE_REVERSEWORDSINASTRING_H
#define LEETCODE_REVERSEWORDSINASTRING_H

#include <string>
#include <stack>
#include <sstream>

using namespace std;

class ReverseWordsInAString {
public:
    void reverseWords(string &s) {
        stringstream ss;
        stack<string> st;

        for (auto & c : s) {
            if (c == ' ' && !ss.str().empty()) {
                st.push(ss.str());
                ss.str("");
            } else if (c != ' '){
                ss << c;
            }
        }

        if (!ss.str().empty()) st.push(ss.str());

        s = "";

        while (!st.empty()) {
            s += st.top();
            if (st.size() > 1) s += " ";
            st.pop();
        }
    }
};

#endif //LEETCODE_REVERSEWORDSINASTRING_H
