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
	cout << "����� ������� arr :  "; 
	Print(arr, n); cout << endl;
	cout << "����� ������� �� ����������� :  ";
	Sort(arr, n);
	Print(arr, n); cout << endl;
	cout << "����� ��������� ������� :  " << Sum(arr, n) << endl;
	cout << "�������-�������������� ��������� ������� :  " << Avg(arr, n) << endl;
	cout << "����������� �������� ������� :  " << Min(arr, n) << endl;
	cout << "������������ �������� ������� :  " << Max(arr, n) << endl;
	/*cout << "������� ���������� ������� ����� :  ";cin >> tab;
	ShiftLeft(arr, n, tab);
	cout << "����� ������� ����� :  ";
	Print(arr, n); cout << endl;
	cout << "������� ���������� ������� ������ : ";
	cin >> tab;
	ShiftRight(arr, n, tab) ;
	cout << "����� ������� ������ : ";
	Print(arr, n);*/
	
	

	const int size = 8;
    double brr[8];
	FILLRand(brr, size);
	cout << "\n\n";
	cout <<  "����� ������� brr :  ";
	Print(brr, size); cout << endl;
	cout << "����� ������� �� ����������� :  ";
	Sort(brr, size);
	Print(brr, size); cout << endl;
	cout << "����� ��������� ������� :  " << Sum(brr, size) << endl;
	cout << "�������-�������������� ��������� ������� :  " << Avg(brr, size) << endl;
	cout << "����������� �������� ������� :  " << Min(brr, size) << endl;
	cout << "������������ �������� ������� :  " << Max(brr, size) << endl;
	cout << "������� ���������� ������� ����� :  "; cin >> tab;
	ShiftLeft(brr, size, tab);
	cout << "����� ������� ����� :  ";
	Print(brr, size); cout << endl;
	cout << "������� ���������� ������� ������ : ";
	cin >> tab;
	ShiftRight(brr, size, tab);
	cout << "����� ������� ������ : ";
	Print(brr, size); cout << endl;

#endif // SORTING

#ifdef HOME WORK
	const int n = 5;
	int arr[n];
	int tab;
	FILLRand(arr, n);
	cout << "����� ������� :  ";
	Print(arr, n);
	cout << "����� ��������� ������� :  " << Sum(arr, n) << endl;
	cout << "����� ��������� ������� :  " << Sum(brr, n) << endl;
	cout << "�������-�������������� ������� :  " << Sum(arr, n) / n << endl;
	cout << "����������� �������� ������� :  " << Min(arr, n) << endl;
	cout << "������������ �������� ������� :  " << Max(arr, n) << endl;
	cout << "����� ������� � �������� ������� :  ";
	Rev(arr, n);
	cout << "������� ���������� ������� ����� :  ";
	cin >> tab;
	ShiftLeft(arr, n, tab);
	cout << "����� ������� ����� :  ";
	Print(arr, n);
	cout << "������� ���������� ������� ������ : ";
	cin >> tab;
	ShiftRight(arr, n, tab);
	cout << "����� ������� ������ : ";
	Print(arr, n);
#endif // HOME WORK
#ifdef DELIMITER

	//int tab;
	cout << "\n\n";	
	cout << "����� ���������� ������� : " << "\n" << endl;
	int i_arr_2[ROWS][COLS] =
	{
		{ 3, 96, 203,16 },
		{ 55,34,21,452 },
		{ 13,89,144,18 }
		
	};
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ������� �� ����������� :  " << endl;cout << endl;	
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);cout << endl;	
	cout << "����� ��������� ������� :  " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� ������� :  " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� ������� :  " << Min(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� ������� :  " << Max(i_arr_2, ROWS, COLS) << endl;
	cout << "����� ������� � �������� ������� :  " << endl; cout << endl;	
	Rev(i_arr_2, ROWS, COLS);
	cout << "������� ���������� ������� ����� :  "; cin >> tab;
	ShiftLeft(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS); cout << endl;
	cout << "������� ���������� ������� ������ : ";
	cin >> tab;
	ShiftRight(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS); cout << endl;
	system("PAUSE");

		cout << "\n";
	cout << "����� ���������� ������� : " << "\n" << endl;
	double i_arr_1[ROWS][COLS];  
	FILLRand(i_arr_1, ROWS, COLS); 
	Print(i_arr_1, ROWS, COLS); cout << endl;
	cout << "����� ������� �� ����������� :  " << endl; cout << endl;
	Sort(i_arr_1, ROWS, COLS);
	Print(i_arr_1, ROWS, COLS); cout << endl;
	cout << "����� ��������� ������� :  " << Sum(i_arr_1, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� ������� :  " << Avg(i_arr_1, ROWS, COLS) << endl;
	cout << "����������� �������� ������� :  " << Min(i_arr_1, ROWS, COLS) << endl;
	cout << "������������ �������� ������� :  " << Max(i_arr_1, ROWS, COLS) << endl;
	cout << "����� ������� � �������� ������� :  " << endl; cout << endl;
	Rev(i_arr_1, ROWS, COLS); cout << endl;
	cout << "������� ���������� ������� ����� :  "; cin >> tab;
	ShiftLeft(i_arr_1, ROWS, COLS);
	Print(i_arr_1, ROWS, COLS); cout << endl; 
	cout << "������� ���������� ������� ������ :  "; cin >> tab;
	ShiftRight(i_arr_1, ROWS, COLS);
	Print(i_arr_1, ROWS, COLS); cout << endl;

#endif // DELIMITER
}
  
 

  