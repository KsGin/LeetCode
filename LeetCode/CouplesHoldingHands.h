/*
 * File   : CouplesHoldingHands
 * Author : KsGin 
 * Date   : 2018/3/5
 */

#ifndef LEETCODE_COUPLESHOLDINGHANDS_H
#define LEETCODE_COUPLESHOLDINGHANDS_H

#include <vector>

using namespace std;

class CouplesHoldingHands {
public:
    int minSwapsCouples(vector<int> &row) {
        int ret = 0;
        for (int i = 0; i < row.size() - 1; i += 2) {
            if ((row[i] % 2 == 0 && row[i] + 1 != row[i+1]) ||
                (row[i] % 2 == 1 && row[i] - 1 != row[i+1])) {
                for (int j = i + 2; j < row.size(); ++j) {
                    if ((row[i] % 2 == 0 && row[i] + 1 == row[j]) ||
                        (row[i] % 2 == 1 && row[i] - 1 == row[j])) {
                        swap(row[i + 1], row[j]);
                        ret++;
                        break;
                    }
                }
            }
        }
        return ret;
    }
};

#endif //LEETCODE_COUPLESHOLDINGHANDS_H
