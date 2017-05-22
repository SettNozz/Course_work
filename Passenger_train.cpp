#include <limits>
#include "Passenger_train.h"


Passenger_train::Passenger_train(){

}

void Passenger_train::set_count_of_carriages(){
    Train::set_count_of_carriages();
    set_number_of_plases();
    set_number_of_passangers();
}

Passenger_train::Passenger_train(road name_s, int num_tr, int num_car, int time, int num_pas, int num_pl) {
    name_of_station.name_start_station = name_s.name_start_station;
    name_of_station.name_end_station = name_s.name_end_station;
    time_in_road = time;
    number_train = num_tr;
    count_of_carriages = num_car;
    number_of_passangers = num_pas;
    number_of_plases = num_pl;
}

Passenger_train::~Passenger_train(){

}

void Passenger_train::show() const {
    std::cout << "Name of start station is: " <<  name_of_station.name_start_station << std::endl;
    std::cout << "Name of end station is: " <<  name_of_station.name_end_station << std::endl;
    std::cout << "Time in road: " << time_in_road << std::endl;
    std::cout << "Number of train is: " << number_train << std::endl;
    std::cout << "Number of carriages is: " << count_of_carriages << std::endl;
    std::cout << "Number of pleases is: " << number_of_plases << std::endl;
    std::cout << "Number of passengers is: " << number_of_passangers << std::endl;
}

void Passenger_train::set_number_of_passangers() {
    std::cout << "Count of passengers: ";
    std::cin >> number_of_passangers;
    while (std::cin.fail() || number_of_passangers == 0){
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cout << "Your input data is incorrect, try again" << std::endl;
        std::cin >> number_of_passangers;
    }
}

void Passenger_train::set_number_of_plases() {
    std::cout << "Number of places: ";
    std::cin >> number_of_plases;
    while (std::cin.fail() || number_of_plases == 0 || number_of_plases < number_of_passangers){
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cout << "Your input data is incorrect, try again" << std::endl;
        std::cin >> number_of_plases;
    }

}

int Passenger_train::get_number_of_places() { return number_of_plases;}

int Passenger_train::get_number_of_passangers() { return number_of_passangers;}


ostream & Passenger_train::operator<<(ostream & out) // new method for saving
{
    out << "Passenger train" << std::endl;
    this->Train::operator<<(out);
    out << number_of_plases << std::endl;
    out << number_of_passangers << std::endl;
    return out;
}

istream & Passenger_train::operator>>(istream & in)
{
    this->Train::operator>>(in);
    in >> number_of_plases;
    in >> number_of_passangers;
    return in;
}