//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <zconf.h>
#include "PyramidTransitionMatrix.h"

using namespace std;

int main() {

    vector<string> allowed{"CDD","CBC","ACA","BDD","ADD","DCA","BAD","ADA"};

    PyramidTransitionMatrix pytm;
    pytm.pyramidTransition("CB" , allowed);

    return 0;
}
