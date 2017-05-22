#ifndef COURSE_WORK_MAIN_JOB_H
#define COURSE_WORK_MAIN_JOB_H

#include "New_stack.h"

class Main_job {
public:
    Main_job();
    ~Main_job();


    void Run(); //start user menu
    void create_passenger(New_stack &); //create passenger train object
    void create_freight(New_stack &); //create freight train object
    void show_some(New_stack &); //show stack
    void remove_some(New_stack &); //clear stack
    void write_to_files(New_stack &); //write stack objects to file
    void read_from_files(New_stack &); //fill the stack from file objects
    void sort_objects(New_stack &); //sort stack (bubble sort)
    void do_request(New_stack &); //request for stack

};


#endif //COURSE_WORK_MAIN_JOB_H
