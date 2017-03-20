//
// Created by settnozz on 19.03.17.
//

#include "Train.h"

Train::Train(string name_st, string name_e, int time, int num_train, int num_cars)
{
    name_start_station = name_st;
    name_end_station = name_e;
    time_in_road = time;
    number_train = num_train;
    number_of_carriages = num_cars;
}

Train::~Train() { }

Train::Train() {

}

