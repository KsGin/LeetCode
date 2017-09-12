/*
 * File Name : FindBottomLeftTreeValue
 * Author    : KsGin
 * Date      : 9/12/2017
 */

#ifndef LEETCODE_FINDBOTTOMLEFTTREEVALUE_H
#define LEETCODE_FINDBOTTOMLEFTTREEVALUE_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class FindBottomLeftTreeValue {
    struct Ret {
        int level = 0;
        int value = 0;
    };
public:
    void find(TreeNode *pNode, int level, Ret &ret) {
        if(level > ret.level) {
            ret.level = level;
            ret.value = pNode->val;
        }
        if (pNode->left) find(pNode->left, level + 1, ret);
        if (pNode->right) find(pNode->right, level + 1, ret);
    }

    int findBottomLeftValue(TreeNode *root) {
        Ret ret;
        find(root, 1, ret);
        return ret.value;
    }
};

#endif //LEETCODE_FINDBOTTOMLEFTTREEVALUE_H
