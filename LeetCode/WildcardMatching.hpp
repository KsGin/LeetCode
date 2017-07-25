
/**
 * File : WildcardMatching.hpp
 * Author : KsGin 
 * Date : 2017/7/25.
 */

#ifndef LEETCODE_WILDCARDMATCHING_HPP
#define LEETCODE_WILDCARDMATCHING_HPP

#include <string>
#include <regex>

using namespace std;

class WildcardMatching {
public:
    bool isMatch(string s, string p) {
        if (s.empty() && p.empty()) return true;
        if (p.empty()) return false;
        if (s.empty()){
            for (int i = 0; i < p.size(); ++i) {
                if(p[i] != '*') return false;
            }
            return true;
        }
        
    }
};

#endif //LEETCODE_WILDCARDMATCHING_HPP
