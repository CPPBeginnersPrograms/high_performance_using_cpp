/*
 * main.cpp
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */




#include"Thread.h"
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	Thread t1,t2,t3; //creating Thread objects

	t1.start();
	t2.start();
	t3.start();
	cout<<"started : "<<endl;

//	this_thread::sleep_for(chrono::seconds(3));



	t1.detach();
	t2.detach();
	t3.detach();
	cout<<" Detached "<<endl;

	this_thread::sleep_for(chrono::seconds(3));


	cout<<"stopping : "<<endl;
	t1.stop();
	t2.stop();
	t3.stop();

	this_thread::sleep_for(chrono::seconds(3));

	return (0);
}
