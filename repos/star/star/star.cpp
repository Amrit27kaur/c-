// star.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
  int i, j,space;
	

	for (i = 1; i <= 5; i++)
	{
		
		for (space = i; space < 5; space++)
		{
			cout << "*";
		}

		for (j = 1; j <= i; j++)
		{
			cout << " ";
		}

		for (j = 1; j <= i-1; j++)
		{
			cout << " ";
		}

		for (space = i; space < 5; space++)
		{
			cout << "*";
		}

		for (j = 1; j <= i; j++)
		{
			cout << " ";
		}

		for (j = 1; j <= i - 1; j++)
		{
			cout << " ";
		}
		
		cout << endl;
	}

	for (i = 4; i >= 1; i--)
	{

		for (space = i; space < 5; space++)
		{
			cout << "*";
		}

		for (j = 1; j <= i; j++)
		{
			cout << " ";
		}

		for (j = 1; j <= i - 1; j++)
		{
			cout << " ";
		}

		for (space = i; space < 5; space++)
		{
			cout << "*";
		}

		for (j = 1; j <= i; j++)
		{
			cout << " ";
		}

		for (j = 1; j <= i - 1; j++)
		{
			cout << " ";
		}

		cout << endl;
	}


	system("pause");
	}

	//int i, j, space;
	//for (i = 1; i <= 5; i++)
	//{
	//	for (space = i; space < 5; space++)
	//	{
	//cout << " ";
		//}
	//	for (j = 1; j <= i; j++)
	//	{
		//	cout << "*";
	//	}
//		for (j = 1; j <= i - 1; j++)
	//	{
		//	cout << "*";
	//	}
	//	cout << endl;
	//}

	//for (i = 4; i >= 1; i--)
	//{
	//	for (space = i; space < 5; space++)
		//{
			//cout << " ";
	//	}
		//for (j = 1; j <= i; j++)
	//	{
	//		cout << "*";
	//	}
	//	for (j = 1; j <= i - 1; j++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}

	//system("pause");




