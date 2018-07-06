//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "ScoreAfterFlippingMatrix.h"

using namespace std;

int main() {

    vector<vector<int>> matrix {
        vector<int> {0 , 0 , 1 , 1} ,
        vector<int> {1 , 0 , 1 , 0} ,
        vector<int> {1 , 1 , 0 , 0}
    };

    ScoreAfterFlippingMatrix safm;
    safm.matrixScore(matrix);

    return 0;
}
