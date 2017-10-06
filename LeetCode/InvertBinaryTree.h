/*
 * File   : InvertBinaryTree
 * Author : KsGin 
 * Date   : 2017/10/6
 */

#ifndef LEETCODE_INVERTBINARYTREE_H
#define LEETCODE_INVERTBINARYTREE_H

#include <algorithm>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class InvertBinaryTree {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root)
            return nullptr;
        std::swap(root->left , root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};

#endif //LEETCODE_INVERTBINARYTREE_H
