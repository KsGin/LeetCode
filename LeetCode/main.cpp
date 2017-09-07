//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "ReshapeTheMatrix.h"

using namespace std;

int main() {

    ReshapeTheMatrix rtm;

    vector<vector<int>>  vv{ {1,2 } , {3,4}};

    rtm.matrixReshape(vv , 1 , 4);

    return 0;
}
