/*
 * RPN.h
 *
 *  Created on: Sep 12, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef SRC_RPN_H_
#define SRC_RPN_H_
#include<iostream>
#include<sstream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
#include<iterator>

using namespace std;

class RPN {
public:
	double evaluate(string rpnmathtexpression);
	RPN();
	~RPN();
};

#endif /* SRC_RPN_H_ */
