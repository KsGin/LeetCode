/*
 * File   : CountBinarySubstrings
 * Author : KsGin 
 * Date   : 17/10/2017
 */

#ifndef LEETCODE_COUNTBINARYSUBSTRINGS_H
#define LEETCODE_COUNTBINARYSUBSTRINGS_H

#include <string>
#include <vector>

class CountBinarySubstrings {
public:
    int countBinarySubstrings(std::string s) {
        int headflag = s[0];
        int headcount = 1;
        int tailcount = 0;
        int res = 0;
        for(int i = 1; i < s.size(); i++){
            if(s[i] == headflag){
                if(tailcount==0){
                    headcount++;
                }
                else{
                    res+=std::min(headcount, tailcount);
                    headcount = tailcount;
                    tailcount = 1;
                    headflag = s[i-1];
                }
            }
            else{
                tailcount++;
            }
        }
        res+=std::min(headcount, tailcount);
        return res;
    }
};

#endif //LEETCODE_COUNTBINARYSUBSTRINGS_H
