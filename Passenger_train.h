#ifndef COURSE_WORK_PASSENGER_TRAIN_H
#define COURSE_WORK_PASSENGER_TRAIN_H

#include "Train.h"

class Passenger_train : public Train
{
private:
    int number_of_passangers;
    int number_of_plases;
public:
    Passenger_train();
    Passenger_train(road, int, int, int, int, int);
    ~Passenger_train();

    void set_count_of_carriages();
    void set_number_of_passangers();
    void set_number_of_plases();

    int get_number_of_passangers();
    int get_number_of_places();

    void show() const;
    ostream& operator<<(ostream& out);
    istream& operator>>(istream& in);
};


#endif //COURSE_WORK_PASSENGER_TRAIN_H
