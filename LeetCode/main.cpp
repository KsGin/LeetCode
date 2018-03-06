//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "SplitLinkedListInParts.h"

using namespace std;

int main() {

    ListNode *root = new ListNode(1);
    root->next = new ListNode(2);
    root->next->next = new ListNode(3);

    SplitLinkedListInParts sllip;

    sllip.splitListToParts(root , 5);

    return 0;
}
