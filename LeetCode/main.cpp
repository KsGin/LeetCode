//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <zconf.h>
#include "DailyTemperatures.h"

using namespace std;

int main() {

    vector<int> vc{73,74,75,71,69,72,76,73};

    DailyTemperatures dt;
    dt.dailyTemperatures(vc);


    return 0;
}
