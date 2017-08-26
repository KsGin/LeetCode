/**
 * File : MaximumBinaryTree
 * Author : KsGin 
 * Date : 2017/8/26.
 */

#include <vector>
#include <cstdio>

using std::vector;

#ifndef LEETCODE_MAXIMUMBINARYTREE_HPP
#define LEETCODE_MAXIMUMBINARYTREE_HPP

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class MaximumBinaryTree {
public:
    TreeNode* constructMaximumBinaryTree(vector<int> nums) {
        TreeNode * root = createTree(nums);
        return root;
    }


    TreeNode* createTree(vector<int> nums){
        if (nums.size() == 0) return NULL;
        int idx = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[idx]) idx = i;
        }
        TreeNode* root = new TreeNode(nums[idx]);
        root->left = createTree(vector<int>(nums.begin() , nums.begin() + idx));
        root->right = createTree(vector<int>(nums.begin() + idx + 1 , nums.end()));
        return root;
    }

};


#endif //LEETCODE_MAXIMUMBINARYTREE_HPP
