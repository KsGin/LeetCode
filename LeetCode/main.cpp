//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "BaseballGame.h"

using namespace std;

int main() {

//    TreeNode* root = new TreeNode(1);
//    root->left = new TreeNode(3);
//    root->right = new TreeNode(2);
//    root->left->left = new TreeNode(5);
//    root->left->right = new TreeNode(9);
//    root->right->right = new TreeNode(3);
//
//    FindLargestValueInEachTreeRow findLargestValueInEachTreeRow;
//    findLargestValueInEachTreeRow.largestValues(root);

    BaseballGame bl;
    bl.calPoints(std::vector<std::string>{"5","-2","4","C","D","9","+","+"});

    return 0;
}
