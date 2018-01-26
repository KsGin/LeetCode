//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <zconf.h>
#include "Subsets.h"

using namespace std;

int main() {

    vector<int> set{1, 2, 3};

    Subsets ss;
    ss.subsets(set);

    return 0;
}
