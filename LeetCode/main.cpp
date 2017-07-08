//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "SwapNodesInPairs.cpp"
using namespace std;

int main(int argc, const char * argv[]) {

    ListNode* listNode = new ListNode(1);
    listNode->next = new ListNode(2);
    listNode->next->next = new ListNode(3);
    listNode->next->next->next = new ListNode(4);
    listNode->next->next->next->next = new ListNode(5);
    SwapNodesInPairs swapNodeInPairs;

    swapNodeInPairs.swapPairs(listNode);


    return 0;
}
