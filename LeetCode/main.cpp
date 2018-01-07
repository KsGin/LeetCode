//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <zconf.h>
#include "LongestWordInDictionaryThroughDeleting.h"

using namespace std;

int main() {

    std::vector<std::string> a{"ale","apple","monkey","plea"};

    LongestWordInDictionaryThroughDeleting lwdtd;
    lwdtd.findLongestWord("abpcplea", a);

    return 0;
}
