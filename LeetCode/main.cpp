//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "SpiralMatrix.h"

using namespace std;

int main() {

    vector<vector<int>> v(0);
    v.push_back(vector<int> { 1 , 2 , 3});

    SpiralMatrix sm;
    sm.spiralOrder(v);

    return 0;
}
