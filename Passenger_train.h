#ifndef COURSE_WORK_PASSENGER_TRAIN_H
#define COURSE_WORK_PASSENGER_TRAIN_H

#include "Train.h"

class Passenger_train : public Train
{
private:
    int number_of_passangers; //number of passengers
    int number_of_plases; //number of places in train
public:
    Passenger_train(); //default constructor
    Passenger_train(road, int, int, int, int, int); //constructor with param
    ~Passenger_train(); //destructor
    //setters
    void set_count_of_carriages(); //set count of carriages
    void set_number_of_passangers(); //set number of passengers
    void set_number_of_plases(); // set number of places
    //getters
    int get_number_of_passangers(); //get number of passengers
    int get_number_of_places(); //get number of places

    void show() const;
    //overload operators
    ostream& operator<<(ostream& out); //overload << operator
    istream& operator>>(istream& in); //overload >> operator
};


#endif //COURSE_WORK_PASSENGER_TRAIN_H
