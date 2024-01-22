#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *myThreadFun( void *vargp)
{
    sleep (1);
    printf("Printing GreekQuiz  from Thread \n");
    return NULL;

}
int main()
{
    pthread_t thread_id;
    printf("Before Thread");
    pthread_create()
}