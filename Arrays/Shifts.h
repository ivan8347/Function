#pragma once
#include"Shifts.h"
#include"constants.h"

template<typename T>
void ShiftLeft(T arr[], const int n, int tab);
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int tab);

template<typename T>
void ShiftRight(T arr[], const int n, int tab);
template<typename T>
void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS,int tab);

template <typename T>
void ShiftLeft(T arr[], const int n, int tab)
{

	for (int i = 0; i < tab; i++)
	{
		T a = arr[0];

		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = a;
	}
}
template <typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS,int tab)
{


	ShiftLeft(arr[0], ROWS * COLS, tab);

}

template<typename T>
void ShiftRight(T arr[], const int n, int tab)
{
	ShiftRight(arr, n, n - tab);
}
template<typename T>
void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int tab)
{
	ShiftLeft(arr[0], ROWS * COLS, ROWS * COLS - tab);
}
