/*
 * File   : BinaryTreeInorderTraversal
 * Author : KsGin 
 * Date   : 05/11/2017
 */

#ifndef LEETCODE_BINARYTREEINORDERTRAVERSAL_H
#define LEETCODE_BINARYTREEINORDERTRAVERSAL_H

#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BinaryTreeInorderTraversal {
public:
    void InorderTraversalRecv(TreeNode *pNode, std::vector<int> &ret) {
        if(pNode == nullptr) return;
        InorderTraversalRecv(pNode->left , ret);
        ret.push_back(pNode->val);
        InorderTraversalRecv(pNode->right , ret);
    }

    std::vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> ret(0);
        if(root == nullptr) return ret;

        InorderTraversalRecv(root , ret);

        return ret;
    }
};

#endif //LEETCODE_BINARYTREEINORDERTRAVERSAL_H
