/*
 * File   : BinarySearchTreeIterator
 * Author : KsGin 
 * Date   : 2018/2/4
 */

#ifndef LEETCODE_BINARYSEARCHTREEITERATOR_H
#define LEETCODE_BINARYSEARCHTREEITERATOR_H

#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BSTIterator {
    vector<int> _sorted;
    int idx = 0;

    void _init(TreeNode* root){
        if(!root) return;
        _init(root->left);
        _sorted.push_back(root->val);
        _init(root->right);
    }

public:
    BSTIterator(TreeNode *root) {
        _init(root);
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return idx < _sorted.size();
    }

    /** @return the next smallest number */
    int next() {
        return _sorted[idx++];
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */

#endif //LEETCODE_BINARYSEARCHTREEITERATOR_H
