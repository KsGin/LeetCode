/*
 * File   : KthSmallestElementInABST
 * Author : KsGin 
 * Date   : 2018/3/8
 */

#ifndef LEETCODE_KTHSMALLESTELEMENTINABST_H
#define LEETCODE_KTHSMALLESTELEMENTINABST_H

#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {

    void getValue(TreeNode* root , vector<int>& values){
        if(!root) return;
        values.push_back(root->val);
        getValue(root->left , values);
        getValue(root->right , values);
    }

public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> valuse(0);
        getValue(root , valuse);
        sort(valuse.begin(),valuse.end());
        return valuse[k-1];
    }
};

#endif //LEETCODE_KTHSMALLESTELEMENTINABST_H
