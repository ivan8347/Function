#include<iostream>
#include<FILLRand.h>
#include<Print.h>
#include<constants.h>
#include"Statistics.h"
#include"Shifts.h"
#include"Sort.h"

using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int tab;
	FILLRand(arr, n);
	cout << "Вывод массива arr :  ";
	Print(arr, n); cout << endl;
	cout << "Вывод массива по возрастанию :  ";
	Sort(arr, n);
	Print(arr, n); cout << endl;
	cout << "Сумма элементов массива :  " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива :  " << Avg(arr, n) << endl;
	cout << "Минимальное значение массива :  " << Min(arr, n) << endl;
	cout << "Максимальное значение массива :  " << Max(arr, n) << endl;
	cout << "Введите количество сдвигов влево :  ";cin >> tab;
	ShiftLeft(arr, n, tab);
	cout << "Сдвиг массива влево :  ";
	Print(arr, n); cout << endl;
	cout << "Введите количество сдвигов вправо : ";
	cin >> tab;
	ShiftRight(arr, n, tab) ;
	cout << "Сдвиг массива вправо : ";
	Print(arr, n);
	cout << "\n\n\n";
	cout << "delimetr" << endl;
	cout << "\n\n\n";

	double i_arr_1[ROWS][COLS];	 
	FILLRand(i_arr_1, ROWS, COLS);	
	cout << "Вывод двумерного массива : " << "\n" << endl;
	FILLRand(i_arr_1, ROWS, COLS);
	Print(i_arr_1, ROWS, COLS); cout << endl;
	cout << "Вывод массива по возрастанию :  " << endl; cout << endl;
	Sort(i_arr_1, ROWS, COLS);
	Print(i_arr_1, ROWS, COLS); cout << endl;
	cout << "Сумма элементов массива :  " << Sum(i_arr_1, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива :  " << Avg(i_arr_1, ROWS, COLS) << endl;
	cout << "Минимальное значение массива :  " << Min(i_arr_1, ROWS, COLS) << endl;
	cout << "Максимальное значение массива :  " << Max(i_arr_1, ROWS, COLS) << endl;
	cout << "Вывод массива в обратном порядке :  " << endl; cout << endl;
	Rev(i_arr_1, ROWS, COLS); cout << endl;
	cout << "Введите количество сдвигов влево :  "; cin >> tab;
	ShiftLeft(i_arr_1, ROWS, COLS, tab);
	Print(i_arr_1, ROWS, COLS); cout << endl;
	cout << "Введите количество сдвигов вправо : ";
	cin >> tab;
	ShiftRight(i_arr_1, ROWS, COLS, tab);
	Print(i_arr_1, ROWS, COLS); cout << endl;
}