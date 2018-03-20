/*
 * File   : TaskScheduler
 * Author : imqqy
 * Date   : 2018/3/20
 */

#ifndef LEETCODE_TASKSCHEDULER_H
#define LEETCODE_TASKSCHEDULER_H

#include <vector>
#include <algorithm>

using namespace std;

class TaskScheduler {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> taskTimes(26);
        for (const auto& task : tasks) {
            ++taskTimes[task - 'A'];
        }
        sort(taskTimes.begin() , taskTimes.end() , [](int a , int b){return a > b;});
        int most = 1;
        for (auto i = 1 ; i < taskTimes.size() ; ++i){
            if (taskTimes[i] < taskTimes[i-1]) break;
            ++most;
        }
        return max((taskTimes[0]-1) * (n+1) + most , (int)tasks.size());
    }
};

#endif //LEETCODE_TASKSCHEDULER_H
