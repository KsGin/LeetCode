//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "BinaryTreePostOrderTraversal.h"

using namespace std;

int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    BinaryTreePostOrderTraversal btp;
    btp.postorderTraversal(root);

    return 0;
}
