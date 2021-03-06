/*
 * Thread.cpp
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "Thread.h"

mutex Thread::locker;
condition_variable Thread::untilReady;
bool Thread::Ready = false;
queue<int>Thread::app;

Thread::Thread(ThreadType typeofthread) {
	// TODO Auto-generated constructor stub
	this->typeofthread = typeofthread;
	(typeofthread == PRODUCER) ? name = "PRODUCER" : name = "CONSUMER";
	stopped = false;
	pthread = NULL;
}

Thread::~Thread() {
	// TODO Auto-generated destructor stub
	delete pthread;
	pthread = NULL;
}

void Thread::run()
{
	int count = 0;
	int data = 0;

	while(1)
	{
		switch(typeofthread)
		{
		case CONSUMER:
		{
			cout<<name<<" waiting to acquire mutex ..."<<endl;
			unique_lock<mutex>unilock(locker);

			cout<<name<< " acquired mutex. "<<endl;
			cout<< name << " waiting for conditional signal variable."<<endl;

			untilReady.wait(unilock, [ ] { return Ready; } );
			cout<<name<<" received conditional variable signal. "<<endl;

			data = app.front();
			cout<<name<<" received data. "<<data<<endl;

			app.pop();
			Ready = false;

			cout<<name<<" released mutex ..."<<endl;
		}
		break;

		case PRODUCER:
		{
			cout<<name<<" waiting to acquire mutex ..." <<endl;

			unique_lock<mutex>unilock(locker);

			cout<<name<<" acquired mutex. "<<endl;

			if(32000 == count)
				count = 0;
			else
				app.push(++count);

			Ready = true;

			unilock.unlock();
			cout<< name<< " released mutex ... "<<endl;

			untilReady.notify_one();
			cout<<name<<" notified conditional signal."<<endl;
		}
		break;

		}
	}
}

void Thread::start()
{
	pthread = new thread (&Thread::run, this);
}

void Thread::stop()
{
	stopped = true;
}

void Thread::join()
{
	pthread->join();
}

void Thread::detach()
{
	pthread->detach();
}
