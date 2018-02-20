//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <zconf.h>
#include "MyCalendarThree.h"

using namespace std;

int main() {

    MyCalendarThree mct = MyCalendarThree();
    cout << mct.book(47, 50) << " ";
    cout << mct.book(1, 10) << " ";
    cout << mct.book(27, 36) << " "; // returns 2
    cout << mct.book(40, 47) << " "; // returns 3
    cout << mct.book(20, 27) << " "; // returns 3
    cout << mct.book(15, 23) << " ";
    cout << mct.book(10, 18) << " ";
    cout << mct.book(27, 36) << " ";
    cout << mct.book(17, 25) << " ";
    cout << mct.book(8, 17) << " ";
    cout << mct.book(24, 33) << " ";
    cout << mct.book(23, 28) << " ";
    cout << mct.book(21, 27) << " ";

    return 0;
}
