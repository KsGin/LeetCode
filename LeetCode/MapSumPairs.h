/*
 * File   : MapSumPairs
 * Author : KsGin 
 * Date   : 2017/10/1
 */

#ifndef LEETCODE_MAPSUMPAIRS_H
#define LEETCODE_MAPSUMPAIRS_H

#include <string>
#include <utility>
#include <vector>


class MapSum {

private:

    std::vector<std::pair<std::string , int>> mmp;

    int keyIndex(const std::string &key){
        for (int i = 0; i < mmp.size(); ++i) {
            if(mmp[i].first == key){
                return i;
            }
        }
        return -1;
    }
    
public:


    /** Initialize your data structure here. */
    MapSum() {
        mmp = std::vector<std::pair<std::string , int>>(0);
    }

    void insert(const std::string &key, int val) {
        int idx = keyIndex(key);
        if(idx == -1){
            mmp.emplace_back(key , val);
        }else{ 
    int sum(const std::string &prefix) {
        int ret = 0;

        for (auto &i : mmp) {
            if(i.first.find(prefix) == 0){
                ret += i.second;
            }
        }

        return ret;
    }
};

#endif //LEETCODE_MAPSUMPAIRS_H
