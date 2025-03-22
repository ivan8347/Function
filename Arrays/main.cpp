#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
void FILLRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FILLRand( arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	const int size = 8;
	int brr[8];
	FILLRand(brr, size);
	Print(brr, size);
	Sort(brr, size);
	Print(brr, size);
}
void FILLRand(int arr[], const int n)
  {
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
  }
void Print(int arr[], const int n)
  {
	  for (int i = 0; i < n; i++)
	  {
		  cout << arr[i] << "\t";
	  } cout << endl;
  }
  void Sort(int arr[], const int n) 
  {
	  for (int i = 0; i < n; i++)
	  {
		  for (int j = i + 1; j < n; j++)
		  {
			  if (arr[j] < arr[i])
			  {
				  int buffer = arr[i];
				  arr[i] = arr[j];
				  arr[j] = buffer;
			  }
		  }
	  }
  }