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
    vector<int> storeySum(TreeNode *root) {
        vector<int> ret(1,0);
        queue<TreeNode *> q;
        q.push(root);
        q.push(nullptr);
        while (!q.empty()) {
            if (q.front() == nullptr) {
                q.pop();
                if (q.empty())
                    return ret;
                ret.push_back(0);
                q.push(nullptr);
            } else {
                TreeNode *tmp = q.front();
                q.pop();
                ret[ret.size() - 1] += tmp->val;
                if (tmp->left) q.push(tmp->left);
                if (tmp->right) q.push(tmp->right);
            }
        }
        return ret;
    }

public:
    int rob(TreeNode *root) {
        if (!root) return 0;
        vector<int> res = storeySum(root);
        int oddSum = 0;
        int evenSum = 0;
        for (int i = 0; i < res.size(); ++i) {
            if (i % 2 == 0) evenSum += res[i];
            else oddSum += res[i];
        }
        return max(oddSum, evenSum);
    }
};

#endif //LEETCODE_HOUSEROBBERTHREE_H
