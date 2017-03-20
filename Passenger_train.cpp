//
// Created by settnozz on 19.03.17.
//

#include "Passenger_train.h"


Passenger_train::Passenger_train(string name_s, string name_e, int num_tr, int num_car, int time, int num_pas, int num_pl) {
//    Train(name_s, name_e, num_tr, num_car, time);
//    Passenger_train(num_pas,num_pl);
    name_start_station = name_s;
    name_end_station = name_e;
    time_in_road = time;
    number_train = num_tr;
    number_of_carriages = num_car;
    number_of_passangers = num_pas;
    number_of_plases = num_pl;
}