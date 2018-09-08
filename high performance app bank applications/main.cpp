/*
 * main.cpp
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */




#include<thread>
#include<iostream>
#include"Account.h"

using namespace std;


enum ThreadType{

	DEPOSITOR,
	WITHDRAWER
};

Account account(5000.00);

void threadProc(ThreadType typeofthread)
{
	while(1)
	{
		switch(typeofthread)
		{
			case DEPOSITOR:
			{
				cout<<" Depositor current balance is : "
						<<account.getBalance()<<endl;

				account.deposit(2000.00);

				cout<<"Depositor balance after deposit is : "
						<<account.getBalance()<<endl;
				this_thread::sleep_for(chrono::seconds(1));
				cout<<endl;
			}
			break;

			case WITHDRAWER:
			{
				cout<<" Withdrawer current balance is : "
						<<account.getBalance()<<endl;

				account.withdraw(1000.00);

				cout<<"Withdrawer balance after withdraw is : "
						<<account.getBalance()<<endl;
				this_thread::sleep_for(chrono::seconds(1));
				cout<<endl;
			}
			break;
		}
	}
}

int main()
{
	thread depositor ( threadProc, ThreadType::DEPOSITOR); //thread with two parameters (thread function, optional argument to provide thread)
	thread withdrawer ( threadProc, ThreadType::WITHDRAWER);

	depositor.join();
	withdrawer.join();

	return (0);
}

