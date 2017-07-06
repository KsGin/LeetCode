//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "MergeTwoSortedLists.cpp"

using namespace std;

int main(int argc, const char * argv[]) {

    ListNode *l1 = new ListNode(5);
    ListNode *l2 = new ListNode(1);
    l2->next = new ListNode(2);
    l2->next->next = new ListNode(4);

    MergeTwoSortedLists::mergeTwoSortedLists(l1, l2);

    return 0;
}
