//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include "BinaryTreeTilt.h"
#include <iostream>

using namespace std;

int main() {

    TreeNode * root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = nullptr;
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    BinaryTreeTilt btt;

    btt.findTilt(root);

    return 0;
}
