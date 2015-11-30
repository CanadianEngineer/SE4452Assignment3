//for setup follow this tutorial
// http://www.bogotobogo.com/cplusplus/google_unit_test_gtest.php

//some house keeping stuff
#include "gtest/gtest.h"
#include "simpleMathThing.h"
#include <iostream>

using namespace std;

//create calculator object
Calculator c;

TEST(addingTests,addPositive)  //TEST(TEST_CASE, SPECIFIC_CASE){...}
{
	EXPECT_EQ(2, c.Add(1,1));
	EXPECT_EQ(2047, c.Add(1024,1024)); 
	ASSERT_EQ(2047, c.Add(1024,1024)); 
	EXPECT_EQ(2, c.Add(-2,4)); //if failed, will stop
}

TEST(addingTests,addNegative)
{
	EXPECT_EQ(-2, c.Add(-1,-1));
}

// addingTests is the test case name
// addPositive/negative is the specific case
// there are 4 tests in total for adding tests

TEST(subtractTests,subtractPositive)
{
	EXPECT_EQ(0, c.Subtract(1,1));
}

TEST(subtractTests,subtractNegative)
{
	EXPECT_EQ(0, c.Subtract(-1,-1));
}

TEST(multiplyTests,multiplyPositive)
{
	EXPECT_EQ(4, c.Multiply(2,2));
}

TEST(multiplyTests,multiplyNegative)
{
	EXPECT_EQ(9, c.Multiply(-3,-3));
	EXPECT_EQ(-9, c.Multiply(-3,3));
}

TEST(powerTest, positivePowers)
{
	EXPECT_EQ(8, c.Power(2,3));
	EXPECT_EQ(16, c.Power(2, 4));
}

TEST(powerTest, negativePowers)
{
	EXPECT_EQ(-32, c.Power(-2,5));
	EXPECT_EQ(-8, c.Power(-2, 3));	
}

TEST(EvilAdd, addPositive)
{
	EXPECT_EQ(25, c.EvilAdd(20,5));
	EXPECT_EQ(2, c.EvilAdd(1,1));
}
