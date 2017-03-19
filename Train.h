//
// Created by settnozz on 19.03.17.
//

#ifndef COURSE_WORK_TRAIN_H
#define COURSE_WORK_TRAIN_H

#include <string>
#pragma once

using namespace std;

//abstract class
class Train {
protected:
    string name_start_station; //Name of the initial station
    string name_end_station; // Name of endpoint
    int number_train; // Time in road
    int number_of_carriages; // Number of a train
    int time_in_road; // The number of cars
public:
    Train(string, string, int, int, int); //constructor
    ~Train(); //destructor
};


#endif //COURSE_WORK_TRAIN_H
