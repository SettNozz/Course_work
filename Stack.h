//
// Created by settnozz on 20.03.17.
//

#ifndef COURSE_WORK_STACK_H
#define COURSE_WORK_STACK_H

#include <string>
#include "Train.h"

using namespace std;

typedef Train *Item;

class Stack {
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfool() const;
    //push() return false, if stack full, and true - if empty
    bool push(Train *item); //add element to stack
    //pop() return false, if stack empty, and true - if full
    bool pop(Train *item); //pop element from top of stack
};


#endif //COURSE_WORK_STACK_H
