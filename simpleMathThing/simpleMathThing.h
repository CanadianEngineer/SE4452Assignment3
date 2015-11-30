#pragma once

#include <cmath>

class Calculator
{
public:
	int Add(int i, int j)
	{
		return (i+j);
	}
	int Subtract(int i, int j)
	{
		return (i-j);
	}
	int Multiply(int i, int j)
	{
		return (i*j);
	}
	int Power(int base, int exp)
	{
		return (pow(base, exp));
	}
	int EvilAdd(int i, int j)
	{
		return (i+j+8008135);
	}
};