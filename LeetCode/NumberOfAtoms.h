/*
 * File   : NumberOfAtoms
 * Author : KsGin 
 * Date   : 2017/12/9
 */

#ifndef LEETCODE_NUMBEROFATOMS_H
#define LEETCODE_NUMBEROFATOMS_H

#include <vector>
#include <string>
#include <map>

using namespace std;

class NumberOfAtoms {
public:
    string countOfAtoms(const string& formula) {
        int i = 0;
        string ans;
        for (const auto& kv : countOfAtoms(formula, i)) {
            ans += kv.first;
            if (kv.second > 1) ans += std::to_string(kv.second);
        }
        return ans;
    }
private:
    map<string, int> countOfAtoms(const string& formula, int& i) {
        map<string, int> counts;
        while (i != formula.length()) {
            if (formula[i] == '(') {
                const auto& tmp_counts = countOfAtoms(formula, ++i);
                const int count = getCount(formula, i);
                for (const auto& kv : tmp_counts)
                    counts[kv.first] += kv.second * count;
            } else if (formula[i] == ')') {
                ++i;
                return counts;
            } else {
                const string& name = getName(formula, i);
                counts[name] += getCount(formula, i);
            }
        }
        return counts;
    }

    string getName(const string& formula, int& i) {
        string name;
        while (isalpha(formula[i])
               && (name.empty() || islower(formula[i]))) name += formula[i++];
        return name;
    }

    int getCount(const string& formula, int& i) {
        string count_str;
        while (isdigit(formula[i])) count_str += formula[i++];
        return count_str.empty() ? 1 : std::stoi(count_str);
    }
};

#endif //LEETCODE_NUMBEROFATOMS_H
