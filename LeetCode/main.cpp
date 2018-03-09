//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "EscapeTheGhosts.h"

using namespace std;

int main() {

    vector<vector<int>> ghosts{{2, 0}};
    vector<int> target{1,0};


    EscapeTheGhosts etg;

    etg.escapeGhosts(ghosts , target);

    return 0;
}
