/*
 * File   : AllPathsFromSourceToTarget
 * Author : KsGin 
 * Date   : 2018/6/28
 */

#ifndef LEETCODE_ALLPATHSFROMSOURCETOTARGET_H
#define LEETCODE_ALLPATHSFROMSOURCETOTARGET_H

#include <vector>

using namespace std;

class AllPathsFromSourceToTarget {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph) {
        vector<vector<int>> ret;
        vector<int> tmp;
        helper(graph , ret , tmp , 0);
        return ret;
    }

    void helper(vector<vector<int>> &graph, vector<vector<int>> &ret, vector<int> tout, int start) {
        tout.push_back(start);
        if (tout.back() == graph.size() - 1) {
            ret.push_back(tout);
            return;
        }
        for (auto it : graph[start]) {
            helper(graph, ret, tout, it);
        }
    }
};

#endif //LEETCODE_ALLPATHSFROMSOURCETOTARGET_H
