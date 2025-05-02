#include<iostream>
#include<FILLRand.h>
#include<Print.h>
#include<Sort.h>
#include<Statistics.h>
#include<Shifts.h>
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
		cout << "Вывод массива по возрастанию :  "; Sort(arr, n);
		Print(arr, n); cout << endl;
		cout << "Сумма элементов массива :  " << Sum(arr, n) << endl;
		cout << "Среднее-арифметическое элементов массива :  " << Avg(arr, n) << endl;//не работает
		cout << "Минимальное значение массива :  " << Min(arr, n) << endl;
		cout << "Максимальное значение массива :  " << Max(arr, n) << endl;
		cout << "Введите количество сдвигов влево :  ";cin >> tab;
		ShiftLeft(arr, n, tab);
		cout << "Сдвиг массива влево :  ";
		Print(arr, n); cout << endl;
		//cout << "Введите количество сдвигов вправо : ";cin >> tab;
		//ShiftRight(arr, n, tab) ;
		//cout << "Сдвиг массива вправо : ";
		//Print(arr, n); cout << endl; //Почему-то не работет


		cout << "\n";
		cout << "Вывод двумерного массива : " << "\n" << endl;
		int d_arr_1[ROWS][COLS];
		FILLRand(d_arr_1, ROWS, COLS);
		Print(d_arr_1, ROWS, COLS); cout << endl;
		cout << "Вывод массива по возрастанию :  " << endl; cout << endl;
		Sort(d_arr_1, ROWS, COLS);
		Print(d_arr_1, ROWS, COLS); cout << endl;
		cout << "Сумма элементов массива :  " << Sum(d_arr_1, ROWS, COLS) << endl;
		cout << "Среднее-арифметическое элементов массива :  " << Avg(d_arr_1, ROWS, COLS) << endl;
		cout << "Минимальное значение массива :  " << Min(d_arr_1, ROWS, COLS) << endl;
		cout << "Максимальное значение массива :  " << Max(d_arr_1, ROWS, COLS) << endl;
		cout << "Вывод массива в обратном порядке :  " << endl; cout << endl;
		Rev(d_arr_1, ROWS, COLS); cout << endl;
		cout << "Введите количество сдвигов влево :  "; cin >> tab;
		ShiftLeft(d_arr_1, ROWS, COLS, tab);
		Print(d_arr_1, ROWS, COLS); cout << endl;
		cout << "Введите количество сдвигов вправо :  "; cin >> tab;
		ShiftRight(d_arr_1, ROWS, COLS, tab);
		Print(d_arr_1, ROWS, COLS); cout << endl;

}