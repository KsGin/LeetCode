/*
 * File   : InsertInterval
 * Author : KsGin 
 * Date   : 2018/4/8
 */

#ifndef LEETCODE_INSERTINTERVAL_H
#define LEETCODE_INSERTINTERVAL_H

#include <vector>

using namespace std;

struct Interval {
    int start;
    int end;

    Interval() : start(0), end(0) {}

    Interval(int s, int e) : start(s), end(e) {}
};

class InsertInterval {
public:
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        // 原数组为空
        if (intervals.empty()) {
            return vector<Interval>{newInterval};
        }
        // 新的区间在最前
        if (newInterval.end < intervals.front().start) {
            vector<Interval> ret = intervals;
            ret.insert(ret.begin(), newInterval);
            return ret;
        }
        // 在最后
        if (newInterval.start > intervals.back().end) {
            vector<Interval> ret = intervals;
            ret.push_back(newInterval);
            return ret;
        }
        int start = 0, end = 0;
        vector<Interval> ret(0);
        bool f = false;
        for (int i = 0; i < intervals.size(); ++i) {
            if (!f && intervals[i].end >= newInterval.start) {
                start = min(intervals[i].start, newInterval.start);
                for (int j = i; j < intervals.size(); ++j) {
                    if (intervals[j].start > newInterval.end) break;
                    ++i;
                }
                end = max(intervals[--i].end, newInterval.end);
                ret.emplace_back(start, end);
                f = true;
            } else {
                ret.push_back(intervals[i]);
            }
        }
        return ret;
    }
};

#endif //LEETCODE_INSERTINTERVAL_H
