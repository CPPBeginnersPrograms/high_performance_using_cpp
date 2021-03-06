/*
 * Thread.cpp
 *
 *  Created on: Sep 5, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "Thread.h"


Thread::Thread() {
	// TODO Auto-generated constructor stub
	pThread = NULL;
	stopped = false;

}

Thread::~Thread() {
	// TODO Auto-generated destructor stub
	delete pThread;
	pThread = NULL;

}

void Thread::run(){
	locker.lock();
	while(!stopped)
	{
		cout<<this_thread::get_id()<<endl;

		this_thread::sleep_for(chrono::seconds(1));
	}
	cout<<" \n Thread "<< this_thread::get_id()<<" stopped as requested "<<endl;
	return;
	locker.unlock();
}

void Thread::stop()
{
	stopped = true;
}

void Thread::start()
{
	pThread = new thread(&Thread::run, this);
}


void Thread::join()
{
	pThread->join();
}

void Thread::detach()
{
	pThread->detach();
}
