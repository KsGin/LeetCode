/*
 * File   : SecondMinimumNodeInABinaryTree
 * Author : KsGin 
 * Date   : 2018/5/21
 */

#ifndef LEETCODE_SECONDMINIMUMNODEINABINARYTREE_H
#define LEETCODE_SECONDMINIMUMNODEINABINARYTREE_H

#include <climits>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class SecondMinimumNodeInABinaryTree {
    int fmin = INT_MAX;
    int smin = INT_MAX;
public:
    int findSecondMinimumValue(TreeNode* root) {
        if (!root) return smin;
        int val = root->val;
        if (val < fmin) {
            smin = fmin;
            fmin = val;
        } else if (val > fmin && val < smin){
            smin = val;
        }
        findSecondMinimumValue(root->left);
        findSecondMinimumValue(root->right);
        return smin == INT_MAX ? -1 : smin;
    }
};

#endif //LEETCODE_SECONDMINIMUMNODEINABINARYTREE_H
