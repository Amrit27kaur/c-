// array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
  /*	int num, num1, result;
	cout << "enter user 1st number";
	cin >> num;
	cout << "enter user 2nd number";
	cin >> num1;
	try {
		result = num / num1;
		
	}
	catch (exception)
	{
		cout << "not divided by zero";
	}cout << "result is: " << result;  */


	int previousSalery;
	int sixMonth;
	double retroactive;
	double totalRetro;
	double totalSalery;
	cout << "enter previous annual salery";
	cin >> previousSalery;
	sixMonth = previousSalery / 2;
	cout << "6 month salery" << sixMonth;
	retroactive = (sixMonth*7.6) / 100;
	totalRetro = sixMonth + retroactive;
	cout << "pay increase" << totalRetro; 
	totalSalery = sixMonth + totalRetro;
	cout << totalSalery;
}