//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "SwimInRisingWater.h"

using namespace std;

int main() {

    vector<vector<int>> water {
            {0 , 2} ,
            {1 , 3}
    };

    SwimInRisingWater sirw;
    sirw.swimInWater(water);

    return 0;
}
