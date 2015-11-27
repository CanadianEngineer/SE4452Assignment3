// mySimpleCalc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "mySimpleCalc.h"
#include <iostream>

using namespace std;




int _tmain(int argc, _TCHAR* argv[])
{
	//create some stuff
	Calculator calc;
	int firstNumber = 10;
	int secondNumber = 5;
	
	//make some action happen!
	cout << firstNumber << " + " << secondNumber << " = "		//****ADD*****//
		<< calc.Add(firstNumber, secondNumber) << endl;
		
	cout << firstNumber << " + " << secondNumber << " = "		//****SUBTRACT*****//
		<< calc.Subtract(firstNumber, secondNumber) << endl;
	
	cout << firstNumber << " + " << secondNumber << " = "		//****MULTIPLY*****//
		<< calc.Multiply(firstNumber, secondNumber) << endl;

	system("pause");

	return 0;
}

