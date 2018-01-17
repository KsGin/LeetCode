/*
 * File   : PartitionLabels
 * Author : KsGin 
 * Date   : 2018/1/17
 */

#ifndef LEETCODE_PARTITIONLABELS_H
#define LEETCODE_PARTITIONLABELS_H

#include <vector>
#include <string>

using namespace std;

class PartitionLabels {
public:
    vector<int> partitionLabels(string S) {
        vector<pair<int,int>> cp(26 , pair<int,int>(S.size() + 1,S.size() + 1));
        for (int i = 0; i < S.size(); ++i) {
            cp[S[i]-'a'].second = i + 1;
        }
        for (int i = static_cast<int>(S.size() - 1); i >= 0; --i) {
            cp[S[i]-'a'].first = i + 1;
        }

        sort(cp.begin() , cp.end());

        vector<int> res(0);
        int start = 0;
        for (int i = 0; i < cp.size(); ++i) {
            if(cp[i].first == S.size() + 1 || cp[i].second == S.size() + 1){
                continue;
            }
            if(res.empty()) res.push_back(cp[i].second);
            if(cp[i].first < res[res.size()-1] + start){
                if(cp[i].second > res[res.size()-1] + start)
                    res[res.size()-1] = cp[i].second - start;
            }
            if(cp[i].first > res[res.size()-1] + start) {
                start += res[res.size()-1];
                res.push_back(cp[i].second - start);
            }
        }
        return res;
    }
};

#endif //LEETCODE_PARTITIONLABELS_H
