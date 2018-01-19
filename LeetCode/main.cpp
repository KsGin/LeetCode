//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <zconf.h>
#include "EmployeeFreeTime.h"

using namespace std;

int main() {

    EmployeeFreeTime eft;
    vector<vector<Interval>> schedule {
            vector<Interval>{
                    Interval(1,2),
                    Interval(5,6)
            },
            vector<Interval>{
                    Interval(1,3)
            },
            vector<Interval>{
                    Interval(4,10)
            }
    };
    eft.employeeFreeTime(schedule);


    return 0;
}
