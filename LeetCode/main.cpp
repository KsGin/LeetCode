//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include "ReplaceWords.h"
#include <iostream>

using namespace std;

int main() {

    ReplaceWords rw;
    auto a = vector<string>{"cat" , "bat" , "rat"};
    rw.replaceWords( a, "the cattle was rattled by the battery");

    return 0;
}
