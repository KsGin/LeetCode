/*
 * File   : FindAnagramMappings
 * Author : KsGin 
 * Date   : 2018/1/10
 */

#ifndef LEETCODE_FINDANAGRAMMAPPINGS_H
#define LEETCODE_FINDANAGRAMMAPPINGS_H

#include <vector>

using namespace std;

class FindAnagramMappings {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        vector<int> res(A.size());
        for (int i = 0; i < A.size(); ++i) {
            for (int j = 0; j < B.size(); ++j) {
                if(B[j] == A[i]){
                    res[i] = j;
                }
            }
        }
        return res;
    }
};

#endif //LEETCODE_FINDANAGRAMMAPPINGS_H
