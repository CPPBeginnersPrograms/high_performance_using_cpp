/*
 * Thread.h
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef THREADS_H_
#define THREADS_H_
#include<iostream>
#include<thread>
#include<mutex>
#include"Account.h"
using namespace std;

enum ThreadType{
	DEPOSITOR,WITHDRAWER
};


class Thread {
private:
	thread *pthread;
	Account *paccount;
	static mutex locker;
	ThreadType typeofthread;
	bool stopped;
	void run();

public:
	Thread(Account *paccount, ThreadType typeofthread);
	~Thread();
	void start();
	void stop();
	void join();
	void detach();
};

#endif /* THREADS_H_ */
