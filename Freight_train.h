#ifndef COURSE_WORK_FREIGHT_TRAIN_H
#define COURSE_WORK_FREIGHT_TRAIN_H
#pragma once

#include "Train.h"


class Freight_train : public Train {
private:
    std::string name_of_freight; //name of freight
    int weight_of_freight; //weight of freight
public:
    Freight_train(); //default constructor
    Freight_train(road, int, int, int, std::string, int); //constructor with param
    ~Freight_train(); //destructor
    //setters
    void set_count_of_carriages(); //set count of carriages
    void set_name_of_freight(); //set name of freight
    void set_weight_of_freight(); //set weight of freight
    //getters
    std::string get_name_of_freight(); //get name of freight
    int get_weight_of_freight(); //get weight of freight

    void show() const; //show the fields of Freight train object
    //overload operators
    ostream& operator<<(ostream& out); //overload << operation
    istream& operator>>(istream& in); //overload >> operation

};


#endif //COURSE_WORK_FREIGHT_TRAIN_H
