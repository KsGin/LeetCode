/*
 * File   : ReverseStringTwo
 * Author : KsGin 
 * Date   : 2018/1/6
 */

#ifndef LEETCODE_REVERSESTRINGTWO_H
#define LEETCODE_REVERSESTRINGTWO_H

#include <string>

using namespace std;

class ReverseStringTwo {
public:
    string reverseStr(string s, int k) {
        int idx = 0 ;
        string::iterator it = s.begin();
        while (idx < s.size()){
            if(idx + k > s.size()){
                reverse(it , it + s.size() - idx);
            } else {
                reverse(it , it+k);
            }
            idx += 2*k;
            it += 2*k;
        }
        return s;
    }
};


#endif //LEETCODE_REVERSESTRINGTWO_H
