//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "CouplesHoldingHands.h"

using namespace std;

int main() {

    vector<int> vcc{6, 2, 1, 7, 4, 5, 3, 8, 0, 9};
    CouplesHoldingHands chh;
    chh.minSwapsCouples(vcc);

    return 0;
}
