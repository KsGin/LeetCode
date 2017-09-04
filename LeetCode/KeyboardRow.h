/**
 * File : KeyboardRow
 * Author : KsGin
 * Date : 2017/9/4.
 */
#ifndef LEETCODE_KEYBOARDROW_H
#define LEETCODE_KEYBOARDROW_H

#include <string>
#include <vector>
#include <algorithm>

class KeyboardRow {
public:
    std::vector<std::string> findWords(std::vector<std::string> &words) {
        std::vector<std::string> ret(0);
        for (int i = 0; i < words.size(); ++i) {
            if (isLeg(words[i])) ret.push_back(words[i]);
        }
        return ret;
    }

private:
    std::vector<char> fV{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    std::vector<char> sV{'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
    std::vector<char> tV{'z', 'x', 'c', 'v', 'b', 'n', 'm'};

    bool isLeg(std::string s) {
        std::vector<char> tmp;
        if (isContain(s[0], fV)) {
            tmp = fV;
        } else if (isContain(s[0], sV)) {
            tmp = sV;
        } else {
            tmp = tV;
        }
        for (int i = 1; i < s.size(); ++i) {
            if(!isContain(s[i] , tmp)) return false;
        }
        return true;
    }

    bool isContain(char c, std::vector<char> v) {
        c = (char) tolower(c);
        return !(std::find(v.begin(), v.end(), c) == v.end());
    }
};

#endif //LEETCODE_KEYBOARDROW_H
