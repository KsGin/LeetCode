/*
 * File   : StudentAttendanceRecordOne
 * Author : KsGin 
 * Date   : 2017/12/24
 */

#ifndef LEETCODE_STUDENTATTENDANCERECORDONE_H
#define LEETCODE_STUDENTATTENDANCERECORDONE_H

#include <string>

using namespace std;

class StudentAttendanceRecordOne {
public:
    bool checkRecord(string s) {
        int aCount = 0 , lCount = 0 , maxLCount = 0;
        for(auto r : s){
            if(r == 'L') ++lCount;
            else {
                if(lCount > maxLCount) maxLCount = lCount;
                lCount = 0;
                if(r == 'A') ++aCount;
            }
            if(aCount > 1 || maxLCount > 2) return false;
        }
        return lCount <= 2;
    }
};

#endif //LEETCODE_STUDENTATTENDANCERECORDONE_H
