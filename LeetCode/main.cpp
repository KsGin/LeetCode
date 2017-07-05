//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include <iostream>
#include "RemoveNthNode.cpp"

using namespace std;

int main(int argc, const char * argv[]) {

    ListNode *s = new ListNode(1);
    s->next = new ListNode(2);
    s->next->next = new ListNode(3);
    RemoveNthFromEnd::removeNthFromEnd(s, 1);



    return 0;
}
