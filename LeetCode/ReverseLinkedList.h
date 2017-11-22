/*
 * File   : ReverseLinkedList
 * Author : KsGin 
 * Date   : 2017/11/22
 */

#ifndef LEETCODE_REVERSELINKEDLIST_H
#define LEETCODE_REVERSELINKEDLIST_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class ReverseLinkedList {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *h = head->next , *tail = head;
        ListNode *ret = head;
        while (h){
            ListNode* tmp = new ListNode(h->val);
            tmp->next = ret;
            ret = tmp;
            h = h->next;
        }
        tail->next = nullptr;
        return ret;
    }
};

#endif //LEETCODE_REVERSELINKEDLIST_H
