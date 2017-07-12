//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "ImplementStrStr.cpp"


using namespace std;

int main(int argc, const char * argv[]) {

    ImplementStrStr s;
    auto i = s.strStr("mississippi", "issip");
    cout << i << endl;
    return 0;
}
