//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "TrimABinarySearchTree.h"

using namespace std;

int main() {

    TreeNode *root = new TreeNode(3);

    root->left = new TreeNode(2);
    root->right = new TreeNode(4);

    root->left->left = new TreeNode(1);

    TrimABinarySearchTree tast;
    tast.trimBST(root, 2, 4);


    return 0;
}
