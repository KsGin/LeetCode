//
// Created by ksgin on 2017/7/7.
//

#pragma once
#include <iostream>
#include <vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL)
    {}
};

class MergeKSortedLists
{
public:
    ListNode *mergeKLists(vector<ListNode *> lists)
    {
        if (lists.size() <= 0) return NULL;

        auto rs = lists[0];

        for (auto i = 1; i < lists.size(); i++)
        {
            rs = mergeTwoSortedLists(rs, lists[i]);
        }
        return rs;

    }

    ListNode *mergeTwoSortedLists(ListNode *l1, ListNode *head2)
    {
        ListNode node(0), *res = &node;
        while (l1 && head2)
        {
            if (l1->val <= head2->val)
            {
                res->next = l1;
                l1 = l1->next;
            } else
            {
                res->next = head2;
                head2 = head2->next;
            }
            res = res->next;
        }
        if (l1)
            res->next = l1;
        else if (head2)
            res->next = head2;
        return node.next;
    }
};
