/*
 * Thread.h
 *
 *  Created on: Sep 5, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef THREAD_H_
#define THREAD_H_
#include<mutex>
#include<iostream>
#include<thread>
using namespace std;



class Thread {
private:
	thread *pThread; //declaring the thread
	bool stopped; //bool var
	void run(); //private run function


public:
	Thread(); //constructor
	~Thread();// destructor

	void start(); //memeber functions
	void stop();
	void join();
	void detach();
	mutex locker;
};

#endif /* THREAD_H_ */
