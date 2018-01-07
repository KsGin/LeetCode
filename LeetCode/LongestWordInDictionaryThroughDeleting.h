/*
 * File   : LongestWordInDictionaryThroughDeleting
 * Author : KsGin 
 * Date   : 2018/1/7
 */

#ifndef LEETCODE_LONGESTWORDINDICTIONARYTHROUGHDELETING_H
#define LEETCODE_LONGESTWORDINDICTIONARYTHROUGHDELETING_H

#include <string>
#include <vector>

using namespace std;

class LongestWordInDictionaryThroughDeleting {
public:
    string findLongestWord(string s, vector<string> &d) {

        sort(d.begin(), d.end(),
             [](string a, string b) {
                 if (a.size() > b.size()) return true;
                 if (a.size() == b.size()) return a < b;
                 return false;
             });

        for (auto str : d) {
            int idx = 0;
            for (auto ch : s){
                if(ch == str[idx]) idx++;
                if(idx == str.size()) return str;
            }
        }
        return "";
    }
};

#endif //LEETCODE_LONGESTWORDINDICTIONARYTHROUGHDELETING_H
