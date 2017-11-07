/*
 * File   : CopyListWithRandomPointer
 * Author : KsGin 
 * Date   : 2017/11/7
 */

#ifndef LEETCODE_COPYLISTWITHRANDOMPOINTER_H
#define LEETCODE_COPYLISTWITHRANDOMPOINTER_H

struct RandomListNode {
    int label;
    RandomListNode *next, *random;
    RandomListNode(int x) : label(x), next(nullptr), random(nullptr) {}
};

class CopyListWithRandomPointer {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(head == nullptr)
            return head;
        for (auto hp = head; hp != nullptr; hp=hp->next->next) {
            auto nd = new RandomListNode(hp->label);
            nd->next = hp->next;
            hp->next = nd;
        }

        for (auto h = head; h; h = h->next->next) {
            if(h->random) h->next->random = h->random->next;
        }

        auto ret = head->next;
        auto oldo = head , newo = head->next ;
        while (newo->next){
            oldo->next = newo->next;
            oldo = oldo->next;
            newo->next = oldo->next;
            newo = newo->next;
        }

        return ret;
    }
};

#endif //LEETCODE_COPYLISTWITHRANDOMPOINTER_H
