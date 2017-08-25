//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "EncodeAndDecodeTinyURL.hpp"

using namespace std;

int main() {

    EncodeAndDecodeTinyURL edt;

    string s = edt.encode("http://sss.com");
    string t = edt.decode(s);

    cout << s << endl << t << endl;
    return 0;
}
