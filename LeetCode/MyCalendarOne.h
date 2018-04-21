/*
 * File   : MyCalendarOne
 * Author : KsGin 
 * Date   : 2018/4/21
 */

#ifndef LEETCODE_MYCALENDARONE_H
#define LEETCODE_MYCALENDARONE_H

#include <vector>

using namespace std;

class MyCalendar {

    struct Interval {
        int start;
        int end;
        Interval(int s , int e) : start(s) , end(e){}
    };

    vector<Interval> intervals;

public:
    MyCalendar() {

    }

    bool book(int start, int end) {
        if (intervals.empty() || end <= intervals.front().start) {
            intervals.insert(intervals.begin() , Interval(start , end));
            return true;
        }
        for (auto it = intervals.begin(); it != intervals.end() - 1; ++it) {
            if (start >= (*it).end && end <= (*(it+1)).start) {
                intervals.insert(it + 1 , Interval(start , end));
                return true;
            }
        }
        if (intervals.back().end <= start){
            intervals.insert(intervals.end() , Interval(start , end));
            return true;
        }
        return false;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar obj = new MyCalendar();
 * bool param_1 = obj.book(start,end);
 */

#endif //LEETCODE_MYCALENDARONE_H
