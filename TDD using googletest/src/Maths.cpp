/*
 * Maths.cpp
 *
 *  Created on: Sep 11, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "Maths.h"

Maths::Maths() {
	// TODO Auto-generated constructor stub

}

Maths::~Maths() {
	// TODO Auto-generated destructor stub
}

int Maths::add(int num1, int num2)
{
	return num1+num2;
}

int Maths::divide(int num1, int num2)
{
	return num1/num2;
}

int Maths::multiply(int num1, int num2)
{
	return num1*num2;
}

int Maths::subtract(int num1, int num2)
{
	return (num1 > num2) ? num1 - num2 : num2 - num1;
}
