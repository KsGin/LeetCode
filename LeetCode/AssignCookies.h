/*
 * File   : AssignCookies
 * Author : KsGin 
 * Date   : 2017/11/15
 */

#ifndef LEETCODE_ASSIGNCOOKIES_H
#define LEETCODE_ASSIGNCOOKIES_H

#include <vector>

class AssignCookies {
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        if(g.empty() || s.empty()) return 0;
        std::sort(g.begin(),g.end());
        std::sort(s.begin(),s.end());

        int gidx = 0 , sidx = 0 , ret = 0;

        while (sidx < s.size() && gidx < g.size()){
            if(s[sidx] >= g[gidx]){
                ret++;
                gidx++;
                sidx++;
            }else{
                sidx++;
            }
        }
        return ret;
    }
};

#endif //LEETCODE_ASSIGNCOOKIES_H
