//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <vector>
#include "NextPermutation.cpp"

using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> v = {1, 2};

    NextPermutation np;
    np.nextPermutation(v);

    return 0;
}
