#include "gtest/gtest.h"
#include "simpleMathThing.h"

TEST(test,add)
{
	Calculator c;
	EXPECT_EQ(2, c.Add(1,1));
	system("pause");
}

TEST(test,add1)
{
	Calculator c;
	EXPECT_EQ(2, c.Add(1,1));
	system("pause");
}