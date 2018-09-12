/*
 * main.cpp
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */


#include<iostream>
#include<future>

using namespace std;

void sayHello(promise<string> prom)
{
	prom.set_value("Hello concurrency!"); //we use promise method to pass the message async.
}

int main()
{
	promise<string> promobj;

	future<string> futureobj = promobj.get_future(); // main thread retrives the future obj.
	async(launch::async, sayHello, move(promobj)); // move obj is used to transfer the ownership, once the move is
												//called promobj will no longer be accessed in the main thread.
	cout<<futureobj.get()<<endl; // it will be blocked till the sayHello function calls the promise set_value method.
								//however future get method must only be called once as the corresponding promiseobj will
								// be destructed after the call to the future get method.


	return 0;
}
