#include "../include/functions.h"
#include "../include/structs.h"

#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;


void * PrintHello(void * data)
{
    int my_data = *((int*)(&data));
/* data received by thread */
    cout<<"Hello from new thread - got "<<my_data<<endl;
    pthread_exit(NULL);
/* terminate the thread */
}

void * thread_fun(void * arg)
{
    //cout<<"New thread created with id: "<<((struct args*)arg)->new_id<<" from "<<((struct args*)arg)->last_id<<endl;
    cout<<"New thread created with id: "<<pthread_self()<<" from "<<((struct args*)arg)->last_id<<endl;
    sleep(1);
    pthread_exit(NULL);
}