/*
 * File   : SameTree
 * Author : KsGin 
 * Date   : 2017/11/17
 */

#ifndef LEETCODE_SAMETREE_H
#define LEETCODE_SAMETREE_H



struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        if((!p && q) || (p && !q) || (p->val != q->val)) return false;
        return isSameTree(p->left , q->left) && isSameTree(p->right , q->right);
    }
};

#endif //LEETCODE_SAMETREE_H
