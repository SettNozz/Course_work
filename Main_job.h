#ifndef COURSE_WORK_MAIN_JOB_H
#define COURSE_WORK_MAIN_JOB_H

#include "New_stack.h"

class Main_job {
public:
    Main_job();
    ~Main_job();


    void Run();
    void create_passenger(New_stack &);
    void create_freight(New_stack &);
    void show_some(New_stack &);
    void remove_some(New_stack &);
    void write_to_files(New_stack &);
    void read_from_files(New_stack &);
    void sort_objects(New_stack &);
    void do_request(New_stack &);

};


#endif //COURSE_WORK_MAIN_JOB_H
