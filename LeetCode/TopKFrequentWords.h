//
// Created by ksgin on 18-8-31.
//

#ifndef LEETCODE_TOPKFREQUENTWORDS_H
#define LEETCODE_TOPKFREQUENTWORDS_H

#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;

class TopKFrequentWords {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for(auto word:words) mp[word]++;
        set<pair<int, string>> mySet;
        for(auto item:mp)
        {
            mySet.insert(make_pair(0-item.second, item.first)); //let the most frequent become the smallest
        }
        auto it=mySet.begin();
        vector<string> res;
        for(int i=0; i<k; i++)
        {
            res.push_back((*it).second);
            it++;
        }
        return res;
    }
};

#endif //LEETCODE_TOPKFREQUENTWORDS_H
