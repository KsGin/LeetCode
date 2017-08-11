//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <vector>
#include "RotateImage.hpp"

using namespace std;

int main() {

    vector<vector<int>> img{vector<int>{1,2,3},vector<int>{4,5,6},vector<int>{7,8,9}};

    RotateImage ri;
    ri.rotate(img);

    return 0;
}
