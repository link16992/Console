#ifndef THREAD_H
#define THREAD_H

#include <pthread.h>
#include <stdio.h>

class Thread
{
public:
    Thread();
    int startThread();
};

#endif // THREAD_H
