#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
void FILLRand(int arr[], const int size);
void Print(int arr[], const int size);
void Sort(int arr[], const int size);
void main()
{

	setlocale(LC_ALL, "");
	const int size = 8;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	} cout << endl;
	for (int i = 0; i < size; i++)
	{

		for (int j = i + 1; i < size; i++)
		{
			if (arr[j] < arr[i]);
			{
				int buf = arr[i];
				arr[i] = arr[j];
				arr[j] = buf;
			}
			cout << arr[j] << "\t";
		}
	}for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	} cout << endl;
	
}
void FILLRand(int arr[], const int size)
  {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
  }
  void Print(int arr[], const int size)
  {
	  for (int i = 0; i < size; i++)
	  {
		  cout << arr[i] << "\t";
	  } cout << endl;
  }
  void Sort(int arr[], const int size) 
  {

	  for (int j = i + 1; i < size; i++)
	  {
		  if (arr[j] < arr[i]);
		  {
			  int buf = arr[i];
			  arr[i] = arr[j];
			  arr[j] = buf;
		  }
		  
	  }
  }