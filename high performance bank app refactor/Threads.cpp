/*
 * Thread.cpp
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "Threads.h"
mutex Thread::locker;

Thread::Thread(Account *paccount, ThreadType typeofthreads) {
	// TODO Auto-generated constructor stub
	this->paccount = paccount;
	this->typeofthread = typeofthreads;
	pthread = NULL;
	stopped = false;
}

Thread::~Thread() {
	// TODO Auto-generated destructor stub
	delete pthread;
	pthread = NULL;
}

void Thread::run()
{
	while(1)
	{
		switch(typeofthread)
		{
		case DEPOSITOR:
			locker.lock();
			cout<<" DEPOSITOR current Balance is : "<<paccount->getBalance()<<endl;

			paccount->deposit(2000.00);

			cout<<" DEPOSITOR Balance after deposit is : "<< paccount->getBalance()<<endl;

			cout<<endl;

			locker.unlock();
			this_thread::sleep_for(chrono::seconds(1));
		break;

		case WITHDRAWER:
			locker.lock();
			cout<<" WITHDRAWER current Balance is : "<<paccount->getBalance()<<endl;

			paccount->withdraw(1000.00);

			cout<<" WITHDRAWER Balance after withdraw is : "<< paccount->getBalance()<<endl;

			cout<<endl;

			locker.unlock();
			this_thread::sleep_for(chrono::seconds(1));
		break;
		}
	}
}

void Thread::start()
{
	pthread = new thread(&Thread::run, this);
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
