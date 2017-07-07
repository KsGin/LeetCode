//
// Created by ksgin on 2017/7/7.
//

#include <vector>
#include <string>

using namespace std;

class GenerateParenthesis {
public:
    static vector<string> generateParenthesis(int n) {
        vector<string> res;
        generateParenthesisDFS(n, n, "", res);
        return res;
    }

    static void generateParenthesisDFS(int left, int right, string out, vector<string> &res) {
        if (left > right) return;
        if (left == 0 && right == 0) res.push_back(out);
        else {
            if (left > 0) generateParenthesisDFS(left - 1, right, out + '(', res);
            if (right > 0) generateParenthesisDFS(left, right - 1, out + ')', res);
        }
    }
};