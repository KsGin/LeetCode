/*
 *  File Name: TrimABinarySearchTree
 *  Author   : ksgin
 *  Date     : 9/8/17
 */
#ifndef LEETCODE_TRIMABINARYSEARCHTREE_H
#define LEETCODE_TRIMABINARYSEARCHTREE_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class TrimABinarySearchTree {

private:
    struct Range {
        int L;
        int R;

        Range(int l, int r) : L(l), R(r) {}
    };

    TreeNode *RecursivelyTBST(TreeNode *current, TreeNode *previous, Range r) {
        if(current == nullptr) return nullptr;

        TreeNode *lChild = RecursivelyTBST(current->left, current, r);
        TreeNode *rChild = RecursivelyTBST(current->right, current, r);

        if(!previous){
            if(current->val < r.L) return rChild;
            if(current->val > r.R) return lChild;
        }else {
            if(current->val < r.L) previous->left = rChild;
            if(current->val > r.R) previous->right = lChild;
        }

        return current;
    }

public:
    TreeNode *trimBST(TreeNode *root, int L, int R) {
        return RecursivelyTBST(root, nullptr, Range(L, R));
    }


};

#endif //LEETCODE_TRIMABINARYSEARCHTREE_H
