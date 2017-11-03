//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include "TopKFrequentElements.h"
#include <iostream>

using namespace std;

int main() {

    std::vector<int> a {1 , 1  , 2 , 2 ,2 , 2 ,7  ,3 , 5};

    TopKFrequentElements tk;
    tk.topKFrequent(a , 2);

    return 0;
}
