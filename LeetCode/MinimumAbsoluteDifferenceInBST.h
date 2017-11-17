/*
 * File   : MinimumAbsoluteDifferenceInBST
 * Author : KsGin 
 * Date   : 2017/11/17
 */

#ifndef LEETCODE_MINIMUMABSOLUTEDIFFERENCEINBST_H
#define LEETCODE_MINIMUMABSOLUTEDIFFERENCEINBST_H


#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
    void appendNodesValue(TreeNode* root , std::vector<int> & nodesValue){
        if(!root) return;
        nodesValue.push_back(root->val);
        appendNodesValue(root->left,nodesValue);
        appendNodesValue(root->right,nodesValue);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        std::vector<int> nodesValue(0);
        appendNodesValue(root,nodesValue);
        if(nodesValue.size() < 2)
            return 0;
        std::sort(nodesValue.begin(),nodesValue.end());
        int min = nodesValue[1] - nodesValue[0];
        for (int i = 1; i < nodesValue.size()-1; ++i) {
            if(nodesValue[i+1] - nodesValue[i] < min){
                min = nodesValue[i+1] - nodesValue[i];
            }
        }
        return min;
    }
};

#endif //LEETCODE_MINIMUMABSOLUTEDIFFERENCEINBST_H
