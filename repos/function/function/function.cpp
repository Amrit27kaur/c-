// function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void sum(int a)
{
	if (a % 2 == 0)
	{
		cout << "even";

    }
	else
	{
		cout << "odd";
	}
}
int main()
{
	sum(10);
	return 0;
}


