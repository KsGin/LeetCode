/*
 * File   : SlidingPuzzle
 * Author : KsGin 
 * Date   : 2018/1/29
 */

#ifndef LEETCODE_SLIDINGPUZZLE_H
#define LEETCODE_SLIDINGPUZZLE_H

#include <vector>
#include <string>
#include <unordered_set>
#include <queue>

using namespace std;

class SlidingPuzzle {

    string toString(vector<vector<int>>& board){
        string res;
        for(int i=0; i<board.size(); ++i)
            for(int j=0; j<board[i].size(); ++j){
                res.push_back(static_cast<char>(board[i][j] + '0'));
            }
        return res;
    }

    vector<string> nextState(string s){

        vector<string> res;
        int i = static_cast<int>(s.find_first_of('0'));
        // up
        if(i >=3){
            string tmp = s;
            swap(tmp[i],tmp[i-3]);
            res.push_back(tmp);
        }
        //down
        if(i<3){
            string tmp = s;
            swap(tmp[i],tmp[i+3]);
            res.push_back(tmp);
        }

        // left
        if(i==1 || i==2 || i ==4 || i==5){
            string tmp = s;
            swap(tmp[i],tmp[i-1]);
            res.push_back(tmp);
        }

        // right;
        if(i==0 || i== 1||i==3||i==4){
            string tmp = s;
            swap(tmp[i],tmp[i+1]);
            res.push_back(tmp);
        }
        return res;
    }

public:
    int slidingPuzzle(vector<vector<int>> board) {
        unordered_set<string> visited;

        string init = toString(board);
        string end ="123450";
        int step = 0;

        queue<string> q;
        q.push(init);
        visited.insert(init);

        while(!q.empty()){
            int size = static_cast<int>(q.size());
            for(int i=0; i<size; ++i){
                string tmpState = q.front();
                q.pop();
                if(tmpState == end){
                    return step;
                }
                vector<string> nexts = nextState(tmpState);
                for(string s: nexts){
                    if(visited.count(s)==0){
                        q.push(s);
                        visited.insert(s);
                    }

                }


            }
            step += 1;

        }
        return -1;

    }
};

#endif //LEETCODE_SLIDINGPUZZLE_H
