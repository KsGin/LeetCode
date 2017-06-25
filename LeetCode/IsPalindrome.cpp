//
//  IsPalindrome.cpp
//  LeetCode
//  Determine whether an integer is a palindrome. Do this without extra space.
//  Created by ksgin on 2017/6/24.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <sstream>
#include <string>

using namespace std;
class IsPalindrome {
public:
    static bool isPalindrome(int x) {
        stringstream ss;
        ss << x;
        string s = ss.str();

        for (int i = 0 , j = static_cast<int>(s.length() - 1); i < j ; ++i , --j ) {
            if (s.at(i) != s.at(j)) {
                return false;
            }
        }

        return true;
        
    }
};
