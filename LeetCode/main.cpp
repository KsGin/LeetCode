//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "MergeKSortedLists.cpp"

using namespace std;

int main(int argc, const char * argv[]) {

    ListNode *l1 = new ListNode(3);
    l1->next = new ListNode(6);
    l1->next->next = new ListNode(7);

    ListNode *l2 = new ListNode(0);
    l2->next = new ListNode(2);
    l2->next->next = new ListNode(5);



    MergeKSortedLists::mergeKLists(vector<ListNode*> {l2 , l1});

    return 0;
}
