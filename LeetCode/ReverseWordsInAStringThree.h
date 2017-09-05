/**
 * File : ReverseWordsInAStringThree
 * Author : KsGin 
 * Date : 2017/9/5.
 */
#ifndef LEETCODE_REVERSEWORDSINASTRINGTHREE_H
#define LEETCODE_REVERSEWORDSINASTRINGTHREE_H

#include <string>

class ReverseWordsInAStringThree {
public:
    std::string reverseWords(std::string s) {
        std::string ss(s);
        int left = 0;
        for (int i = 0; i < ss.size(); ++i) {
            if (s[i] == ' ') {
                reverse(ss ,left , i);
                left = i+1;
            }
        }
        reverse(ss ,left , ss.size());
        return ss;
    }

private:

    void reverse(std::string& s , int left , int right){
        for (int i = left , j = right-1; i < j; ++i , --j) {
            std::swap(s[i] , s[j]);
        }
    }

};

#endif //LEETCODE_REVERSEWORDSINASTRINGTHREE_H
