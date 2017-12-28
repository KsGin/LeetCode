/*
 * File   : HouseRobberThree
 * Author : KsGin 
 * Date   : 2017/12/27
 */

#ifndef LEETCODE_HOUSEROBBERTHREE_H
#define LEETCODE_HOUSEROBBERTHREE_H

#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class HouseRobberThree {
public:
    int rob(TreeNode* root) {
        int l = 0, r = 0;
        return helper(root, l, r);
    }
private:
    int helper(TreeNode* node, int& l, int& r) {
        if (!node) return 0;
        int ll = 0, lr = 0, rl = 0, rr = 0;
        l = helper(node->left, ll, lr);
        r = helper(node->right, rl, rr);
        return max(node->val + ll + lr + rl + rr, l + r);
    }
};

#endif //LEETCODE_HOUSEROBBERTHREE_H
