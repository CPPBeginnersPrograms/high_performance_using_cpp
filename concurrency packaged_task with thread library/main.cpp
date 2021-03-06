/*
 * main.cpp
 *
 *  Created on: Sep 10, 2018
 *      Author: raswantkoushikpeesapati
 */


#include<iostream>
#include<thread>
#include<future>

using namespace std;

int add(int num1, int num2)		// add function
{
	return num1 + num2;		//returning the value of the two integers.
}

int main()
{
	packaged_task<int (int,int)> addTask(add); // creating a packaged_task instance and passing add function in it.

	future<int> output = addTask.get_future();// creating future instance and passing get_future method to
													// packaged_task instance.

	thread addt1( move(addTask), 30,90); // creating a thread passing the move funtion and values into the thread.

	addt1.join();

	cout<<" The sum is : "<<output.get();

	return 0;
}




