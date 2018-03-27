/*
 * File   : BinaryTreeLevelOrderTraversalTwo
 * Author : KsGin 
 * Date   : 2018/3/27
 */

#ifndef LEETCODE_BINARYTREELEVELORDERTRAVERSALTWO_H
#define LEETCODE_BINARYTREELEVELORDERTRAVERSALTWO_H

#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BinaryTreeLevelOrderTraversalTwo {
public:
    vector<vector<int>> levelOrderBottom(TreeNode *root) {
        vector<vector<int>> res(0);
        if (!root) return res;
        res.insert(res.begin(), vector<int>(0));
        queue<TreeNode *> q;
        q.push(root);
        q.push(nullptr);
        while (q.size() > 1) {
            auto p = q.front();
            q.pop();
            if (!p) {
                res.insert(res.begin(), vector<int>(0));
                q.push(nullptr);
            } else {
                if (p->left) q.push(p->left);
                if (p->right) q.push(p->right);
                res[0].push_back(p->val);
            }
        }
        return res;
    }
};

#endif //LEETCODE_BINARYTREELEVELORDERTRAVERSALTWO_H
