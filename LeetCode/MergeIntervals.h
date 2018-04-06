/*
 * File   : MergeIntervals
 * Author : KsGin 
 * Date   : 2018/4/6
 */

#ifndef LEETCODE_MERGEINTERVAL_H
#define LEETCODE_MERGEINTERVAL_H

#include <vector>

using namespace std;

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class MergeIntervals {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        if (intervals.size() <= 1) return intervals;
        sort(intervals.begin() , intervals.end() , [](Interval &a , Interval &b){
            return a.start < b.start;
        });
        vector<Interval> ret(0);
        ret.push_back(intervals[0]);
        for (auto &interval : intervals){
            if (interval.start > ret.back().end) ret.push_back(interval);
            else ret.back().end = max(ret.back().end , interval.end);
        }
        return ret;
    }
};

#endif //LEETCODE_MERGEINTERVAL_H
