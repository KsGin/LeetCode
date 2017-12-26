/*
 * File   : OddEvenLinkedList
 * Author : KsGin 
 * Date   : 2017/12/26
 */

#ifndef LEETCODE_ODDEVENLINKEDLIST_H
#define LEETCODE_ODDEVENLINKEDLIST_H

#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class OddEvenLinkedList {

    void addNode(ListNode *a, ListNode *b) { //把b的后边加到a后边
        ListNode *tmp = b->next;
        b->next = tmp->next;
        tmp->next = a->next;
        a->next = tmp;
    }

public:
    ListNode *oddEvenList(ListNode *head) {
        if(!head || !head->next || !head->next->next)
            return head;
        ListNode *odd = head;
        ListNode *even = head->next;
        while (odd && even){
            if(even->next) addNode(odd , even);
            odd = odd->next;
            even = even->next;
        }
        return head;
    }
};


#endif //LEETCODE_ODDEVENLINKEDLIST_H
