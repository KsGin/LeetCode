/*
 * File   : FindSmallestLetterGreaterThanTarget
 * Author : KsGin 
 * Date   : 2018/1/12
 */

#ifndef LEETCODE_FINDSMALLESTLETTERGREATERTHANTARGET_H
#define LEETCODE_FINDSMALLESTLETTERGREATERTHANTARGET_H

#include <vector>

using namespace std;

class FindSmallestLetterGreaterThanTarget {
public:
    char nextGreatestLetter(vector<char> &letters, char target) {
        char res = letters[0];
        for (auto r : letters) {
            if (r > target) {
                res = r;
                break;
            }
        }
        return res;
    }
};

#endif //LEETCODE_FINDSMALLESTLETTERGREATERTHANTARGET_H
