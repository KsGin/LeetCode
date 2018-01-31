//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <zconf.h>
#include "BurstBalloons.h"

using namespace std;

int main() {

    vector<int> nums{3, 1, 5, 8};

    BurstBalloons bb;
    bb.maxCoins(nums);

    return 0;
}
