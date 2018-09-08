/*
 * main.cpp
 *
 *  Created on: Sep 6, 2018
 *      Author: raswantkoushikpeesapati
 */


#include<iostream>
#include"Thread.h"

using namespace std;

int main()
{
	Thread reader(ThreadType::READER);
	Thread writer(ThreadType::WRITER);


	reader.start();
	writer.start();


	reader.join();
	writer.join();

	return 0;
}
