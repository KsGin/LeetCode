/*
 * File   : FlattenNestedListIterator
 * Author : KsGin 
 * Date   : 2018/2/8
 */

#ifndef LEETCODE_FLATTENNESTEDLISTITERATOR_H
#define LEETCODE_FLATTENNESTEDLISTITERATOR_H


// This is the interface that allows for creating nested lists.
// You should not implement it, or speculate about its implementation
class NestedInteger {
  public:
    // Return true if this NestedInteger holds a single integer, rather than a nested list.
    bool isInteger() const;

    // Return the single integer that this NestedInteger holds, if it holds a single integer
    // The result is undefined if this NestedInteger holds a nested list
    int getInteger() const;

    // Return the nested list that this NestedInteger holds, if it holds a nested list
    // The result is undefined if this NestedInteger holds a single integer
    const vector<NestedInteger> &getList() const;
};


#include <vector>

using namespace std;

class NestedIterator {
    vector<int> list;
    int idx = 0;

    void _init_(const vector<NestedInteger> &nestedList){
        for (auto nest : nestedList) {
            if(nest.isInteger()) list.push_back(nest.getInteger());
            else _init_(nest.getList());
        }
    }

public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        list = vector<int>(0);
        _init_(nestedList);
    }

    int next() {
        return list[idx++];
    }

    bool hasNext() {
        return idx < list.size();
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */

#endif //LEETCODE_FLATTENNESTEDLISTITERATOR_H
