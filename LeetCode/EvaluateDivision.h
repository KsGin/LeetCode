/*
 * File   : EvaluateDivision
 * Author : KsGin 
 * Date   : 2018/3/21
 */

#ifndef LEETCODE_EVALUATEDIVISION_H
#define LEETCODE_EVALUATEDIVISION_H

#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class EvaluateDivision {
private:
    unordered_map<string, vector<pair<string, double>>> children;                               // adjacency list

    pair<bool, double> search(string& a, string& b, unordered_set<string>& visited, double val) {
        if (visited.count(a) == 0) {
            visited.insert(a);                                                                  // mark a as visited
            for (auto p : children[a]) {
                double temp = val * p.second;                                                   // potential result
                if (p.first == b) { return make_pair(true, temp); }                             // found result

                auto result = search(p.first, b, visited, temp);
                if (result.first) { return result; }
            }
        }
        return make_pair(false, -1.0);
    }

public:
    vector<double> calcEquation(vector<pair<string, string>> equations, vector<double>& values, vector<pair<string, string>> queries) {
        vector<double> ans;

        for (int i = 0; i < equations.size(); i++) {
            children[equations[i].first].push_back(make_pair(equations[i].second, values[i]));      // build graph list a->b
            children[equations[i].second].push_back(make_pair(equations[i].first, 1.0 / values[i]));// build graph list b->a
        }

        for (auto p : queries) {
            unordered_set<string> visited;                                                          // to record visited nodes
            // p.first == p.second is special case
            ans.push_back(p.first == p.second && children.count(p.first) ? 1.0 : search(p.first, p.second, visited, 1.0).second);
        }

        return ans;
    }
};

#endif //LEETCODE_EVALUATEDIVISION_H
