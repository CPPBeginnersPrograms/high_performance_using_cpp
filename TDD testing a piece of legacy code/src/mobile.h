/*
 * mobile.h
 *
 *  Created on: Sep 13, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef SRC_MOBILE_H_
#define SRC_MOBILE_H_
#include"camera.h"

class mobile {
private:
	camera *pcamera;

public:
	mobile();
	mobile(camera *pcamera);
	~mobile();
	bool pwoerOn();
	bool powerOff();
};

#endif /* SRC_MOBILE_H_ */
