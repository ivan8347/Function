#pragma once
#include"Statistics.h"
#include"constants.h"
template<typename T>
T Sum(T arr[], const int n);
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Avg(T arr[], const int n);
template<typename T>
T Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Min(T arr[], const int n);
template<typename T>
T Min(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Max(T arr[], const int n);
template<typename T>
T Max(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	} return sum;
}

template<typename T>
T Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>
T Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (COLS * ROWS);
}
template<typename T>
T Min(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}return min;
}
template<typename T>
T Min(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
	}return min;
}

template<typename T>
T Max(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
	}return max;
}
template<typename T>
T Max(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
	}return max;
}

