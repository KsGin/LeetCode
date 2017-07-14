//
// Created by KsGin on 2017/7/7.
//

#pragma once
#include <iostream>

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class MergeTwoSortedLists {
public:
    ListNode *mergeTwoSortedLists(ListNode *l1, ListNode *l2) {

        if (!l1 && !l2) {
            return NULL;
        }
        if (!l1 && l2) {
            return l2;
        }
        if (l1 && !l2) {
            return l1;
        }

        auto p1 = l1, p2 = l2;

        ListNode *h = NULL;
        if (p1->val >= p2->val) {
            h = new ListNode(p2->val);
            p2 = p2->next;
        } else {
            h = new ListNode(p1->val);
            p1 = p1->next;
        }

        ListNode *p = h;

        while (p1 != NULL && p2 != NULL) {
            if (p1->val >= p2->val) {
                p->next = new ListNode(p2->val);
                p2 = p2->next;
            } else {
                p->next = new ListNode(p1->val);
                p1 = p1->next;
            }
            p = p->next;
        }

        if (p1) p->next = p1;
        if (p2) p->next = p2;
        return h;
    }
};