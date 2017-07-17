//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "SearchInRotatedSortedArray.hpp"

using namespace std;

int main() {

	SearchInRotatedSortedArray srsa;

	vector<int> v = { 3 , 1 };

	auto idx = srsa.search(v , 1);

	cout << idx << endl;

	system("pause");
    return 0;
}
