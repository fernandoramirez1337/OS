#include <iostream>
#include "include/functions.h"
#include "include/structs.h"

using namespace std;

int main()
{
    cout<<"Main thread with id: "<<pthread_self()<<endl;

    struct args *duo = (struct args *)malloc(sizeof(struct args));
    duo->new_id = 21;
    duo->last_id = pthread_self();


    pthread_t new_thread;
    int my_new_thread;
    my_new_thread = pthread_create(&new_thread, NULL, thread_fun, (void *) duo);

    if(my_new_thread)
    {
        cout<<"ERROR: return code from my_new_thread is "<<my_new_thread<<endl;
        return(1);
    };

    pthread_exit(NULL);
    return 0;
}