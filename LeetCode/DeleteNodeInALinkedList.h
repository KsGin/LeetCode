/*
 * File   : DeleteNodeInALinkedList
 * Author : KsGin 
 * Date   : 2017/11/17
 */

#ifndef LEETCODE_DELETENODEINALINKEDLIST_H
#define LEETCODE_DELETENODEINALINKEDLIST_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class DeleteNodeInALinkedList {
public:
    void deleteNode(ListNode* node) {
        auto tmp = node;
        while (node->next){
            node->val = node->next->val;
            tmp = node;
            node = node->next;
        }
        tmp->next = nullptr;
    }
};

#endif //LEETCODE_DELETENODEINALINKEDLIST_H
