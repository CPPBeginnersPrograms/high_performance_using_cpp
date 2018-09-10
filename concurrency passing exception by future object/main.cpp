/*
 * main.cpp
 *
 *  Created on: Sep 10, 2018
 *      Author: raswantkoushikpeesapati
 */


#include<iostream>
#include<future>
#include<climits>
#include<exception>

using namespace std;

void add(int num1, int num2, promise<int> output)
{
	try
	{
	if((INT_MAX == num1) || (INT_MAX == num2))
		output.set_exception(current_exception());
	}
	catch(...)
	{

	}

	output.set_value(num1 + num2);
}

int main()
{
	try
	{
		promise<int> promobj;
		future<int> output = promobj.get_future();
		async(launch::deferred, add, INT_MAX, INT_MAX, move(promobj));
		cout<<output.get();
	}
	catch(exception e)
	{
		cerr << "Exception occured"<<endl;
	}

	return 0;
}

