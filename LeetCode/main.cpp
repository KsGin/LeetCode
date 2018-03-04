//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "RabbitsInForest.h"

using namespace std;

int main() {

    vector<int> answers{1,0,1,0,0};


    RabbitsInForest rof;
    rof.numRabbits(answers);

    return 0;
}
