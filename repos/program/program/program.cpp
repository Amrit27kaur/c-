#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	//int num1 = 10;
	//int num2 = 20;
	//int sum = num1 + num2;

	//int num1,num2;
	//int sum;
	//int a = 10, b = 20, sum;

	//int age;

	//cout << "hello\tworld\nI am learning c++\n";
	//cout << "Sum is:" << sum;

	//cout << "Enter first num";
	//cin >> num1;

	//cout << "Enter second num";
//	cin >> num2;

	//sum = num1 + num2;
	//cout << "Sum is:" << sum;

	//int num;

	//cout << "no";
	//cin >> num; 

	//if (num % 2 == 0)
	//{
	//	cout << "even\n";
	//}
	//else
	//	cout << "odd\n";
	//system("pause");

	int totalpay;
	int tax;
	int wage = 20; int hours;
	cout << "enter no of hour";
	cin >> hours;


	if (hours <= 40)
	{

		 totalpay = wage * hours;

	}
	else
	{
		int base = 40 * wage;
		int overtime = hours - 40;
		int pay = overtime * (1.5*wage);
		totalpay = pay + base;
		
	}

	tax = (totalpay * 20) / 100;
	totalpay = totalpay - tax;
	
	cout << "total" << totalpay;

	system("pause");
	return 0;
}