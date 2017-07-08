//
// Created by ksgin on 2017/7/7.
//

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

    ListNode *mergeTwoSortedLists(ListNode *l1, ListNode *l2)
    {
        ListNode node(0), *res = &node;
        while (l1 && l2)
        {
            if (l1->val <= l2->val)
            {
                res->next = l1;
                l1 = l1->next;
            } else
            {
                res->next = l2;
                l2 = l2->next;
            }
            res = res->next;
        }
        if (l1)
            res->next = l1;
        else if (l2)
            res->next = l2;
        return node.next;
    }
};
