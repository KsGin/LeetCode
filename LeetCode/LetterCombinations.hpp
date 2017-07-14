//
// Created by KsGin on 2017/7/2.
//

#include "vector"
#include <string>
#include <unordered_map>

using namespace std;

class LetterCombinations {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> s;
        if (digits.size() == 0)
            return s;
        unordered_map<int, vector<char>> digits_map{                             //对照表
                make_pair(1, vector<char>{}),
                make_pair(2, vector<char>{'a', 'b', 'c'}),
                make_pair(3, vector<char>{'d', 'e', 'f'}),
                make_pair(4, vector<char>{'g', 'h', 'i'}),
                make_pair(5, vector<char>{'j', 'k', 'l'}),
                make_pair(6, vector<char>{'m', 'n', 'o'}),
                make_pair(7, vector<char>{'p', 'q', 'r', 's'}),
                make_pair(8, vector<char>{'t', 'u', 'v'}),
                make_pair(9, vector<char>{'w', 'x', 'y', 'z'})
        };

        vector<vector<char>> vcs;
        for (auto i = 0; i < digits.length(); ++i) {
            vcs.push_back(digits_map[digits[i] - 48]);
        }

        Comb(0, s, vcs, "", (int) digits.length());

        return s;
    }

    void Comb(int i /*第i层*/ ,
                     vector<string> &s /*结果集合*/,
                     vector<vector<char>> vcs/*字典*/ ,
                     string cstr /*当前字符串*/,
                     int n /*字符串最大长度*/) {
        for (auto j = 0; j < vcs[i].size(); ++j) {
            if (i == n - 1) {      //保存结果
                s.push_back(cstr + vcs[i][j]);
            } else {
                Comb(i + 1, s, vcs, cstr + vcs[i][j], n);
            }

        }
    }
};