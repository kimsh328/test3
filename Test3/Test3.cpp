// Test3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int integerArray[5] = { 1, 2, 3, 4, 2 };
	int i;
	for (i = 0; i < 5; i++)
	{
		cout << "value at position " << i << " :  " << integerArray[i] << endl;
		integerArray[i]++;
	}
	for (i = 0; i < 5; i++)
	{
		cout << "value at position " << i << " :  " << integerArray[i] << endl;
	}
	cout << "hello world";

	return 0;
}


