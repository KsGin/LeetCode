/*
 * File   : BinaryTreeRightSideView
 * Author : KsGin 
 * Date   : 2018/3/23
 */

#ifndef LEETCODE_BINARYTREERIGHTSIDEVIEW_H
#define LEETCODE_BINARYTREERIGHTSIDEVIEW_H

#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {

    void recv(TreeNode *root, int level, vector<int> &res) {
        if (!root) return;
        if (level >= res.size()) res.push_back(root->val);
        else res[level] = root->val;
        recv(root->left, level + 1, res);
        recv(root->right, level + 1, res);
    }

public:
    vector<int> rightSideView(TreeNode *root) {
        vector<int> res(0);
        recv(root, 0, res);
        return res;
    }
};

#endif //LEETCODE_BINARYTREERIGHTSIDEVIEW_H
