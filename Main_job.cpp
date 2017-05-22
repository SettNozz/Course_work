#include "Main_job.h"
#include "Passenger_train.h"
#include "Freight_train.h"

Main_job::Main_job() {

}

Main_job::~Main_job() {

}

void init_fields(Train* item, New_stack &q){
        item->set_start_station();
        item->set_end_station();
        item->set_time_in_road();
        item->set_number_train();
        item->set_count_of_carriages();
        q.push(item);
}

void Main_job::Run()
{
    int i;
    New_stack &w = New_stack::lego();
    char s[10];
    do
    {
        system("clear");
        std::cout <<"--------------------MENU--------------------" << std::endl;
        std::cout << "<1>. Create passengers train objects" << std::endl;
        std::cout << "<2>. Create freights train objects" << std::endl;
        std::cout << "<3>. Show the stack" << std::endl;
        std::cout << "<4>. Remove the stack" << std::endl;
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
                system("clear");
                create_passenger(w);
                std::cout << "Press enter to continue ...";
                std::cin.get();
                break;
            }
            case 2:
            {
                system("clear");
                create_freight(w);
                std::cout << "Press enter to continue ...";
                std::cin.get();
                break;
            }
            case 3:
            {
                system("clear");
                show_some(w);
                std::cout << "Press enter to continue ...";
                std::cin.get();
                break;
            }
            case 4:
            {
                system("clear");
                remove_some(w);
                std::cout << "Press enter to continue ...";
                std::cin.get();
                break;
            }
            case 5:
            {
                system("clear");
                write_to_files(w);
                std::cout << "Press enter to continue ...";
                std::cin.get();
                break;
            }
            case 6:
            {
                system("clear");
                read_from_files(w);
                std::cout << "Press enter to continue ...";
                std::cin.get();
                break;
            }
            case 7:
            {
                system("clear");
                sort_objects(w);
                std::cout << "Press enter to continue ...";
                std::cin.get();
                break;
            }
            case 8:
            {
                system("clear");
                do_request(w);
                std::cout << "Press enter to continue ...";
                std::cin.get();
                break;
            }
            case 9:
            {
                system("clear");
                std::cout << "Press enter to continue ...";
                std::cin.get();
                break;
            }
        }
    }
    while (i !=9);
}

void Main_job::create_passenger(New_stack &s)
{
    Train *t = new Passenger_train();
    init_fields(t, s);
    std::cout << "Object is created now!" << std::endl;
}


void Main_job::create_freight(New_stack &s)
{
    Train *m = new Freight_train();
    init_fields(m, s);
    std::cout << "Object is created now!" << std::endl;
}

void Main_job::show_some(New_stack &s) {
    std::cout << "This function will show all the elements of the stack." << std::endl;
    s.print_stack();
}

void Main_job::remove_some(New_stack &s) {
    std::cout << "This function will completely clean your stack." << std::endl;
    int len = s.len_stack();
    for(int i = 0; i < len ; ++i){
        s.pop();
    }
}


void Main_job::sort_objects(New_stack &s) {
    std::cout << "Sorting function." << std::endl;
    s.sort_stack();
}

void Main_job::do_request(New_stack &s) {
    std::cout << "Request to collection: Output the number of the train with the maximum number of wagons." << std::endl;
    s.request_stack();
}

void Main_job::write_to_files(New_stack &s) {
    std::cout << "Write to file." << std::endl;
    s.write_to_file();
}

void Main_job::read_from_files(New_stack &s) {
    std::cout << "Read from file." << std::endl;
    s.read_from_file();
}