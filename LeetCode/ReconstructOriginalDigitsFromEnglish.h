/*
 * File   : ReconstructOriginalDigitsFromEnglish
 * Author : KsGin 
 * Date   : 2017/12/19
 */

#ifndef LEETCODE_RECONSTRUCTORIGINALDIGITSFROMENGLISH_H
#define LEETCODE_RECONSTRUCTORIGINALDIGITSFROMENGLISH_H

#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class ReconstructOriginalDigitsFromEnglish {

    bool constructOriginalDigits(unordered_map<char , int> &table , string number){
        for (auto s : number){
            if(table[s] > 0) continue;
            else return false;
        }
        for (auto s : number) --table[s];
        return true;
    }

public:
    string originalDigits(string s) {
        vector<string> numberStrings{"zero" , "two" , "six" , "four" , "five" ,
                               "one" , "eight" , "seven" , "three" , "nine"};
        vector<int> numers{0 , 2 , 6 , 4 , 5 , 1 , 8 , 7 , 3 , 9};
        unordered_map<char , int> table;
        for (auto c : s){
            if(table[c] >= 1) ++table[c];
            else table[c] = 1;
        }

        vector<int> res(0);
        string ret = "";
        int idx = 0;
        while (idx <= 9){
            if(constructOriginalDigits(table,numberStrings[idx])) res.push_back(numers[idx]);
            else ++idx;
        }
        sort(res.begin() , res.end());
        for (auto c : res) ret.push_back(static_cast<char>(c + '0'));
        return ret;
    }
};

#endif //LEETCODE_RECONSTRUCTORIGINALDIGITSFROMENGLISH_H
