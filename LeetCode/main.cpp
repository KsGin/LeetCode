//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <vector>
#include "GroupAnagrams.hpp"

using namespace std;

int main() {

    vector<string> a {"eat" , "tea" , "tan" , "ate" , "nat" , "bat"};

    GroupAnagrams ga;
    ga.groupAnagrams(a);

    return 0;
}
