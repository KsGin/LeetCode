/*
 * File   : SumOfLeftLeaves
 * Author : KsGin 
 * Date   : 2017/11/10
 */

#ifndef LEETCODE_SUMOFLEFTLEAVES_H
#define LEETCODE_SUMOFLEFTLEAVES_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class SumOfLeftLeaves {
private:
    int numberOfLeaves(TreeNode* root , bool isLeft){
        if(root == nullptr) return 0;
        int ll = numberOfLeaves(root->left , true);
        int lr = numberOfLeaves(root->right , false);
        return isLeft && !root->left && !root->right ? root->val + ll + lr : lr + ll;
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return numberOfLeaves(root , false);
    }
};

#endif //LEETCODE_SUMOFLEFTLEAVES_H
