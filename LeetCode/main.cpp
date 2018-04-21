//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "MyCalendarOne.h"

using namespace std;

int main() {

    MyCalendar md;
    md.book(20 , 29);
    md.book(13 , 22);
    md.book(44 , 50);
    md.book(1 , 7);
    md.book(2 , 10);
    md.book(14 , 20);
    md.book(19 , 25);
    md.book(3 , 8);
    md.book(8 , 13);

    return 0;
}
