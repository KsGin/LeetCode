/*
 * File   : ImplementMagicDictionary
 * Author : KsGin 
 * Date   : 22/10/2017
 */

#ifndef LEETCODE_IMPLEMENTMAGICDICTIONARY_H
#define LEETCODE_IMPLEMENTMAGICDICTIONARY_H

#include <utility>
#include <vector>
#include <string>

class MagicDictionary {

private:

    bool judge(const std::string a , const std::string b){
        if(a.size() != b.size()) return false;
        bool is_diff = false;
        for (int i = 0; i < a.size(); ++i) {
            if(a[i] != b[i]){
                if(!is_diff) is_diff = true;
                else return false;
            }
        }
        return is_diff;
    }

    std::vector<std::string> _dict;

public:
    /** Initialize your data structure here. */
    MagicDictionary() {
    }

    /** Build a dictionary through a list of words */
    void buildDict(std::vector<std::string> dict) {
        _dict = std::move(dict);
    }

    /** Returns if there is any word in the trie that equals to the given word after modifying exactly one character */
    bool search(std::string word) {
        for (int i = 0; i < _dict.size(); ++i) {
            if(judge(word , _dict[i])) return true;
        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary obj = new MagicDictionary();
 * obj.buildDict(dict);
 * bool param_2 = obj.search(word);
 */

#endif //LEETCODE_IMPLEMENTMAGICDICTIONARY_H
