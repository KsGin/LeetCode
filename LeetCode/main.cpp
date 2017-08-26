//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "MaximumBinaryTree.hpp"

using namespace std;

int main() {

    MaximumBinaryTree mbt;

    vector<int> v {3, 2 , 1 , 6 , 0 , 5};

    mbt.constructMaximumBinaryTree(v);
    return 0;
}
