#include "New_stack.h"
#include <iostream>
#include <fstream>


New_stack::New_stack():ptop_(NULL){

}

New_stack::~New_stack() {

}

void New_stack::push(Train *&item) {
    stack_node *pnewnode = new stack_node(item);
    pnewnode->pnext_ = ptop_;
    ptop_ = pnewnode;
    len +=1;
}

Train* New_stack::pop() {
    std::string str_exception = "it's an empty stack.";
    try{
        if(!is_empty()){
            Train* t = ptop_->item_;
            stack_node *pretop = ptop_;
            ptop_ = ptop_->pnext_;
            delete pretop;
            len -=1;
            return t;
        }else{
            throw str_exception;
        }
    }
    catch(...)
    {
        std::cout << str_exception << std::endl;
    }

}

Train* New_stack::peek() {
    if(!is_empty()){
        return ptop_->item_;
    } else
        std::cout << "Sorry, it's an empty stack." << std::endl;
    return NULL;
}

bool New_stack::is_empty() {
    return ptop_ == NULL ? true : false;
}

int New_stack::len_stack(){
    if(!is_empty()){
        std::cout <<len << std::endl;
        return len;
    } else
        return NULL;
}

void New_stack::print_stack(){
    while (!is_empty()){
        Train* t = ptop_->item_;
        stack_node *pretop = ptop_;
        ptop_ = ptop_->pnext_;
        t->show();
        std::cout << "**************************************************" << std::endl;
    }
}

void New_stack::read_from_file() {
//    ofstream fout("file.txt");
//    while (!is_empty()){
//        Train* t = ptop_->item_;
//        stack_node *pretop = ptop_;
//        ptop_ = ptop_->pnext_;
//        fout << t;
//    }
//    fout.close();
}

void New_stack::write_to_file() const{
    //write file func
}

void New_stack::clear_stack() {
    while (!is_empty()){
        Train* t = ptop_->item_;
        stack_node *pretop = ptop_;
        ptop_ = ptop_->pnext_;
        }
}

void New_stack::sort_stack() {
//    for(int i = 0; i < len_stack(); ++i){
//        spam =
//    }
}

void New_stack::request_stack() {
    auto max = 0;
    auto num_tr = 0;
    while (!is_empty()){
        Train* t = ptop_->item_;
        stack_node *pretop = ptop_;
        ptop_ = ptop_->pnext_;
        if (t->get_count_of_carriages() > max){
            max = t->get_count_of_carriages();
            num_tr = t->get_number_train();
        }
    }
    std::cout << "Number of train is: " << num_tr << std::endl;

}