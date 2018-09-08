/*
 * main.cpp
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */


#include<iostream>
#include<future>

using namespace std;

void sayHello();

int main()
{
	future<void> futureobj = async (launch::async, sayHello);
	futureobj.wait();

	return 0;

}

void sayHello( )
{
	cout<<" This is Concurrency in C++"<<endl;
}
