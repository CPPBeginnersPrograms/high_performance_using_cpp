/*
 * RPNTest.cpp
 *
 *  Created on: Sep 13, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "RPNTest.h"

TEST(RPNTest, addtest)
{
	RPN cal;
	double expectedResult =  33.5;
	double actualResult = cal.evaluate("23.5 10.0 +");

	EXPECT_EQ(expectedResult, actualResult);
}

TEST(RPNTest, subtest)
{
	RPN cal;
	double expectedResult =  -13.5;
	double actualResult = cal.evaluate("23.5 10.0 -");

	EXPECT_EQ(expectedResult, actualResult);
}

TEST(RPNTest, multest)
{
	RPN cal;
	double expectedResult =  235;
	double actualResult = cal.evaluate("23.5 10.0 *");

	EXPECT_EQ(expectedResult, actualResult);
}

TEST(RPNTest, divtest)
{
	RPN cal;
	double expectedResult =  0.42;
	double actualResult = cal.evaluate("23.5 10.0 /");

	ASSERT_NEAR(expectedResult, actualResult,4);
}

TEST(RPNTest, complextest)
{
	RPN cal;
	double expectedResult = 2.33333 ;
	double actualResult = cal.evaluate("25 * 4 + 72 - 1 + /");

	ASSERT_NEAR(expectedResult, actualResult,4);
}

int main(int argc, char *argv[])
{
	testing::InitGoogleTest(&argc,argv);

	return RUN_ALL_TESTS();
}
