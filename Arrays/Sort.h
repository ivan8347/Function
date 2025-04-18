#pragma once
#include"Sort.h"

template<typename T>
void Sort(T arr[], const int n);
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)

		{
			for (int k = 0; k < COLS; k++)
			{
				if (arr[k][i] < arr[k][j])
				{
					T  buffer = arr[k][i];
					arr[k][i] = arr[k][j];
					arr[k][j] = buffer;
				}
			}
		}
	}
}

template<typename T>
void Rev(T arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}cout << endl;
}
template<typename T>
void Rev(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = COLS - 1; j >= 0; j--)
		{
			cout << arr[i][j] << "\t";
		}cout << endl;
	}
}

