#include "New_stack.h"
#include "Passenger_train.h"
#include "Freight_train.h"

New_stack::New_stack():ptop_(NULL){

}

New_stack::~New_stack() {

}

void New_stack::push(Train *&item) {
    stack_node *pnewnode = new stack_node(item);
    pnewnode->pnext_ = ptop_;
    ptop_ = pnewnode;
}

Train* New_stack::pop() {
    std::string str_exception = "it's an empty stack.";
    try{
        if(!is_empty()){
            Train* t = ptop_->item_;
            stack_node *pretop = ptop_;
            ptop_ = ptop_->pnext_;
            delete pretop;
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

int New_stack::len_stack() const{
    auto count = 0;
    if(ptop_ == NULL){
        return count;
    } else{
        stack_node* spam;
        spam = ptop_;
        ++count;
        while (spam->pnext_ != NULL){
            spam = spam->pnext_;
            ++count;
        }
        return count;
    }
}

void New_stack::print_stack(){
    stack_node *spam;
    spam = ptop_;
    for (int i = 0; i < len_stack(); ++i) {
        spam->item_->show();
        spam = spam->pnext_;
        std::cout << "**************************************************" << std::endl;
    }
}

void New_stack::read_from_file() {
    ifstream fin("file.txt");
    if (fin)
    {
        string key;
        getline(fin, key);
        while (!fin.eof())
        {
            if (key == "Freight train")
            {
                Train *e = new Passenger_train();
                *e >> fin;
                push(e);
                 }
            else if (key == "Passenger train")
            {

                Train *t = new Freight_train();
                *t >> fin;
                push(t);
            }
            getline(fin, key);
        }
        fin.close();
    }
    else
    {
        write_to_file();
    }

}

void New_stack::write_to_file() const{
    ofstream fout("file.txt");
    stack_node *spam;
    spam = ptop_;
    for (int i = 0; i < len_stack(); i++)
    {
        *spam->item_ << fout;
        spam = spam->pnext_;
    }
    fout.close();
}

void New_stack::clear_stack() {
    while (!is_empty()){
        Train* t = ptop_->item_;
        stack_node *pretop = ptop_;
        ptop_ = ptop_->pnext_;
        }
}

void New_stack::sort_stack() {
    stack_node * spam;
    Train * egg;
    spam = ptop_;
    int len = len_stack();
    for(int i = 0; i < len_stack() - 1; ++i){
        spam = ptop_;
        for(int j = 0; j < len_stack(); ++j){
            if(spam->item_->get_count_of_carriages() > spam->pnext_->item_->get_count_of_carriages()){
                egg = spam->item_;
                spam->item_ = spam->pnext_->item_;
                spam->pnext_->item_ = egg;
            }
        }
    }
}

void New_stack::request_stack() {
    auto max = 0;
    auto num_tr = 0;
    stack_node *spam;
    spam = ptop_;
    for (int i = 0; i < len_stack(); ++i) {
        if (spam->item_->get_count_of_carriages() > max) {
            max = spam->item_->get_count_of_carriages();
            num_tr = spam->item_->get_number_train();
            spam = spam->pnext_;
        }
    }
    std::cout << "Number of train is: " << num_tr << std::endl;
}