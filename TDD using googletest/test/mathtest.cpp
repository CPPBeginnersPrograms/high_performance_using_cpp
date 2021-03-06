/*
 * mathtest.cpp
 *
 *  Created on: Sep 11, 2018
 *      Author: raswantkoushikpeesapati
 */




#include<gtest/gtest.h>
#include "Maths.h"

TEST(mathtest, testAddition) // (test module name, test case name)
{
	Maths math;

	int expectedResult = 34;
	int actualResult = math.add(12,22);
	EXPECT_EQ ( expectedResult, actualResult);


}

TEST(mathtest, testdivision)
{
	Maths math1;

	int expectedResult = 6;
	int actualResult = math1.divide(12,2);
	EXPECT_EQ ( expectedResult, actualResult);
}

TEST(mathtest, testsubtraction)
{
	Maths math2;

	int expectedResult = 10;
	int actualResult = math2.subtract(12,2);
	EXPECT_EQ ( expectedResult, actualResult);
}


TEST(mathtest, testsubtraction2)
{
	Maths math2;

	int expectedResult = 10;
	int actualResult = math2.subtract(2,12);
	EXPECT_EQ ( expectedResult, actualResult);
}

TEST(mathtest, testmultiplication)
{
	Maths math3;

	int expectedResult = 24;
	int actualResult = math3.multiply(12,2);
	EXPECT_EQ ( expectedResult, actualResult);
}
int main(int argc, char *argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

//#SRC = src/Maths.cpp test/mathtest.cpp
//#
//#OBJS = Maths.o mathtest.o
//#
//#CXXFLAGS = -std=c++14
//#
//#LIBS = -pthread libgtest.a
//#
//#INC = -I TDD using googletest/googletesting \
//#	  -I googletesting/gtest \
//#	  -I src \
//#	  -I test
//#
//#
//#EXE = calc.exe
//#
//#all: $(OBJS)
//#	 g++ -o $(EXE) $(CFLAGS) $(OBJS) $(LIBS)
//#
//#Maths.o: src/Maths.cpp
//#	g++ -c -o Maths.o src/Maths.cpp
//#
//#mathtest.o: test/mathtest.cpp
//#	g++ -c -o mathtest.o test/mathtest.cpp $(INC)
//#
//#.PHONY: clean
//#
//#clean:
//#	rm -f *.o *.exe
//#
