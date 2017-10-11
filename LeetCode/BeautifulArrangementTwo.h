/*
 * File   : BeautifulArrangementTwo
 * Author : KsGin 
 * Date   : 2017/10/11
 */

#ifndef LEETCODE_BEAUTIFULARRANGEMENTTWO_H
#define LEETCODE_BEAUTIFULARRANGEMENTTWO_H

#include <vector>

class BeautifulArrangementTwo {
public:
    std::vector<int> constructArray(int n, int k) {
            int l = 1, r = k+1;
            std::vector<int> ret;
            while (l <= r) {
                ret.push_back(l++);
                if (l <= r) ret.push_back(r--);
            }
            for (int i = k+2; i <= n; i++)
                ret.push_back(i);
            return ret;
    }
};

#endif //LEETCODE_BEAUTIFULARRANGEMENTTWO_H
