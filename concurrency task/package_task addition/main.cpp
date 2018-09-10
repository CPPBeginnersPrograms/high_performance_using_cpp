/*
 * main.cpp
 *
 *  Created on: Sep 10, 2018
 *      Author: raswantkoushikpeesapati
 */

#include<iostream>
#include<future>
#include<functional>

using namespace std;

int main()
{
	packaged_task<int (int,int)>
		addTask( [ ] (int firstNum, int secondNum) { return firstNum + secondNum;});

	future<int>output = addTask.get_future();

	//addTask(15,20);
	addTask(20,24);

	cout<< " the sum is : "<<output.get() <<endl;
	//cout<< " the sume is : "<<output.get()<<endl;

	return 0;
}






