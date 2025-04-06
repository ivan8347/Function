#include"Shifts.h"

void ShiftLeft(int arr[], const int n, int tab)
{

	for (int i = 0; i < tab; i++)
	{
		int a = arr[0];

		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = a;
	}
}
void ShiftLeft(double arr[], const int n, int tab)
{

	for (int i = 0; i < tab; i++)
	{
		double a = arr[0];

		for (int j = 0; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = a;
	}

}
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int tab)
{
	for (int k = 0; k < tab; k++)
	{
		for (int i = 0; i < ROWS; i++)
		{
			int a = arr[i][0];
			for (int j = 0; j < COLS - 1; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][COLS - 1] = a;
		}
	}
}
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int tab)
{

	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, tab);
	}*/
	ShiftLeft(arr[0], ROWS * COLS, tab);
}

void ShiftRight(int arr[], const int n, int tab)
{
	for (int i = 0; i < tab; i++)
	{
		int a = arr[n - 1];

		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = a;
	}
}
void ShiftRight(double arr[], const int n, int tab)
{
	ShiftRight(arr, n, n - tab);
}
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int tab)
{
	for (int k = 0; k < tab; k++)
	{
		for (int i = 0; i < ROWS; i++)
		{
			double a = arr[i][COLS - 1];

			for (int j = COLS - 1; j > 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = a;
		}
	}
}
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int tab)
{
	ShiftLeft(arr[0], ROWS * COLS, ROWS * COLS - tab);
}