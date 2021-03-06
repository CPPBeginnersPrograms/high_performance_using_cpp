/*
 * Thread.h
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef THREAD_H_
#define THREAD_H_
#include<string>
#include<iostream>
#include<thread>
#include<queue>
#include<mutex>
#include<condition_variable>


using namespace std;

enum ThreadType{
	PRODUCER,CONSUMER
};

class Thread {
private:
	static mutex locker;
	static condition_variable untilReady;
	static bool Ready;
	static queue<int>app;
	thread *pthread;
	ThreadType typeofthread;
	bool stopped;
	string name;
	void run();


public:
	Thread(ThreadType typeofthread);
	~Thread();
	void start();
	void stop();
	void join();
	void detach();

};

#endif /* THREAD_H_ */
