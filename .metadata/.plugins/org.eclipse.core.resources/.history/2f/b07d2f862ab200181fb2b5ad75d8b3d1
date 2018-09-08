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
	Thread producer(ThreadType::PRODUCER);
	Thread consumer(ThreadType::CONSUMER);

	producer.start();
	consumer.start();

	producer.join();
	consumer.join();

	return 0;
}

