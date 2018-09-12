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
{								//(launch::async, sayHello) // it lets the async obj launch the function in separate thread.
	future<void> futureobj = async (launch::deferred, sayHello); // it lets the async obj launch the method or
																//function without creating a separate thread.
	futureobj.wait();

	return 0;

}

void sayHello( )
{
	cout<<" This is Concurrency in C++"<<endl;
}
