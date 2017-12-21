/*
 * File   : MinimumNumberOfArrowsToBurstBalloons
 * Author : KsGin 
 * Date   : 2017/12/21
 */

#ifndef LEETCODE_MINIMUMNUMBEROFARROWSTOBURSTBALLOONS_H
#define LEETCODE_MINIMUMNUMBEROFARROWSTOBURSTBALLOONS_H

#include <vector>
using namespace std;
class MinimumNumberOfArrowsToBurstBalloons {
public:
    int findMinArrowShots(vector<pair<int, int>>& points) {
        sort(points.begin(),points.end(),
             [](pair<int , int> a , pair<int , int> b)
             { return a.first > b.first ;});
        int ret = 0;
        int start = 1 , end = 0;
        for (auto point : points){
            if(point.second < start || point.first > end || start > end){
                ret += 1;
                start = point.first;
                end = point.second;
            } else {
                start = max(start , point.first);
                end = min(end , point.second);
            }
        }
        return ret;
    }
};

#endif //LEETCODE_MINIMUMNUMBEROFARROWSTOBURSTBALLOONS_H
