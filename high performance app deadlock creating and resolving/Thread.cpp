/*
 * Thread.cpp
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "Thread.h"

mutex Thread::commonlock; //private members

int Thread::count; // private members

Thread::Thread(ThreadType typeofthread) {
	// TODO Auto-generated constructor stub
	this->typeofthread = typeofthread;
	(typeofthread == READER) ? name = "READER" : name = "WRITER";
	stopped = false;
	pthread = NULL;

}

Thread::~Thread() {
	// TODO Auto-generated destructor stub
	delete pthread;
	pthread = NULL;
}

int Thread::getCount()
{
	cout<< name << " is waiting for lock in getcount() method ..."<<endl;
	lock_guard<mutex> locker(commonlock);
	cout<< name << " has acquired lock in getcount() method ..."<<endl;
	cout<<endl;
	return count;
}

int Thread::updateCount()
{
	int value = getCount();
	cout<< name << " is waiting for lock in updatecount() method..."<<endl;
	lock_guard<mutex> locker(commonlock);
	cout<< name << " has acquired lock in updatecount() method..."<<endl;
	//int value = getCount();  //this creates a deadlock scenario here
	count = ++value;
	cout<<endl;
	return count;
}
void Thread::run()
{
	while(1)
	{
		switch(typeofthread)
		{
		case READER:
			cout<< name << " => value of count from getCount() method is : "<<getCount()<<endl;
			this_thread::sleep_for(chrono::seconds(1));
			break;
		case WRITER:
			cout<<name<< " => value of count from updateCount() method is : "<<updateCount()<<endl;
			this_thread::sleep_for(chrono::seconds(1));
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
