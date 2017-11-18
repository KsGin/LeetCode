/*
 * File   : AddOneRowToTree
 * Author : KsGin 
 * Date   : 2017/11/18
 */

#ifndef LEETCODE_ADDONEROWTOTREE_H
#define LEETCODE_ADDONEROWTOTREE_H


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class AddOneRowToTree {
    void AddRow(TreeNode* root , int v , int d , int cd){
        if(!root) return;
        if(d - 1 == cd){
                auto left = new TreeNode(v);
                left->left = root->left;
                root->left = left;
                auto right = new TreeNode(v);
                right->right = root->right;
                root->right = right;
        } else {
            AddRow(root->left , v , d , cd+1);
            AddRow(root->right , v , d , cd+1);
        }

    }
public:
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(d == 1) {
            TreeNode* h = new TreeNode(v);
            h->left = root;
            return h;
        }
        auto head = root;
        AddRow(head , v , d , 1);
        return root;
    }
};

#endif //LEETCODE_ADDONEROWTOTREE_H
