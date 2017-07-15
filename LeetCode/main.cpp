//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include "../LongestValidParentheses.hpp"
#include <iostream>

using namespace std;

int main() {

	LongestValidParentheses lvp;

	auto length = lvp.longestValidParentheses("(()(((()");

	cout << length << endl;

	system("pause");
    return 0;
}
