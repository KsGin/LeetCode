//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include "MinimumTimeDifference.h"
#include <iostream>

using namespace std;

int main() {

    std::vector<std::string> times {"10:10" , "01:13" , "2:10"};

    MinimumTimeDifference mtd;
    mtd.findMinDifference(times);

    return 0;
}
