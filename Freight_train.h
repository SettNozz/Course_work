//
// Created by settnozz on 19.03.17.
//

#ifndef COURSE_WORK_FREIGHT_TRAIN_H
#define COURSE_WORK_FREIGHT_TRAIN_H
#pragma once

#include "Train.h"

class Freight_train : public Train {
protected:
    string name_of_freight;
    int weight_of_freight;
public:
    Freight_train(string, string, int, int, int, string, int);
    ~Freight_train();

};


#endif //COURSE_WORK_FREIGHT_TRAIN_H
