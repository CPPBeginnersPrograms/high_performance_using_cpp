/*
 * main.cpp
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */




#include<iostream>
#include<thread>
#include<mutex>
#include"Account.h"

using namespace std;

enum ThreadType{
	DEPOSITOR, WITHDRAWER
};

Account account(5000.00);

mutex locker; //mutex locker is used to control a single thread to enter the critical section

void threadProc(ThreadType typeofthread)
{
	while(1)
	{
		switch(typeofthread)
		{
		case DEPOSITOR:
		{

			locker.lock();

			cout<<" DEPOSITOR current balance is : "<<
					account.getBalance()<<endl;

			account.deposit(2000.00);

			cout<<" DEPOSITOR balance after deposit is : "<<
					account.getBalance()<<endl;

			cout<< endl;

			locker.unlock();
			this_thread::sleep_for(chrono::seconds(1));
		}
		break;

		case WITHDRAWER:
		{
			locker.lock();

			cout<<" WITHDRAWER current balance is : "<<
					account.getBalance()<<endl;

			account.withdraw(1000.00);

			cout<<" WITHDRAWER balance after withdraw is : "<<
					account.getBalance()<<endl;

			cout<< endl;

			locker.unlock();
			this_thread::sleep_for(chrono::seconds(1));
		}
		break;
		}
	}
}

int main()
{
	thread dipositor(threadProc, ThreadType::DEPOSITOR);
	thread withdrawer(threadProc, ThreadType::WITHDRAWER);

	dipositor.join();
	withdrawer.join();

	return 0;

}
