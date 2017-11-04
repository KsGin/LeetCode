/*
 *  Name    : ExcelSheetColumnTitle
 *  Author  : ksgin
 *  Date    : 11/4/17
 */
#ifndef LEETCODE_EXCELSHEETCOLUMNTITLE_H
#define LEETCODE_EXCELSHEETCOLUMNTITLE_H

#include <string>
#include <cmath>

class ExcelSheetColumnTitle {
public:
    std::string convertToTitle(int n) {
        std::string ret;
        while(n > 26){
            int cut = n % 26;
            if(cut > 0){
                ret.insert( ret.begin() , static_cast<char>(cut - 1 + 'A'));
                n = n / 26;
            } else {
                ret.insert( ret.begin() , 'Z');
                n = n / 26 - 1;
            }
        }
        if(n > 0) ret.insert( ret.begin() , static_cast<char>(n - 1 + 'A'));
        return ret;
    }
};

#endif //LEETCODE_EXCELSHEETCOLUMNTITLE_H
