#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;
using std::sort;

class GroupAnagrams {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        vector<vector<string>> ret(0);
        if (strs.size() == 0) return ret;
        vector<string> sortedlist = fuck(strs);
        vector<string> tmp{sortedlist[0]};
        ret.push_back(vector<string>{strs[0]});
        bool issuc;
        for (int i = 1; i < strs.size(); ++i) {
            issuc = false;
            for (int j = 0; j < ret.size(); ++j) {
                if (shit(tmp[j], sortedlist[i])) {
                    ret[j].push_back(strs[i]);
                    issuc = true;
                    break;
                }
            }
            if(!issuc){
                ret.push_back(vector<string>{strs[i]});
                tmp.push_back(sortedlist[i]);
            }
        }


        for (auto itb = ret.begin(); itb != ret.end(); ++itb) {
            sort((*itb).begin(), (*itb).end());
        }
        return ret;
    }

private:
    vector<string> fuck(vector<string> strs) {
        vector<string> ret(strs.begin(), strs.end());
        for (auto it = ret.begin(); it != ret.end(); ++it) {
            sort((*it).begin(), (*it).end());
        }
        return ret;
    }

    bool shit(string a, string b) {
        if (a.size() != b.size()) return false;
        for (auto ita = a.begin(), itb = b.begin(); ita != a.end() && itb != b.end(); ++ita, ++itb) {
            if (*ita != *itb) return false;
        }
        return true;
    }
};