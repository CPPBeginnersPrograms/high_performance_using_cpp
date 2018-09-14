/*
 * camera.h
 *
 *  Created on: Sep 13, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef SRC_CAMERA_H_
#define SRC_CAMERA_H_
#include<iostream>

using namespace std;
class camera {
public:
	camera();
	~camera();
	virtual bool On();
	virtual bool Off();
};

#endif /* SRC_CAMERA_H_ */
