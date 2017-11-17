/*
 * File   : LinkedListRandomNode
 * Author : KsGin 
 * Date   : 2017/11/17
 */

#ifndef LEETCODE_LINKEDLISTRANDOMNODE_H
#define LEETCODE_LINKEDLISTRANDOMNODE_H

#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class LinkedListRandomNode {
public:
    std::vector<int> randomList;
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    LinkedListRandomNode(ListNode* head) {
        randomList = std::vector<int>(0);
        while (head){
            randomList.push_back(head->val);
            head = head->next;
        }
    }

    /** Returns a random node's value. */
    int getRandom() {
        return randomList[static_cast<int>(random() % randomList.size())];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */

#endif //LEETCODE_LINKEDLISTRANDOMNODE_H
