//
// Created by settnozz on 19.03.17.
//

#include <iostream>
#include <limits>
#include "Freight_train.h"

Freight_train::Freight_train(){

}

Freight_train::~Freight_train(){

}

Freight_train::Freight_train(road name_s, int num_tr, int num_car, int time, string name_fr, int weight_fr) {
    name_of_station.name_start_station = name_s.name_start_station;
    name_of_station.name_end_station = name_s.name_end_station;
    time_in_road = time;
    number_train = num_tr;
    count_of_carriages = num_car;
    name_of_freight = name_fr;
    weight_of_freight = weight_fr;
}

void Freight_train::show() const{
    std::cout << "Name of start station is: " <<  name_of_station.name_start_station << std::endl;
    std::cout << "Name of end station is: " <<  name_of_station.name_end_station << std::endl;
    std::cout << "Time in road: " << time_in_road << std::endl;
    std::cout << "Number of train is: " << number_train << std::endl;
    std::cout << "Number of carriages is: " << count_of_carriages << std::endl;
    std::cout << "Name of freight is: " << name_of_freight << std::endl;
    std::cout << "Weight of train is: " << weight_of_freight << std::endl;
}

void Freight_train::set_name_of_freight() {
    while (true)
    {
        cout << "Name of freight is: ";
        getline(cin, name_of_freight, '\n');
        try
        {
            if (cin.fail() || name_of_freight == "")
            {
                throw "error";
            }
        }
        catch (char * error)
        {
            cout << "Your input data is incorrect, try again" << endl;
            continue;
        }
        break;
    }
}

void Freight_train::set_weight_of_freight() {
    std::cout << "Enter weight of freight: ";
    std::cin >> weight_of_freight;
    while (std::cin.fail() || weight_of_freight == 0) {
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cout << "Your input data is incorrect, try again" << std::endl;
        std::cin >> weight_of_freight;
    }
}