#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <pthread.h>

 volatile bool receiveDone = false;
void *interrupt_fake (void *vargp)
{
    sleep(1);
    printf ( "Interrupt \n");
    receiveDone = true;
    return NULL;
}
int main()
{
    pthread_t thread_id;
    printf("Thread start \n");
    pthread_create(&thread_id,NULL, interrupt_fake, NULL);
    while (1)
    {
        if (receiveDone)
        {
            printf("Running \n");
            sleep(1);
        }
    }
    return 0;
}