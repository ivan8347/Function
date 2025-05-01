#include<iostream>
#include"FILLRand.h"
//#include"stdafx.h"
//#include"constants.h"

//#include"Statistics.h"
#include"Print.h"
//#include"Shifts.h"
//#include"Sort.h"
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FILLRand(arr, n);
	Print(arr, n);

}