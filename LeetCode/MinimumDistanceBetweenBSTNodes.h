/*
 * File   : MinimumDistanceBetweenBSTNodes
 * Author : KsGin 
 * Date   : 2018/3/7
 */

#ifndef LEETCODE_MINIMUMDISTANCEBETWEENBSTNODES_H
#define LEETCODE_MINIMUMDISTANCEBETWEENBSTNODES_H

#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class MinimumDistanceBetweenBSTNodes {
    void getValuse(TreeNode* root , vector<int>& values ){
        if(!root) return;
        values.push_back(root->val);
        getValuse(root->left,values);
        getValuse(root->right,values);
    }

public:
    int minDiffInBST(TreeNode* root) {
        vector<int> values(0);
        getValuse(root , values);
        sort(values.begin() , values.end());
        int ret = INT_MAX;
        for (int i = 1; i < values.size(); ++i) {
            ret = min(ret , values[i] - values[i-1]);
        }
        return ret;
    }
};

#endif //LEETCODE_MINIMUMDISTANCEBETWEENBSTNODES_H
