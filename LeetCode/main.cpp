//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <zconf.h>
#include "RedundantConnection.h"

using namespace std;

int main() {

    vector<vector<int>> rr{{3,4},{1,2},{2,4},{3,5},{2,5}};

    RedundantConnection rc;
    rc.findRedundantConnection(rr);

    return 0;
}
