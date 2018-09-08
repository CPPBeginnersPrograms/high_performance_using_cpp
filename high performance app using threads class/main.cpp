/*
 * main.cpp
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */




// #include<thread> class
//thread instance(thread_procedure)
//this_thread::get_id()
//thread::join()


#include<thread>
#include<iostream>
#include<mutex>

using namespace std;

mutex locker;

void threadproc()
{

	for(int count = 0; count < 3; count++)
	{
		locker.lock();
		cout<<"Message => "<<count<< " from "<<this_thread::get_id()<<endl;
		locker.unlock();
	}
}

int main()
{
	thread t1(threadproc);
	thread t2(threadproc);
	thread t3(threadproc);

	t1.join();
	t2.join();
	t3.join();

	return (0);

}
