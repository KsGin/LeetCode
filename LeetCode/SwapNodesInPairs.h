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

class SwapNodesInPairs
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (!head || !head->next) return head;

        auto p = head;

        auto item = p->next;
        p->next = p->next->next;
        item->next = p;

        head = item;    //为head赋值


        while (p->next && p->next->next)
        {
            item = p->next->next;
            p->next->next = p->next->next->next;
            item->next = p->next;
            p->next = item;
            p = p->next->next;
        }

        return head;
    }
};