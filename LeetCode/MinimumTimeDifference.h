/*
 * File   : MinimumTimeDifference
 * Author : KsGin 
 * Date   : 2017/11/30
 */

#ifndef LEETCODE_MINIMUMTIMEDIFFERENCE_H
#define LEETCODE_MINIMUMTIMEDIFFERENCE_H

#include <vector>
#include <string>
#include <sstream>
#include <iostream>

class MinimumTimeDifference {

    int convertTime(std::string time){
        std::stringstream ss;
        bool isFind = false;
        int hours = 0 , minues = 0;
        for (int i = 0; i < time.size(); ++i) {
            if(time[i] == ':'){
                ss >> hours;
                ss.clear();
                isFind = true;
                continue;
            }
            ss << time[i];
        }
        ss >> minues;
        return hours * 60 + minues;
    }

public:
    int findMinDifference(std::vector<std::string>& timePoints) {
        std::vector<int> times(0);
        for (auto& time : timePoints){
            times.push_back(convertTime(time));
        }
        std::sort(times.begin() , times.end());
        int min = times[1] - times[0];
        for (int i = 1; i < times.size()-1; ++i) {
            min = std::min(min , times[i+1] - times[i]);
        }
        return std::min(24*60 - times[times.size()-1] + times[0] , min);
    }
};

#endif //LEETCODE_MINIMUMTIMEDIFFERENCE_H
