/*
 * File   : LongestRepeatingCharacterReplacement
 * Author : KsGin 
 * Date   : 2018/3/16
 */

#ifndef LEETCODE_LONGESTREPEATINGCHARACTERREPLACEMENT_H
#define LEETCODE_LONGESTREPEATINGCHARACTERREPLACEMENT_H

#include <string>
#include <vector>

using namespace std;

class LongestRepeatingCharacterReplacement {
public:
    int characterReplacement(string s, int k) {
        vector<int> counts(26 , 0);
        int ret = 0, maxCount = 0, start = 0;
        for (int i = 0; i < s.size(); ++i) {
            maxCount = max(maxCount , ++counts[s[i]-'A']);
            while(i-start-maxCount+1 > k){
                ++start;
                --counts[s[start]-'A'];
            }
            ret = max(ret , i-start+1);
        }
        return ret;
    }
};

#endif //LEETCODE_LONGESTREPEATINGCHARACTERREPLACEMENT_H
