#include <stdio.h>
#include <pthread.h>

 __attribute__ ((weak)) int pthread_create(
pthread_t *,
	const pthread_attr_t *,
	void * (*)(void *),
	void *);

int main()
{
	if (pthread_create)
		printf("This is multi thread\n");
	else
		printf("This is single thread\n");

	return 0;
}
