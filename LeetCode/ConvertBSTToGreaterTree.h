/*
 * File   : ConvertBSTToGreaterTree
 * Author : KsGin 
 * Date   : 26/10/2017
 */

#ifndef LEETCODE_CONVERTBSTTOGREATERTREE_H
#define LEETCODE_CONVERTBSTTOGREATERTREE_H


 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 };

class ConvertBSTToGreaterTree {
public:
    TreeNode* convertBST(TreeNode* root) {
        if (!root) return nullptr;
        convertBST(root->right);
        root->val += sum;
        sum = root->val;
        convertBST(root->left);
        return root;
    }

private:
    int sum = 0;
};

#endif //LEETCODE_CONVERTBSTTOGREATERTREE_H
