#ifndef COURSE_WORK_NEW_STACK_H
#define COURSE_WORK_NEW_STACK_H

#include "Train.h"

struct stack_node{
    Train * item_;
    stack_node *pnext_;
    stack_node(Train*& item){
        item_ = item;
        pnext_ = NULL;
    }
};

class New_stack {
private:
    stack_node *ptop_;

    //int len;
public:
    New_stack();
    New_stack(const New_stack & q);
    static New_stack &lego()
    {
        static New_stack qw;
        return qw;
    }
    ~New_stack();
    bool is_empty();
    void push( Train *& item);
    void clear_stack();
    int len_stack() const;
    Train* pop();
    Train* peek();
    void print_stack();
    void read_from_file();
    void write_to_file() const;
    void sort_stack();
    void request_stack();

};


#endif //COURSE_WORK_NEW_STACK_H
