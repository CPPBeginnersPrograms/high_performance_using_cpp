/*
 * mobiletest.h
 *
 *  Created on: Sep 13, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef MOBILETEST_H_
#define MOBILETEST_H_


#include <gtest/gtest.h>
#include <gmock/gmock.h>

using ::testing::Return;

#include "mobile.h"

class Mockedcamera : public camera {
public:
	MOCK_METHOD0( ON,  bool() );
	MOCK_METHOD0( OFF, bool() );
	virtual ~Mockedcamera();
};



#endif /* MOBILETEST_H_ */
