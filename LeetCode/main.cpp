//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <zconf.h>
#include "ConvertSortedArrayToBinarySearchTree.h"

using namespace std;

int main() {

    vector<int> nums{-10,-3,0,5,9};

    ConvertSortedArrayToBinarySearchTree vsatbst;
    vsatbst.sortedArrayToBST(nums);

    return 0;
}
