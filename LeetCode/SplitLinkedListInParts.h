/*
 * File   : SplitLinkedListInParts
 * Author : KsGin 
 * Date   : 2018/3/6
 */

#ifndef LEETCODE_SPLITLINKEDLISTINPARTS_H
#define LEETCODE_SPLITLINKEDLISTINPARTS_H

#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class SplitLinkedListInParts {
public:
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        int sLength = 0;
        ListNode* tmp = root;
        while (tmp) {
            sLength++;
            tmp = tmp->next;
        }
        int eLen = sLength / k;
        int eRem = sLength % k;
        tmp = root;
        vector<ListNode*> ret(0);
        for (int i = 0; i < k; ++i) {
            if(tmp){
                if(eLen > 0){
                    auto eRoot = tmp;
                    auto eTmp = eRoot;
                    tmp = tmp->next;
                    for (int j = 1; j < eLen; ++j) {
                        eTmp->next = tmp;
                        tmp = tmp->next;
                        eTmp = eTmp->next;
                    }
                    if(eRem > 0){
                        eTmp->next = tmp;
                        eTmp = eTmp->next;
                        tmp = tmp->next;
                        eRem--;
                    }
                    eTmp->next = nullptr;
                    ret.push_back(eRoot);
                } else {
                    if(eRem > 0){
                        auto eTmp = tmp;
                        tmp = tmp->next;
                        eTmp->next = nullptr;
                        eRem--;
                        ret.push_back(eTmp);
                    }
                }
            } else {
                ret.push_back(0);
            }
        }
        return ret;
    }
};

#endif //LEETCODE_SPLITLINKEDLISTINPARTS_H
