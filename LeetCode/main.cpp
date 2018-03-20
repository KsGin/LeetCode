//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "TaskScheduler.h"

using namespace std;

int main() {

    vector<char> dst{'A','A','A' , 'A','B','B','B','B' ,'B' , 'B' , 'B' , 'C' , 'C' , 'C'};

    TaskScheduler tsd;
    tsd.leastInterval(dst , 2);
    return 0;
}
