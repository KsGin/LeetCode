/*
 * File   : ConstructStringFromBinaryTree
 * Author : KsGin 
 * Date   : 23/10/2017
 */

#ifndef LEETCODE_CONSTRUCTSTRINGFROMBINARYTREE_H
#define LEETCODE_CONSTRUCTSTRINGFROMBINARYTREE_H

#include <string>
#include <sstream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
    void create_str(TreeNode *pNode, std::stringstream &stringstream) {
        if(pNode == nullptr) return;
        if(pNode->left == nullptr && pNode->right == nullptr) {
            stringstream << pNode->val;
            return;
        }

        stringstream << pNode->val;
        stringstream << '(';
        create_str(pNode->left , stringstream);
        stringstream << ')';
        if(pNode->right != nullptr){
            stringstream << '(';
            create_str(pNode->right , stringstream);
            stringstream << ')';
        }
    }
public:


    std::string tree2str(TreeNode* t) {
        std::stringstream ss;
        create_str(t , ss);
        return ss.str();
    }
};

#endif //LEETCODE_CONSTRUCTSTRINGFROMBINARYTREE_H
