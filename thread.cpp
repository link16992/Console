#include "thread.h"
#include "qglobal.h"

Thread::Thread()
{

}

static void *printHello(void* argv)
{
    Q_UNUSED(argv);
    printf("Hello World! This is entry point of thread!\n");
    pthread_exit(NULL);
}

int Thread::startThread()
{
    pthread_t threadID;
    int ret;

    ret = pthread_create(&threadID, NULL, printHello, NULL);
    if(ret)
    {
        printf("pthread_create() error number=%d\n", ret);
        return -1;
    }
    pthread_exit(NULL);
}
