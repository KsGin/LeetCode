/*
 * File   : MostFrequentSubtreeSum
 * Author : KsGin 
 * Date   : 2017/10/5
 */

#ifndef LEETCODE_MOSTFREQUENTSUBTREESUM_H
#define LEETCODE_MOSTFREQUENTSUBTREESUM_H


#include <vector>
#include <unordered_map>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    std::vector<int> findFrequentTreeSum(TreeNode* root) {
        std::vector<int> res;
        std::unordered_map<int, int> m;
        int cnt = 0;
        postorder(root, m, cnt, res);
        return res;
    }

private:
    int postorder(TreeNode* node, std::unordered_map<int, int>& m, int& cnt, std::vector<int>& res) {
        if (!node) return 0;
        int left = postorder(node->left, m, cnt, res);
        int right = postorder(node->right, m, cnt, res);
        int sum = left + right + node->val;
        ++m[sum];
        if (m[sum] >= cnt) {
            if (m[sum] > cnt) res.clear();
            res.push_back(sum);
            cnt = m[sum];
        }
        return sum;
    }
};

#endif //LEETCODE_MOSTFREQUENTSUBTREESUM_H
