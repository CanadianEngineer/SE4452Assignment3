// testMyCalc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "mySimpleCalc.h"


TEST(testCalc, testAdd)
{
	Calculator c;
	EXPECT_EQ(2,c.Add(1,1));

//	system("pause");
}

TEST(testCalc, testSub)
{
	Calculator c;
	EXPECT_EQ(1,c.Subtract(1,1));
	//system("pause");
}

TEST(testCalc, testMul)
{
	Calculator c;
	EXPECT_EQ(3,c.Multiply(1,3));
//	system("pause");
}

TEST(testCalc, empty)
{

//	system("pause");
}


/*
int _tmain(int argc, _TCHAR* argv[])
{
	testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
*/
