/*
 * Thread.h
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef THREAD_H_
#define THREAD_H_

#include<iostream>
#include<string>
#include<mutex>
#include<thread>

using namespace std;

enum ThreadType{
	READER, WRITER
};
class Thread {
private:
	thread *pthread;
	string name;
	ThreadType typeofthread;
	static int count;
	static mutex commonlock;
	bool stopped;
	void run();


public:
	Thread(ThreadType typeofthread);
	~Thread();
	void start();
	void stop();
	void join();
	void detach();
	int getCount();
	int updateCount();
};

#endif /* THREAD_H_ */
