//
// Created by KsGin on 2017/7/5.
//

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class RemoveNthFromEnd {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        auto len = ListLength(head);
        auto idx = len - n;
        auto h = head;
        if (idx < 0) return NULL;
        else if (idx == 0) return h->next;
        else {
            int cidx = 0;
            while (cidx < idx) {
                if (cidx == idx - 1) {
                    h->next = h->next->next;
                }

                h = h->next;

                cidx++;
            }
        }

        return head;
    }

    // 获得链表长度
    int ListLength(ListNode *head) {
        auto len = 0;
        auto h = head;
        while (h != NULL) {
            len++;
            h = h->next;
        }
        std::cout << len << std::endl;
        return len;
    }
};