/*
 * File   : EmployeeFreeTime
 * Author : KsGin 
 * Date   : 2018/1/19
 */

#ifndef LEETCODE_EMPLOYEEFREETIME_H
#define LEETCODE_EMPLOYEEFREETIME_H

#include <vector>

using namespace std;

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class EmployeeFreeTime {
public:
    vector<Interval> employeeFreeTime(vector<vector<Interval>>& schedule) {
        vector<Interval> allInterval(0);
        for (auto em : schedule){
            for (auto e : em){
                allInterval.push_back(e);
            }
        }

        sort(allInterval.begin(),allInterval.end() ,
             [](Interval a , Interval b)
             {
                 return a.start < b.start;
             });

        vector<Interval> ret(0);
        if(allInterval.empty())
            return ret;
        int end = allInterval[0].end;
        for (auto ins : allInterval){
            if(ins.start <= end) end = max(end , ins.end);
            else {
                ret.emplace_back(end,ins.start);
                end = ins.end;
            }
        }
        return ret;
    }
};

#endif //LEETCODE_EMPLOYEEFREETIME_H

