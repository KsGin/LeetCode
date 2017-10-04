/*
 * File   : MaximumDepthOfBinaryTree
 * Author : KsGin 
 * Date   : 2017/10/4
 */

#ifndef LEETCODE_MAXIMUMDEPTHOFBINARYTREE_H
#define LEETCODE_MAXIMUMDEPTHOFBINARYTREE_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class MaximumDepthOfBinaryTree {
private:
    int max(TreeNode* root , int depth){
        int left = depth, right = depth;
        if(root->left) left = max(root->left , depth+1);
        if(root->right) right = max(root->right , right+1);
        return left > right ? left : right;
    }

public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        return max(root , 1);
    }
};

#endif //LEETCODE_MAXIMUMDEPTHOFBINARYTREE_H
