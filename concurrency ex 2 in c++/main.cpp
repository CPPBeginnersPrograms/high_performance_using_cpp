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
	prom.set_value("Hello concurrency!");
}

int main()
{
	promise<string> promobj;

	future<string> futureobj = promobj.get_future();
	async(launch::async, sayHello, move(promobj));
	cout<<futureobj.get()<<endl;

	cout<<"delete this";

	return 0;
}
