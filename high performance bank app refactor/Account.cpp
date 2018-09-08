/*
 * Account.cpp
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "Account.h"

Account::Account(double balance) {
	// TODO Auto-generated constructor stub
	this->balance = balance;
}

Account::~Account() {
	// TODO Auto-generated destructor stub
}

double Account::getBalance()
{
	return balance;
}

void Account::deposit(double amount)
{
	balance = balance + amount;
}

void Account::withdraw(double amount)
{
	if(balance < amount)
	{
		cout<<" Insufficient funds : "<<endl;
		return;
	}
	else
		balance = balance - amount;
}
