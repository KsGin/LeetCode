/*
 * File   : BinaryTreeTilt
 * Author : KsGin 
 * Date   : 2017/11/14
 */

#ifndef LEETCODE_BINARYTREETILT_H
#define LEETCODE_BINARYTREETILT_H


#include <cmath>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BinaryTreeTilt {
    int nodevalue(TreeNode* root){
        if(root == nullptr) return 0;
        return nodevalue(root->left) + nodevalue(root->right) + root->val;
    }
public:
    int findTilt(TreeNode* root) {
        if(root == nullptr)
            return 0;
        if(root->left == nullptr
           && root->right == nullptr)
            return 0;
        if(root->left == nullptr)
            return static_cast<int>(fabs(nodevalue(root->right))) + findTilt(root->right);
        if(root->right == nullptr)
            return static_cast<int>(fabs(nodevalue(root->left))) + findTilt(root->left);
        return static_cast<int>(fabs(nodevalue(root->left) - nodevalue(root->right)))
               + findTilt(root->left) + findTilt(root->right);
    }
};

#endif //LEETCODE_BINARYTREETILT_H
