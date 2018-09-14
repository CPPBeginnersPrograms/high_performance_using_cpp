/*
 * mobiletest.cpp
 *
 *  Created on: Sep 13, 2018
 *      Author: raswantkoushikpeesapati
 */




#include"mobiletest.h"
#include"mobile.h"

using namespace std;

//the main befit of this approach is CUT can be tested before dependencies are implemented
//which help test 60 - 70 % of the code without dependencies.
//(but this method reduces the time to market)
//here when you pass the test code the print statements from its dependency class prints. but with gmock it wont.

//TEST(mobile, powertesting)
//{
//	mobile Mobile;
//
//	ASSERT_TRUE(Mobile.pwoerOn());
//}

//so the best way is to test using gmock where, we can enable dependency injection in the mobile.cpp file
//so you can unit test code by isolating its dependencies.

TEST(mobile, powertesting)
{
	//mocking
	Mockedcamera *pMockedcamera = new Mockedcamera;

	//stubbing
	EXPECT_CALL(*pMockedcamera, ON() ).Times(1).WillOnce(Return(true));

	//constructor dependency injection

	mobile Mobile(pMockedcamera);

	ASSERT_TRUE(Mobile.pwoerOn());

	delete pMockedcamera;
}

Mockedcamera::~Mockedcamera()
{

}

int main(int argc, char *argv[])
{
	testing::InitGoogleMock(&argc, argv);
//	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();

}


