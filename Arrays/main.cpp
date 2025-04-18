#include"stdafx.h"
#include"constants.h"
#include"FILLRand.h"
#include"print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shifts.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
#ifdef SORTING
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
	/*cout << "Введите количество сдвигов влево :  ";cin >> tab;
	ShiftLeft(arr, n, tab);
	cout << "Сдвиг массива влево :  ";
	Print(arr, n); cout << endl;
	cout << "Введите количество сдвигов вправо : ";
	cin >> tab;
	ShiftRight(arr, n, tab) ;
	cout << "Сдвиг массива вправо : ";
	Print(arr, n);*/
	
	

	const int size = 8;
    double brr[8];
	FILLRand(brr, size);
	cout << "\n\n";
	cout <<  "Вывод массива brr :  ";
	Print(brr, size); cout << endl;
	cout << "Вывод массива по возрастанию :  ";
	Sort(brr, size);
	Print(brr, size); cout << endl;
	cout << "Сумма элементов массива :  " << Sum(brr, size) << endl;
	cout << "Среднее-арифметическое элементов массива :  " << Avg(brr, size) << endl;
	cout << "Минимальное значение массива :  " << Min(brr, size) << endl;
	cout << "Максимальное значение массива :  " << Max(brr, size) << endl;
	cout << "Введите количество сдвигов влево :  "; cin >> tab;
	ShiftLeft(brr, size, tab);
	cout << "Сдвиг массива влево :  ";
	Print(brr, size); cout << endl;
	cout << "Введите количество сдвигов вправо : ";
	cin >> tab;
	ShiftRight(brr, size, tab);
	cout << "Сдвиг массива вправо : ";
	Print(brr, size); cout << endl;

#endif // SORTING

#ifdef HOME WORK
	const int n = 5;
	int arr[n];
	int tab;
	FILLRand(arr, n);
	cout << "Вывод массива :  ";
	Print(arr, n);
	cout << "Сумма элементов массива :  " << Sum(arr, n) << endl;
	cout << "Сумма элементов массива :  " << Sum(brr, n) << endl;
	cout << "Среднее-арифметическое массива :  " << Sum(arr, n) / n << endl;
	cout << "Минимальное значение массива :  " << Min(arr, n) << endl;
	cout << "Максимальное значение массива :  " << Max(arr, n) << endl;
	cout << "Вывод массива в обратном порядке :  ";
	Rev(arr, n);
	cout << "Введите количество сдвигов влево :  ";
	cin >> tab;
	ShiftLeft(arr, n, tab);
	cout << "Сдвиг массива влево :  ";
	Print(arr, n);
	cout << "Введите количество сдвигов вправо : ";
	cin >> tab;
	ShiftRight(arr, n, tab);
	cout << "Сдвиг массива вправо : ";
	Print(arr, n);
#endif // HOME WORK
#ifdef DELIMITER

	//int tab;
	cout << "\n\n";	
	cout << "Вывод двумерного массива : " << "\n" << endl;
	int i_arr_2[ROWS][COLS] =
	{
		{ 3, 96, 203,16 },
		{ 55,34,21,452 },
		{ 13,89,144,18 }
		
	};
	Print(i_arr_2, ROWS, COLS);
	cout << "Вывод массива по возрастанию :  " << endl;cout << endl;	
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);cout << endl;	
	cout << "Сумма элементов массива :  " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива :  " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива :  " << Min(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива :  " << Max(i_arr_2, ROWS, COLS) << endl;
	cout << "Вывод массива в обратном порядке :  " << endl; cout << endl;	
	Rev(i_arr_2, ROWS, COLS);
	cout << "Введите количество сдвигов влево :  "; cin >> tab;
	ShiftLeft(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS); cout << endl;
	cout << "Введите количество сдвигов вправо : ";
	cin >> tab;
	ShiftRight(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS); cout << endl;
	system("PAUSE");

		cout << "\n";
	cout << "Вывод двумерного массива : " << "\n" << endl;
	double i_arr_1[ROWS][COLS];  
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
	ShiftLeft(i_arr_1, ROWS, COLS);
	Print(i_arr_1, ROWS, COLS); cout << endl; 
	cout << "Введите количество сдвигов вправо :  "; cin >> tab;
	ShiftRight(i_arr_1, ROWS, COLS);
	Print(i_arr_1, ROWS, COLS); cout << endl;

#endif // DELIMITER
}
  
 

  