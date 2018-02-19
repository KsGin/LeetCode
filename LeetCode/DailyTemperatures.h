/*
 * File   : DailyTemperatures
 * Author : KsGin 
 * Date   : 2018/2/17
 */

#ifndef LEETCODE_DAILYTEMPERATURES_H
#define LEETCODE_DAILYTEMPERATURES_H

#include <vector>
#include <stack>

using namespace std;

class DailyTemperatures {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n, 0);
        stack<int> st;
        for (int i = 0; i < temperatures.size(); ++i) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                auto t = st.top(); st.pop();
                res[t] = i - t;
            }
            st.push(i);
        }
        return res;
    }
};

#endif //LEETCODE_DAILYTEMPERATURES_H
