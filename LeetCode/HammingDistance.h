/**
 * File : HammingDistance
 * Author : KsGin 
 * Date : 2017/8/27.
 */
#ifndef LEETCODE_HAMMINGDISTANCE_H
#define LEETCODE_HAMMINGDISTANCE_H


#include <string>

using std::string;

class HammingDistance {
public:
    int hammingDistance(int x, int y) {
        string s1 = getBitsString(x);
        string s2 = getBitsString(y);
        int ret = 0;
        if (s1.size() != s2.size()){
            if (s1.size() > s2.size()){
                int count = s1.size() - s2.size();
                for (int i = 0; i < count; ++i) {
                    s2 = '0' + s2;
                }
            } else {
                int count = s2.size() - s1.size();
                for (int i = 0; i < count; ++i) {
                    s1 = '0' + s1;
                }
            }
        }
        for (int i = 0; i < s1.size(); ++i) {
            if (s1[i] != s2[i]) ++ret;
        }
        return ret;
    }

private:
    string getBitsString(int x){
        string ret("");
        while (x != 0){
            if (x % 2 == 0){
                ret = '0' + ret;
            }else{
                ret = '1' + ret;
            }
            x = x / 2;
        }
        return ret;
    }
};

#endif //LEETCODE_HAMMINGDISTANCE_H
