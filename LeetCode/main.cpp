//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include <vector>
#include "LetterCombinations.cpp"

using namespace std;

/*
 *  test
 */

int main(int argc, const char * argv[]) {

    auto re = LetterCombinations::letterCombinations("23");
    cout << re.size() << endl;

    return 0;
}
