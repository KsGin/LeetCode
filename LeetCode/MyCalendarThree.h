/*
 * File   : MyCalendarThree
 * Author : KsGin 
 * Date   : 2018/2/20
 */

#ifndef LEETCODE_MYCALENDARTHREE_H
#define LEETCODE_MYCALENDARTHREE_H

#include <vector>
#include <map>

using namespace std;

class MyCalendarThree {
private:
    map<int, int> freq;
public:
    MyCalendarThree() {}

    int book(int start, int end) {
        ++freq[start];
        --freq[end];
        int cnt = 0, mx = 0;
        for (auto f : freq) {
            cnt += f.second;
            mx = max(mx, cnt);
        }
        return mx;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree obj = new MyCalendarThree();
 * int param_1 = obj.book(start,end);
 */


#endif //LEETCODE_MYCALENDARTHREE_H
