//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <zconf.h>
#include "TargetSum.h"

using namespace std;

int main() {

    vector<int> rs{1,1,1,1,1};

    TargetSum ts;
    int ret = ts.findTargetSumWays(rs,3);


    return 0;
}
