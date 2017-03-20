#include "Stack.h"
#include "Train.h"

Stack::Stack()
{
    top = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfool() const
{
    return top == MAX;
}

bool Stack::push(Train *item)
{
    if (top < MAX)
    {
        items[top++] == item;
        return true;
    } else
        return false;
}
bool Stack::pop(Train *item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    } else
        return false;
}