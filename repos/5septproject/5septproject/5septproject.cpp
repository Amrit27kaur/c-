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
	int counter = 0,counter1=0;
	int avg,avg1;

	cout << "enter the number";
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		cout << "number is ";
		cin >> num;

		if (num > 0)
		{
			counter++;
			totalNum = totalNum + num;
			
		}
		else if (num < 0)
		{
			counter1++;
			totalNum1 = totalNum1 + num;
		
		}
		else
		{
			cout << "zero is nothing";
		}
	} 
	cout << " total positive number is " << totalNum << " total negative " << totalNum1;;
	avg = totalNum / counter;
	avg1 = totalNum1 / counter1;
	cout << "positve avg" << avg <<"negative "<<avg1;
}


