/*
 * File   : BinaryTreePreorderTraversal
 * Author : KsGin 
 * Date   : 2017/12/3
 */

#ifndef LEETCODE_BINARYTREEPREORDERTRAVERSAL_H
#define LEETCODE_BINARYTREEPREORDERTRAVERSAL_H


#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BinaryTreePreorderTraversal {

    void preT(TreeNode* root , std::vector<int> &ret){
        if(!root) return;
        ret.push_back(root->val);
        preT(root->left , ret);
        preT(root->right , ret);
    }

public:
    std::vector<int> preorderTraversal(TreeNode* root) {
        std::vector<int> ret(0);
        preT(root , ret);
        return ret;
    }
};

#endif //LEETCODE_BINARYTREEPREORDERTRAVERSAL_H
