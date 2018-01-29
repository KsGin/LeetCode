/*
 * File   : SlidingPuzzle
 * Author : KsGin 
 * Date   : 2018/1/29
 */

#ifndef LEETCODE_SLIDINGPUZZLE_H
#define LEETCODE_SLIDINGPUZZLE_H

#include <vector>
#include <unordered_map>

using namespace std;

class SlidingPuzzle {

    void helper(unordered_map<string,int>& um , string state , int step){
        if(um.count(state) == 1) um[state] = min(step , um[state]);
        else um[state] = step;

        int idx = static_cast<int>(state.find_first_of('0'));
        if(idx < 3){
            swap(state[idx] , state[idx+3]);
            if(!um.count(state) || um[state] > step)
                helper(um , state , step+1);
            swap(state[idx] , state[idx+3]);
        }
        if(idx >= 3){
            swap(state[idx] , state[idx-3]);
            if(!um.count(state) || um[state] > step)
                helper(um , state , step+1);
            swap(state[idx] , state[idx-3]);
        }
        if(idx != 2 && idx != 5){
            swap(state[idx] , state[idx+1]);
            if(!um.count(state) || um[state] > step)
                helper(um , state , step+1);
            swap(state[idx] , state[idx+1]);
        }
        if(idx != 0 && idx != 3){
            swap(state[idx] , state[idx-1]);
            if(!um.count(state) || um[state] > step)
                helper(um , state , step+1);
            swap(state[idx] , state[idx-1]);
        }
    }

public:
    int slidingPuzzle(vector<vector<int>>& board) {
        string start = "";
        for (auto i : board){
            for (auto j : i) start.push_back(static_cast<char>(j + '0'));
        }
        string end = "123450";
        unordered_map<string , int> um;
        helper(um , end , 0);
        for (auto r : um){
            cout << r.first + " : " << r.second << endl;
        }
        if(um.count(start) == 1) return um[start];
        return -1;
    }

};

#endif //LEETCODE_SLIDINGPUZZLE_H
