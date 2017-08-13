// MultiplicationTables.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;


int main()
{
	int tableArray[9][9];

	for (int i = 0; i < 9; i++)
	{
		tableArray[0][i] = i + 1;// creating our top row for table
	}

	for (int i = 0; i < 9; i++)
	{
		tableArray[i][0] = i + 1;// creating our left column for table
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)// for loop to created our middle rows up to 9*9
		{
			tableArray[i][j] = tableArray[0][j] * tableArray[i][0];
		}
	}
	for (int i = 0; i < 9;i++)// nested for loop to print out our table
	{
		cout << "\n";
		for (int j = 0; j < 9; j++)
		{
			cout <<"\t"<< tableArray[i][j];
		}
	}

	
	


	





	system("pause");
    return 0;
}

