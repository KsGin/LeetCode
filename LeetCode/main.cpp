//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <zconf.h>
#include "SlidingPuzzle.h"

using namespace std;

int main() {


    SlidingPuzzle sp;
    vector<vector<int>> vc{{1,2,3},{4,0,5}};
    sp.slidingPuzzle(vc);
    return 0;
}
