#ifndef COURSE_WORK_FREIGHT_TRAIN_H
#define COURSE_WORK_FREIGHT_TRAIN_H
#pragma once

#include "Train.h"
#include <string>


class Freight_train : public Train {
private:
    std::string name_of_freight;
    int weight_of_freight;
public:
    Freight_train();
    Freight_train(road, int, int, int, std::string, int);
    ~Freight_train();

    void set_count_of_carriages();
    void set_name_of_freight();
    void set_weight_of_freight();

    std::string get_name_of_freight();
    int get_weight_of_freight();

    void show() const;
    ostream& operator<<(ostream& out);
    istream& operator>>(istream& in);

};


#endif //COURSE_WORK_FREIGHT_TRAIN_H
