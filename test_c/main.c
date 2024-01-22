#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void *workerThreadFunc ( void * tid)
{
	long *myID = (long * ) tid;

}


static 	pthread_mutex_t mutex  = PTHREAD_MUTEX_INITIALIZER;

void * start_counting ( void * arg)
{
	pthread_mutex_lock(&mutex);
	if ( i >= 10000)
	{
		pthread_mutex_unlock(&mutex)
	}
}

int main()
{
	pthread_t tid;
	pthread_create(&tid,NULL, workerThreadFunc,(void *)&tid);
	pthread_exit(NULL);
	return 0;
}