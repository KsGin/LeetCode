/*
 * File   : ReplaceWords
 * Author : KsGin 
 * Date   : 2017/11/11
 */

#ifndef LEETCODE_REPLACEWORDS_H
#define LEETCODE_REPLACEWORDS_H

#include <string>
#include <regex>
#include <sstream>

class ReplaceWords {
    std::vector<std::string> getWords(std::string sentence){
        std::vector<std::string> ret(0);
        unsigned long begin = 0;
        unsigned long idx = 0;
        for (;idx < sentence.size() ;++idx) {
            if (sentence[idx] == ' '){
                ret.push_back(sentence.substr(begin , idx - begin));
                begin = idx + 1;
            }
        }
        if(idx > begin) ret.push_back(sentence.substr(begin , idx));
        return ret;
    }

    bool isPre(std::string pre , std::string str){
        if(pre.empty() || str.empty() || pre.size() > str.size()) return false;
        for (int i = 0; i < pre.size(); ++i) {
            if(pre[i] != str[i]) return false;
        }
        return true;
    }

public:
    std::string replaceWords(std::vector<std::string>& dict, std::string sentence) {
        if (dict.empty() || sentence.empty()) return sentence;
        std::vector<std::string> words = getWords(sentence);
        for (int i = 0; i < words.size(); ++i) {
            for(int j = 0 ; j < dict.size() ; ++j){
                if (isPre(dict[j] , words[i])) words[i] = dict[j];
            }
        }

        std::stringstream ss;

        for (int i = 0; i < words.size()-1; ++i) {
            ss << words[i];
            ss << ' ';
        }
        ss << words[words.size()-1];
        return ss.str();
    }
};

#endif //LEETCODE_REPLACEWORDS_H
