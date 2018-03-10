//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "ParseLispExpression.h"

using namespace std;

int main() {

    ParseLispExpression ple;
    ple.evaluate("(let var 78 b 77 (let c 33 (add c (mult var 66))))");

    return 0;
}
