/*
 * main.cpp
 *
 *  Created on: Sep 10, 2018
 *      Author: raswantkoushikpeesapati
 */

#include<iostream>
#include<functional>
#include<future>

using namespace std;

int add(int num, int num1)
{
	return num + num1;
}

int main(){

	packaged_task<int()>addTask(bind(add,15,34)); // bind function used to bind the thread funtion and its arguments
												// with the respective task, since the arguments are bound upfront there
												//is no need to provide the arguments again. like in the packaged-task
												// thread library program.
	future<int>output = addTask.get_future();

	addTask();
	cout<<"The sum is : "<<output.get();

	return 0;
}

