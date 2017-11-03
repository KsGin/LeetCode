//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include "DegreeOfAnArray.h"
#include <iostream>

using namespace std;

int main() {

    std::vector<int> a {1 , 2 , 2 , 3  , 1 , 4 , 2};

    DegreeOfAnArray doa;
    doa.findShortestSubArray(a);

    return 0;
}
