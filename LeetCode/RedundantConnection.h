/*
 * File   : RedundantConnection
 * Author : KsGin 
 * Date   : 2018/2/12
 */

#ifndef LEETCODE_REDUNDANTCONNECTION_H
#define LEETCODE_REDUNDANTCONNECTION_H

#include <vector>
#include <set>

using namespace std;

class RedundantConnection {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> root(2001, -1);
        for (auto edge : edges) {
            int x = find(root, edge[0]), y = find(root, edge[1]);
            if (x == y) return edge;
            root[x] = y;
        }
        return {};
    }
    int find(vector<int>& root, int i) {
        while (root[i] != -1) {
            i = root[i];
        }
        return i;
    }
};

#endif //LEETCODE_REDUNDANTCONNECTION_H
