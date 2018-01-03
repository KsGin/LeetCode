/*
 * File   : ExclusiveTimeOfFunctions
 * Author : KsGin 
 * Date   : 2018/1/3
 */

#ifndef LEETCODE_EXCLUSIVETIMEOFFUNCTIONS_H
#define LEETCODE_EXCLUSIVETIMEOFFUNCTIONS_H

#include <string>
#include <vector>
#include <stack>

using namespace std;

class ExclusiveTimeOfFunctions {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> res(n, 0);
        stack<int> st;
        int preTime = 0, idx = 0, time = 0;
        char type[10];
        for (string log : logs) {
            sscanf(log.c_str(), "%d:%[^:]:%d", &idx, type, &time);
            if (type[0] == 's') {
                if (!st.empty()) {
                    res[st.top()] += time - preTime;
                }
                st.push(idx);
            } else {
                res[st.top()] += ++time - preTime;
                st.pop();
            }
            preTime = time;
        }
        return res;
    }
};


#endif //LEETCODE_EXCLUSIVETIMEOFFUNCTIONS_H
