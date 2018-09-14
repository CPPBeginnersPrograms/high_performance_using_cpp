/*
 * mobile.cpp
 *
 *  Created on: Sep 13, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "mobile.h"

mobile::mobile() {
	// TODO Auto-generated constructor stub
	pcamera = new camera;
}

mobile::mobile(camera *pcamera) // overloaded constructor with camera class object.
								//this technique is called constructor dependency injection
{
	this->pcamera = pcamera;
}

mobile::~mobile() {
	// TODO Auto-generated destructor stub
}

bool mobile::pwoerOn()
{
	cout<<" Inside mobile power on method : "<<endl;

	if(pcamera->On())
	{
		cout<<"power on logic goes here : "<<endl;
		return true;
	}

	cout<<"power on failure logic goes here: "<<endl;
	return false;
}

bool mobile::powerOff()
{
	cout<<" Inside mobile power off method : "<<endl;

	if(pcamera->Off())
	{
		cout<<"power off logic goes here : "<<endl;
		return true;
	}

	cout<<"power off failure logic goes here: "<<endl;
	return false;
}

