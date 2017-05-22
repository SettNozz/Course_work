#ifndef COURSE_WORK_TRAIN_H
#define COURSE_WORK_TRAIN_H

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

//structure of road (start/end stations)
struct road{
    std::string name_start_station; //Name of the initial station
    std::string name_end_station; // Name of endpoint
};

//abstract class
class Train {
protected:
    road name_of_station;//structure(name start, name end)
    int number_train; // The number of train
    int count_of_carriages; // Number of a car// count
    int time_in_road; // Time in road
public:
    Train();    //default constructor
    Train(road, int, int, int);    //constructor
    ~Train();   //destructor
    //getters
    virtual int get_number_train(); //get method for number of train
    virtual int get_count_of_carriages(); //get method for count of carriages
    virtual std::string get_start_station(); // get name of start station
    virtual std::string get_end_station();  //get name of end station
    virtual int get_time_in_road(); //get how much time train in road
    //setters
    virtual void set_start_station(); //set the name of start station
    virtual void set_end_station(); //set the name of end station
    virtual void set_number_train(); //set the number of train
    virtual void set_count_of_carriages(); //set the count of carriages
    virtual void set_time_in_road(); //set the time in road

    virtual void show() const;  //show fields of train object
    //overload methods
    virtual ostream& operator<<(ostream& out); //overload << operation
    virtual istream& operator>>(istream& in);  //overload >> operation
};


#endif