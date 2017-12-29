//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <zconf.h>
#include "RandomPickIndex.h"

using namespace std;

int main() {

    vector<int> v{1,2,3,3,3};

    RandomPickIndex rpi(v);
    rpi.pick(3);


    return 0;
}
