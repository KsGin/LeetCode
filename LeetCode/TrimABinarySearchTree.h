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

    //Wrong
    TreeNode *trimBST(TreeNode *root, int L, int R) {
        return RecursivelyTBST(root, nullptr, Range(L, R));
    }

    //Right
    TreeNode *trimBST_Right_Answer(TreeNode *root, int L, int R) {
        if(!root) return nullptr;
        // val not in range, return the left/right subtrees
        if(root->val < L) return trimBST(root->right, L, R);
        if(root->val > R) return trimBST(root->left, L, R);
        // val in [L, R], recusively trim left/right subtrees
        root->left = trimBST(root->left, L, R);
        root->right = trimBST(root->right, L, R);
        return root;
    }

};

#endif //LEETCODE_TRIMABINARYSEARCHTREE_H
