//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include "MaximumLengthOfPairChain.h"
#include <iostream>

using namespace std;

int main() {

    std::vector<vector<int>> s {{-6,9},{1,6},{8,10},{-1,4},{-6,-2},{-9,8},{-5,3},{0,3}};

    MaximumLengthOfPairChain mloc;
    mloc.findLongestChain(s);

    return 0;
}
