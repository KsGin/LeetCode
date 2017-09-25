/*
 * File Name:FindLargestValueInEachTreeRow
 * Author   :ksgin
 * Date     :25/09/2017
 */

#ifndef LEETCODE_FINDLARGESTVALUEINEACHTREEROW_H_H
#define LEETCODE_FINDLARGESTVALUEINEACHTREEROW_H_H

#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class FindLargestValueInEachTreeRow {
public:
    std::vector<int> largestValues(TreeNode* root) {
        std::vector<int> ret(0);
        if (root == nullptr)
            return ret;
        std::vector<TreeNode*> vc(0);
        vc.push_back(root);
        vc.push_back(nullptr);
        int idx = 0;
        int max = root->val;
        for( ; idx < vc.size() ; ++idx) {
            if (vc[idx] == nullptr){
                ret.push_back(max);
                max = INT32_MIN;
                if (idx != vc.size()-1)
                    vc.push_back(nullptr);
            }else{
                if (vc[idx]->val > max){
                    max = vc[idx]->val;
                }
                if (vc[idx]->left){
                    vc.push_back(vc[idx]->left);
                }
                if (vc[idx]->right){
                    vc.push_back(vc[idx]->right);
                }
            }
        }
        return ret;
    }
};

#endif //LEETCODE_FINDLARGESTVALUEINEACHTREEROW_H_H
