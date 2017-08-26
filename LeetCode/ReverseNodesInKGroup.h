//
// Created by ksgin on 2017/7/8.
//

#pragma once
#include <iostream>

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL)
    {}
};

class ReverseNodesInKGroup
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (!head || k <= 1) return head;

        auto p = head;
        auto i = 1;
        while (p && i < k)
        {
            p = p->next;
            i++;
        }

        if (p && i < k) return head;
        auto tail = p->next;
        p->next = NULL;


        head = reverseGroup(head);
        tail = reverseKGroup(tail , k);         //分治

        p = head;

        while (p->next)
        {
            p = p->next;
        }

        p->next = tail;

        return head;

    }

    ListNode *reverseGroup(ListNode *list)
    {
        if (!list)
            return NULL;

        auto p = list->next;
        list->next = NULL;

        while (p)
        {
            auto node = new ListNode(p->val);
            node->next = list;
            list = node;
            p = p->next;
        }

        return list;
    }
};