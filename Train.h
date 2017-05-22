#ifndef COURSE_WORK_TRAIN_H
#define COURSE_WORK_TRAIN_H

#include <string>
#include <fstream>

using namespace std;

struct road{
    std::string name_start_station; //Name of the initial station
    std::string name_end_station; // Name of endpoint
};


//abstract class
class Train {
protected:
    road name_of_station;//constructor(name start, name end)
    int number_train; // The number of train
    int count_of_carriages; // Number of a car// count
    int time_in_road; // Time in road
public:
    Train();    //default constructor
    Train(road, int, int, int);    //constructor
    ~Train();   //destructor

    //getters
    virtual int get_number_train();
    virtual int get_count_of_carriages();
    virtual std::string get_start_station();
    virtual std::string get_end_station();
    virtual int get_time_in_road();

    //setters
    virtual void set_start_station();
    virtual void set_end_station();
    virtual void set_number_train();
    virtual void set_count_of_carriages();
    virtual void set_time_in_road();

    virtual void show() const;  //show fields of train object
    virtual ostream& operator<<(ostream& out);
    virtual istream& operator>>(istream& in);  //перевантаження оперції >>, як метод класу

//    friend ostream& operator<<(ostream& out, Try * & tr);
//    friend istream& operator>>(istream& in, Try * & tr);
};


#endif