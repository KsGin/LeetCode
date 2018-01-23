//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <zconf.h>
#include "MaxChunksToMakeSorted.h"

using namespace std;

int main() {

    vector<int> s{2,0,1};

    MaxChunksToMakeSorted mcts;
    mcts.maxChunksToSorted(s);

    return 0;
}
