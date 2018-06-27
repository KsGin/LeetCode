/*
 * File   : BinaryTreePruning
 * Author : KsGin 
 * Date   : 2018/6/27
 */

#ifndef LEETCODE_BINARYTREEPRUNING_H
#define LEETCODE_BINARYTREEPRUNING_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BinaryTreePruning {

    int getSubTreeValueSum(TreeNode *root) {
        if (!root) return 0;
        else return root->val + getSubTreeValueSum(root->left) + getSubTreeValueSum(root->right);
    }

public:
    TreeNode *pruneTree(TreeNode *root) {
        if (!root) return root;

        if (!getSubTreeValueSum(root->left)) {
            root->left = nullptr;
        }
        if (!getSubTreeValueSum(root->right)) {
            root->right = nullptr;
        }

        pruneTree(root->left);
        pruneTree(root->right);

        return root;
    }
};

#endif //LEETCODE_BINARYTREEPRUNING_H
