/*
 * File   : ConvertSortedArrayToBinarySearchTree
 * Author : KsGin 
 * Date   : 2018/1/27
 */

#ifndef LEETCODE_CONVERTSORTEDARRAYTOBINARYSEARCHTREE_H
#define LEETCODE_CONVERTSORTEDARRAYTOBINARYSEARCHTREE_H

#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class ConvertSortedArrayToBinarySearchTree {
    void helper(vector<int> &nums, int l, int r, TreeNode *node) {
        if (l < r) {
            int mid = (l + r) / 2;
            node->val = nums[mid];
            if(l < mid){
                node->left = new TreeNode(0);
                helper(nums,l , mid , node->left);
            }
            if(mid+1 < r){
                node->right = new TreeNode(0);
                helper(nums,mid+1 , r , node->right);
            }
        } else {
            node = nullptr;
        }
    }

public:
    TreeNode *sortedArrayToBST(vector<int> &nums) {
        if(nums.empty()) return nullptr;
        TreeNode *root = new TreeNode(0);
        helper(nums , 0 , static_cast<int>(nums.size()), root);
        return root;
    }
};

#endif //LEETCODE_CONVERTSORTEDARRAYTOBINARYSEARCHTREE_H
