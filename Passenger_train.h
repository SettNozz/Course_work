//
// Created by settnozz on 19.03.17.
//

#ifndef COURSE_WORK_PASSENGER_TRAIN_H
#define COURSE_WORK_PASSENGER_TRAIN_H


#include "Train.h"

class Passenger_train : public Train
{
protected:
    int number_of_passangers;
    int number_of_plases;
public:
    Passenger_train(string, string, int, int, int, int, int);
    ~Passenger_train();
};


#endif //COURSE_WORK_PASSENGER_TRAIN_H
