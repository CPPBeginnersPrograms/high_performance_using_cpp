/*
 * main.cpp
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */
#include"Account.h"
#include "Threads.h"

using namespace std;


int main()
{
	Account account(5000.00);

	Thread depositor(&account, ThreadType::DEPOSITOR);
	Thread withdrawer(&account, ThreadType::WITHDRAWER);


	depositor.start();
	withdrawer.start();

	depositor.join();
	withdrawer.join();

	return 0;
}
