//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "InsertInterval.h"

using namespace std;

int main() {
    vector<Interval> vc{Interval(1, 5)};
    Interval a(0 , 3);

    InsertInterval it;
    it.insert(vc , a);

    return 0;
}
