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
    int number_train; // The number of train
    int number_of_carriages; // Number of a car
    int time_in_road; // Time in road
public:
    Train();
    Train(string, string, int, int, int); //constructor
    ~Train(); //destructor

};


#endif //COURSE_WORK_TRAIN_H
