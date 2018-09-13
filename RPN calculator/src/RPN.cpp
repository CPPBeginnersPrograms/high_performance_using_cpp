/*
 * RPN.cpp
 *
 *  Created on: Sep 12, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "RPN.h"

RPN::RPN() {
	// TODO Auto-generated constructor stub

}

RPN::~RPN() {
	// TODO Auto-generated destructor stub
}

double RPN::evaluate(string rpnmathexpression)
{
	double firstNum, secondNum, result;

	stack<double>numberStack;

	stringstream rpnmathtoken(rpnmathexpression); //stringstream basically allows you to treat a string object like a stream.
	istream_iterator<string>begin(rpnmathtoken); //Istream iterators are input iterators that read successive elements from an input stream.
	istream_iterator<string> end;

	vector<string> rpntokens(begin, end);
	vector<string>::iterator pos = rpntokens.begin();

	while(pos != rpntokens.end())
	{
		if(*pos == "+")
		{
			firstNum = numberStack.top();
			numberStack.pop();
			secondNum = numberStack.top();
			numberStack.pop();
			result = firstNum + secondNum;
			numberStack.push(result);

		}
		else if(*pos == "-")
		{
			firstNum = numberStack.top();
			numberStack.pop();
			secondNum = numberStack.top();
			numberStack.pop();
			//(firstNum > secondNum) ? result = firstNum - secondNum : result = secondNum - firstNum;
			result = firstNum - secondNum;
			numberStack.push(result);

		}
		else if(*pos == "*")
		{
			firstNum = numberStack.top();
			numberStack.pop();
			secondNum = numberStack.top();
			numberStack.pop();
			result = firstNum * secondNum;
			numberStack.push(result);

		}
		else if(*pos == "/")
		{
			firstNum = numberStack.top();
			numberStack.pop();
			secondNum = numberStack.top();
			numberStack.pop();
			//(firstNum > secondNum) ? result = firstNum / secondNum : result = secondNum / firstNum;
			result = firstNum / secondNum;
			numberStack.push(result);

		}
		else
			numberStack.push( stod(*pos));
			++pos;
	}
	result = numberStack.top();
	return result;
}
