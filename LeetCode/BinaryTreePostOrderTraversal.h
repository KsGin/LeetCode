/*
 * File   : BinaryTreePostOrderTraversal
 * Author : KsGin 
 * Date   : 2018/3/29
 */

#ifndef LEETCODE_BINARYTREEPOSTORDERTRAVERSAL_H
#define LEETCODE_BINARYTREEPOSTORDERTRAVERSAL_H

#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BinaryTreePostOrderTraversal {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        TreeNode *p = root , *tmp = nullptr;
        vector<int> res(0);
        while (p || !s.empty()){
            while (p) {s.push(p); p = p->left;}
            if (!s.empty()){
                p = s.top();
                if (!p->right || p->right == tmp){
                    s.pop();
                    tmp = p;
                    res.push_back(p->val);
                    p = 0;
                } else {
                    p = p->right;
                }
            }
        }
        return res;
    }
};

#endif //LEETCODE_BINARYTREEPOSTORDERTRAVERSAL_H
