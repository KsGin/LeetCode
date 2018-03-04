/*
 * File   : RabbitsOnForest
 * Author : KsGin 
 * Date   : 2018/3/4
 */

#ifndef LEETCODE_RABBITSONFOREST_H
#define LEETCODE_RABBITSONFOREST_H

#include <vector>
#include <unordered_map>

using namespace std;

class RabbitsOnForest {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int , int> rabbitsNumber;
        for (auto answer : answers) rabbitsNumber[answer]++;
        int ret = answers.size();
        for (auto &answer : rabbitsNumber){
            while (answer.second > answer.first + 1)
                answer.second -= answer.first + 1;
            ret += answer.first - answer.second + 1;
        }
        return ret;
    }
};

#endif //LEETCODE_RABBITSONFOREST_H
