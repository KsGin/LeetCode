/*
 * File   : BurstBalloons
 * Author : KsGin 
 * Date   : 2018/1/31
 */

#ifndef LEETCODE_BURSTBALLOONS_H
#define LEETCODE_BURSTBALLOONS_H

#include <vector>

using namespace std;

class BurstBalloons {
    vector<int> indexOfMaxCoins(vector<int>& nums , vector<int>& bursted){
        vector<int> notVisted(0);
        vector<int> res(0);
        for (int i = 0; i < nums.size(); ++i) {
            if(find(begin(bursted) , end(bursted) , nums[i]) == end(bursted)){
                notVisted.push_back(i);
            }
        }
        if(notVisted.empty()) return res;
        int cot = 0;
        for (int i = 0; i < notVisted.size(); ++i) {
            int tmp = nums[notVisted[i]];
            if(i > 0) tmp *= nums[notVisted[i-1]];
            if(i < notVisted.size()-1) tmp *= nums[notVisted[i+1]];
            if(tmp > cot) cot = i;
        }
        if(cot > 0) res.push_back(notVisted[cot-1]);
        res.push_back(notVisted[cot]);
        if(cot < notVisted.size()-1) res.push_back(notVisted[cot+1]);
        bursted.push_back(cot);
        return res;
    }

public:
    int maxCoins(vector<int>& nums) {
        int ret = 0;
        vector<int> bursted(0);
        while (bursted.size() < nums.size()){
            vector<int> tt = indexOfMaxCoins(nums,bursted);
            int tmp = 1;
            for (auto num : tt) tmp *= num;
            ret += tmp;
        }
        return ret;
    }
};

#endif //LEETCODE_BURSTBALLOONS_H
