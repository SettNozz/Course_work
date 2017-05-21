#include <iostream>
#include <limits>
#include "Train.h"

Train::Train(road name_s, int time, int num_train, int num_cars)
{
    name_of_station.name_start_station = name_s.name_start_station;
    name_of_station.name_end_station = name_s.name_end_station;
    time_in_road = time;
    number_train = num_train;
    count_of_carriages = num_cars;
}

Train::~Train() {

}

Train::Train() {

}



void Train::show() const{
    std::cout << "Name of start station is: " <<  name_of_station.name_start_station << std::endl;
    std::cout << "Name of end station is: " <<  name_of_station.name_end_station << std::endl;
    std::cout << "Time in road: " << time_in_road << std::endl;
    std::cout << "Number of train is: " << number_train << std::endl;
    std::cout << "Number of carriages is: " << count_of_carriages << std::endl;
}


void Train::set_number_train() {
    std::cout << "Number: ";
    std::cin >> number_train;
    while (std::cin.fail() || number_train == 0){
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cout << "Your input data is incorrect, try again" << std::endl;
        std::cin >> number_train;
    }
}

void Train::set_count_of_carriages() {
    std::cout << "Count of carriages: ";
    std::cin >> count_of_carriages;
    while (std::cin.fail() || count_of_carriages == 0) {
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cout << "Your input data is incorrect, try again" << std::endl;
        std::cin >> count_of_carriages;
    }
}

void Train::set_time_in_road() {
    std::cout << "Time in road: ";
    std::cin >> time_in_road;
    while (std::cin.fail() || time_in_road == 0) {
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cout << "Your input data is incorrect, try again" << std::endl;
        std::cin >> time_in_road;
    }
}

void Train::set_start_station() {
    while (true)
    {
        std::cout << "Name of statr station: ";
        getline(std::cin, name_of_station.name_start_station, '\n');
        // check input
        try
        {
            if (std::cin.fail() || name_of_station.name_start_station == "")
            {
                throw "error";
            }
        }
        catch (char * error)
        {
            std::cout << "Your input data is incorrect, try again" << std::endl;
            continue;
        }
        break;
    }
}

void Train::set_end_station() {
    while (true)
    {
        std::cout << "Name of end station: ";
        getline(cin, name_of_station.name_end_station, '\n');
        try
        {
            if (std::cin.fail() || name_of_station.name_end_station == "")
            {
                throw "error";
            }
        }
        catch (char * error)
        {
            std::cout << "Your input data is incorrect, try again" << std::endl;
            continue;
        }
        break;
    }
}

int Train::get_number_train() {return number_train;}

int Train::get_count_of_carriages() { return count_of_carriages;}

//ostream & operator<<(ostream & out, Train * & tr)
//{
//    *tr << out;
//    return out;
//}
//
//istream & operator>>(istream & in, Train *& tr)
//{
//    *tr >> in;
//    return in;
//}