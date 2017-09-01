/**
 * File : CountingBits
 * Author : KsGin 
 * Date : 2017/9/1.
 */
#ifndef LEETCODE_COUNTINGBITS_H
#define LEETCODE_COUNTINGBITS_H

#include <vector>
#include <complex>

class CountingBits {
public:
    std::vector<int> countBits(int num) {
        if (num == 0) return {0};
        std::vector<int> res{0, 1};
        int k = 2, i = 2;
        while (i <= num) {
            for (i = pow(2, k - 1); i < pow(2, k); ++i) {
                if (i > num) break;
                int t = (pow(2, k) - pow(2, k - 1)) / 2;
                if (i < pow(2, k - 1) + t) res.push_back(res[i - t]);
                else res.push_back(res[i - t] + 1);
            }
            ++k;
        }
        return res;
    }
};


#endif //LEETCODE_COUNTINGBITS_H
