#ifndef COURSE_WORK_NEW_STACK_H
#define COURSE_WORK_NEW_STACK_H

#include "Train.h"

struct stack_node{  //behavior of NODE
    Train * item_;
    stack_node *pnext_; //ptr to next element
    stack_node(Train*& item){
        item_ = item;  //item of stack
        pnext_ = NULL; //null ptr
    }
};

class New_stack {
private:
    stack_node *ptop_;
public:
    New_stack(); //default constructor
    New_stack(const New_stack & q); //constructor with parametrs
    static New_stack &lego()
    {
        static New_stack qw;
        return qw;
    }
    ~New_stack(); //destructor
    bool is_empty(); //check, if stack is empty
    void push( Train *& item); //push element to top of stack
    void clear_stack(); //clear stack
    int len_stack() const; //return len of stack
    Train* pop(); //pop element to top of stack
    Train* peek(); //show top element of stack
    void print_stack(); //print all element's of stack
    void read_from_file(); //fill conteiner from file
    void write_to_file() const; //write stack objects to file
    void sort_stack(); //sort stack
    void request_stack(); //request to stack, to print number of train with max carriages
};


#endif //COURSE_WORK_NEW_STACK_H
