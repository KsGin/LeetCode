//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "FloodFill.h"

using namespace std;

int main() {

    std::vector<std::vector<int>> image { {1,1,1} , {1,1,0} ,{1,0,1} };
    FloodFill ff;
    ff.floodFill(image , 1 , 1 , 2);

    return 0;
}
