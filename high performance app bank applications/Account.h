/*
 * Account.h
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include<iostream>
using namespace std;

class Account {
private:

	double balance;

public:
	Account(double balance); //constructor
	~Account();	// destructor

	//accessor function
	double getBalance();

	//member functions
	void deposit(double amount);
	void withdraw(double amount);

};

#endif /* ACCOUNT_H_ */
