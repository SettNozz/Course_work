//
// Created by settnozz on 20.03.17.
//

#include <cstdlib>
#include <iostream>
#include "Main_job.h"
#include "Stack.h"
#include "Train.h"
#include "Passenger_train.h"

Main_job::Main_job() {

}

Main_job::~Main_job() {

}

void Main_job::Run()
{
    int i;
    char s[10];
    do
    {
        system("CLS");
        std::cout <<"--------------------MENU--------------------" << std::endl;
        std::cout << "<1>. Create passengers train objects" << std::endl;
        std::cout << "<2>. Create freights train objects" << std::endl;
        std::cout << "<3>. Show the ..." << std::endl;
        std::cout << "<4>. Remove the ..." << std::endl;
        std::cout << "<5>. Save to file" << std::endl;
        std::cout << "<6>. Load from the file" << std::endl;
        std::cout << "<7>. Sort objects" << std::endl;
        std::cout << "<8>. Do request>" << std::endl;
        std::cout << "<9>. Leave the program" << std::endl;

        std::cin.getline(s, 10);
        i = atoi(s);
        switch (i)
        {
            case 1:
            {
                system("CLS");
                create_passenger();
                system("PAUSE");
                break;
            }
            case 2:
            {
                system("CLS");
                create_freight();
                system("PAUSE");
                break;
            }
            case 3:
            {
                system("CLS");
                show_some();
                system("PAUSE");
                break;
            }
            case 4:
            {
                system("CLS");
                remove_some();
                system("PAUSE");
                break;
            }
            case 5:
            {
                system("CLS");
                save_file();
                system("PAUSE");
                break;
            }
            case 6:
            {
                system("CLS");
                load_from_file();
                system("PAUSE");
                break;
            }
            case 7:
            {
                system("CLS");
                sort_objects();
                system("PAUSE");
                break;
            }
            case 8:
            {
                system("CLS");
                do_request();
                system("PAUSE");
                break;
            }
            case 9:
            {
                system("CLS");
                leave_program();
                system("PAUSE");
                break;
            }
        }
    }
    while (i !=10);
}

void Main_job::create_passenger()
{
    Train* t;
    string name_start_st = "Kiev";
    string name_end_st = "Zaporizhya";
    int num_train = 72;
    int num_carriges = 10;
    int time_road = 12;
    int num_of_peoples = 100;
    int num_of_plases = 140;
    t = new Passenger_train(name_start_st, name_end_st, num_train, num_carriges, time_road, num_of_peoples, num_of_plases);
    st.push(t);
}


void Main_job::create_freight() {}

void Main_job::show_some() {}

void Main_job::remove_some() {}

void Main_job::save_file() {}

void Main_job::load_from_file() {}

void Main_job::sort_objects() {}

void Main_job::do_request() {}

void Main_job::leave_program() {}