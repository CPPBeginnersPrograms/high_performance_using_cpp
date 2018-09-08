/*
 * main.cpp
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */


//#include <pthread.h> <pthread> API
//
// int pthread_create(
//              pthread_t *thread,
//              const pthread_attr_t *attr,
//              void *(*start_routine)(void*),
//              void *arg
// )
//
// int pthread_join ( pthread_t *thread, void **retval )
//
// int pthread_exit ( void *retval )
//
// pthread_t pthread_self(void)


#include <pthread.h>
#include <iostream>

using namespace std;

void* threadProc ( void *param ) {
	for (int count=0; count<3; ++count)
		cout << "Message =>" << count << " from " << pthread_self()
		     << endl;
	pthread_exit(0);
}

int main() {
	pthread_t thread1, thread2, thread3;

	pthread_create ( &thread1, NULL, threadProc, NULL );
	pthread_create ( &thread2, NULL, threadProc, NULL );
	pthread_create ( &thread3, NULL, threadProc, NULL );

	pthread_join( thread1, NULL );
	pthread_join( thread2, NULL );
	pthread_join( thread3, NULL );

	return 0;

}
