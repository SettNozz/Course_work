#ifndef COURSE_WORK_MAIN_JOB_H
#define COURSE_WORK_MAIN_JOB_H

#include "Stack.h"

class Main_job {
public:
    Main_job();
    ~Main_job();


    Stack st;
    void Run();
    void create_passenger();
    void create_freight();
    void show_some();
    void remove_some();
    void save_file();
    void load_from_file();
    void sort_objects();
    void do_request();
    void leave_program();

};


#endif //COURSE_WORK_MAIN_JOB_H
