/*
 * File   : DiameterOfBinaryTree
 * Author : KsGin 
 * Date   : 2017/12/17
 */

#ifndef LEETCODE_DIAMETEROFBINARYTREE_H
#define LEETCODE_DIAMETEROFBINARYTREE_H

#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class DiameterOfBinaryTree {

    int minHeight(TreeNode* root , int& min){
        if(!root) return 0;
        int left = minHeight(root->left , min);
        int right = minHeight(root->right , min);
        min = max(min , left+right+1);
        return max(left , right) + 1;
    }


public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int res = 0;
        minHeight(root,res);
        return res - 1;
    }
};

#endif //LEETCODE_DIAMETEROFBINARYTREE_H
