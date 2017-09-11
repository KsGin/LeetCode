/*
 * File Name : AverageOfLevelsInBinaryTree
 * Author    : KsGin
 * Date      : 9/11/2017
 */

#ifndef LEETCODE_AVERAGEOFLEVELSINBINARYTREE_H
#define LEETCODE_AVERAGEOFLEVELSINBINARYTREE_H

#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class AverageOfLevelsInBinaryTree {
public:
    void averageRec(std::vector<TreeNode *> nodes, std::vector<double> &ret) {
        if (nodes.size() == 0)
            return;
        double sum = 0;
        int length = nodes.size();
        for (int i = 0; i < length; ++i) {
            sum += nodes[i]->val;
            if (nodes[i]->left) nodes.push_back(nodes[i]->left);
            if (nodes[i]->right) nodes.push_back(nodes[i]->right);
        }
        ret.push_back(sum / length);
        nodes.erase(nodes.begin() , nodes.begin() + length);
        averageRec(nodes , ret);
    }

    std::vector<double> averageOfLevels(TreeNode *root) {
        std::vector<double> ret(0);
        std::vector<TreeNode *> nodes(1, root);
        averageRec(nodes, ret);
        return ret;
    }
};

#endif //LEETCODE_AVERAGEOFLEVELSINBINARYTREE_H
