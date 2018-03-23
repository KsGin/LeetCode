/*
 * File   : BinaryTreeLevelOrderTraversal
 * Author : KsGin 
 * Date   : 2018/3/23
 */

#ifndef LEETCODE_BINARYTREELEVELORDERTRAVERSAL_H
#define LEETCODE_BINARYTREELEVELORDERTRAVERSAL_H

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BinaryTreeLevelOrderTraversal {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res(0);
        if(!root) return res;
        res.push_back(vector<int>(0));
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        while (q.size() > 1){
            auto p = q.front();
            q.pop();
            if (!p) {
                res.push_back(vector<int>(0));
                q.push(nullptr);
            } else {
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
                res[res.size()-1].push_back(p->val);
            }
        }
        return res;
    }
};

#endif //LEETCODE_BINARYTREELEVELORDERTRAVERSAL_H
