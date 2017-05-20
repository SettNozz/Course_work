//
// Created by settnozz on 19.03.17.
//

#ifndef COURSE_WORK_FREIGHT_TRAIN_H
#define COURSE_WORK_FREIGHT_TRAIN_H
#pragma once

#include "Train.h"

class Freight_train : public Train {
private:
    string name_of_freight;
    int weight_of_freight;
public:
    Freight_train();
    Freight_train(road, int, int, int, string, int);
    ~Freight_train();
    void set_name_of_freight();
    void set_weight_of_freight();
    void show() const;

};


#endif //COURSE_WORK_FREIGHT_TRAIN_H
