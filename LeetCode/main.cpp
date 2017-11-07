//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include "CopyListWithRandomPointer.h"
#include <iostream>

using namespace std;

int main() {

    RandomListNode* r = new RandomListNode(-1);


    CopyListWithRandomPointer cr;
    cr.copyRandomList(r);

    return 0;
}
