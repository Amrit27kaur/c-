// 5septproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{

	/*int Grade;
	int score;
	int total;
	int totalSum = 0;
	int totalScore=0;
	int avg;
    cout << "how many excerise to input?\n"; 
	cin >> Grade;
	for (int i = 1; i <= Grade; i++)
	{
		cout << "score received for exercise "<< i<< ":";
		cin >> score;
		cout << "total point possible for exercise "<<i<< ":";
		cin >> total;
		totalScore = totalScore + score;
		totalSum = totalSum + total;
	}cout << "total is " << totalScore <<" out of " <<totalSum;
	cout << endl;
	avg = totalScore * 100 / totalSum;
	cout << "avg is " << avg; */
 
	int number;
	int num;
	int totalNum=0;
	int totalNum1 = 0;
	cout << "enter the number";
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		cout << "number is ";
		cin >> num;

		if (num > 0)
		{
			totalNum = totalNum + num;
			cout << " total positive number is " << totalNum;
		}
		else if (num < 0)
		{

			totalNum1 = totalNum1 + num;
		cout<< " total negative " << totalNum1;
		}
	}
}


