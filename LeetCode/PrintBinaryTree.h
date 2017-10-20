/*
 * File   : PrintBinaryTree
 * Author : KsGin 
 * Date   : 20/10/2017
 */

#ifndef LEETCODE_PRINTBINARYTREE_H
#define LEETCODE_PRINTBINARYTREE_H

#include <vector>
#include <string>
#include <cmath>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class PrintBinaryTree {
private:

    int height(TreeNode* root){
        if(root == nullptr) return 0;
        return 1 + std::max(height(root->left) , height(root->right));
    }

    void print(TreeNode *pNode, int i, int left, int right , std::vector<std::vector<std::string>> &ret) {
        if(pNode == nullptr) return;
        int mid = (left + right)/2;
        ret[i][mid] = std::to_string(pNode->val);

        print(pNode->left , i+1 , left , mid , ret);
        print(pNode->right , i+1 , mid+1 , right , ret);
    }

public:


    std::vector<std::vector<std::string>> printTree(TreeNode* root) {
        int h = height(root);
        std::vector<std::vector<std::string>> ret(static_cast<unsigned long>(h), std::vector<std::string>(
                static_cast<unsigned long>(std::pow(2,h) - 1), ""));

        if(root == nullptr) return ret;

        print(root , 0 , 0 , static_cast<int>(ret[0].size()) , ret);

        return ret;

    }
};

#endif //LEETCODE_PRINTBINARYTREE_H
