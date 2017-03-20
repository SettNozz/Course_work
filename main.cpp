#include <iostream>
#include "Train.h"
#include "Main_job.h"
#include "Stack.h"

using namespace std;

void alloc_stack()
{
    Stack st;
}

void user_menu()
{
    Main_job ob;
    ob.Run();

}


void free_memory()
{
    NULL;
}

int main() {
    alloc_stack();
    user_menu();
    free_memory();
    //Train("Kiev", "Zaporizhya", 72, 15, 40);
    return 0;
}