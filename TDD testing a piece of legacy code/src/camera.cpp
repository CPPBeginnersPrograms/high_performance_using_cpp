/*
 * camera.cpp
 *
 *  Created on: Sep 13, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "camera.h"

camera::camera() {
	// TODO Auto-generated constructor stub

}

camera::~camera() {
	// TODO Auto-generated destructor stub
}

bool camera::On()
{
	cout<<" Camera on, hardware instructions happen here : "<<endl;
	return true;
}

bool camera::Off()
{
	cout<< " Camera off, hardware instructions happen here : "<<endl;
	return true;
}
