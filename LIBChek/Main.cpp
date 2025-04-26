#include<iostream>
#include<FILLRand.h>
#include<Print.h>
#include<constants.h>

using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FILLRand(arr, n);
	Print(arr, n);
	cout << "\n";
	cout << "delimetr" << endl;

	int i_arr_2[ROWS][COLS]; 
	FILLRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

}