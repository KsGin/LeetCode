/*
 * File Name : TwoSumFour
 * Author    : KsGin
 * Date      : 2017/10/19
 */

#ifndef LEETCODE_TWOSUMFOUR_H
#define LEETCODE_TWOSUMFOUR_H

#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class TwoSumFour {
private:
    void get_elem(TreeNode* root , std::vector<int> &vec){
        if(root == nullptr) return;
        vec.push_back(root->val);
        get_elem(root->left , vec);
        get_elem(root->right , vec);
    }
public:
    bool findTarget(TreeNode* root, int k) {

        std::vector<int> vc(0);
        get_elem(root , vc);

        for (int i = 0; i < vc.size() - 1 ; ++i) {
            int tar = k - vc[i];
             for (int j = i+1; j < vc.size(); ++j) {
                 if (tar == vc[j]) return true;
            }
        }

        return false;
    }
};

#endif //LEETCODE_TWOSUMFOUR_H
