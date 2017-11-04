/*
 *  Name    : ExcelSheetColumnNumber
 *  Author  : ksgin
 *  Date    : 11/4/17
 */
#ifndef LEETCODE_EXCELSHEETCOLUMNNUMBER_H
#define LEETCODE_EXCELSHEETCOLUMNNUMBER_H

#include <string>
#include <cmath>

class Solution {
public:
    int titleToNumber(std::string s) {
        if(s.empty()) return 0;
        int ret = 0;
        for (int i = static_cast<int>(s.size()); i > 0; --i) {
            ret += pow(26 , s.size() - i)*(s[i-1] - 'A' + 1);
        }
        return ret;
    }
};

#endif //LEETCODE_EXCELSHEETCOLUMNNUMBER_H
