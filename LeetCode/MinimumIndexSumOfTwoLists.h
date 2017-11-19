/*
 * File   : MinimumIndexSumOfTwoLists
 * Author : KsGin 
 * Date   : 2017/11/19
 */

#ifndef LEETCODE_MINIMUMINDEXSUMOFTWOLISTS_H
#define LEETCODE_MINIMUMINDEXSUMOFTWOLISTS_H

#include <set>
#include <string>
#include <vector>

class SolMinimumIndexSumOfTwoListsution {
public:
    std::vector<std::string> findRestaurant(std::vector<std::string>& list1, std::vector<std::string>& list2) {
        int sum = INT32_MAX;
        std::set<std::string> ret;
        for (int i = 0; i < list1.size(); ++i) {
            for (int j = 0; j < list2.size(); ++j) {
                if(list1[i] == list2[j]){
                    if(i + j == sum){
                        ret.insert(list1[i]);
                    } else if(i + j < sum) {
                        ret.clear();
                        ret.insert(list1[i]);
                        sum = i + j;
                    }
                }
            }
        }
        return std::vector<std::string>(ret.begin() , ret.end());
    }
};

#endif //LEETCODE_MINIMUMINDEXSUMOFTWOLISTS_H
