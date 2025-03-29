#include<iostream>
#include<conio.h>
#define SORTING
//#define HOME WORK
using namespace std;
using std::cin;
using std::cout;
using std::endl;
void FILLRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);
double Sum(int arr[], const int n);
double Min(int arr[], const int n);
double Max(int arr[], const int n);
void Rev(int arr[], const int n);
void ShiftLeft(int arr[], const int n,int tab);
void ShiftRight(int arr[], const int n,int tab);


void main()
{
	setlocale(LC_ALL, "");
#ifdef SORTING
	const int n = 5;
	int arr[n];
	FILLRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� ������� :  " << Sum(arr, n) << endl;
	cout << "����������� �������� ������� :  " << Min(arr, n) << endl;
	cout << "������������ �������� ������� :  " << Max(arr, n) << endl;
	

	const int size = 8;
	int brr[8];
	FILLRand(brr, size);
	Print(brr, size);
	Sort(brr, size);
	Print(brr, size);
	cout << "����� ��������� ������� :  " << Sum(brr, size) << endl;
	cout << "����������� �������� ������� :  " << Min(brr, size) << endl;
	cout << "������������ �������� ������� :  " << Max(brr, size) << endl;
#endif // SORTING

#ifdef HOME WORK
	/*const int n = 10;
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
	Print(arr, n);*/
#endif // HOME WORK
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
		  cout << arr[i] << " ";
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
  double Sum(int arr[], const int n)
  {
	  double sum = 0;
	  for (int i = 0; i < n; i++)
	  {
		   sum += arr[i];
	  }cout << endl;
	  return sum;
  }
  void Rev(int arr[], const int n) 
  {
	  for (int i = n - 1; i >= 0; i--)
	  {
		  cout << arr[i] << " ";
	  }cout << endl;
  }
  double Min(int arr[], const int n)
  {
	  int min = arr[0];
	  for (int i = 0; i < n; i++)
	  {
		  if (min > arr[i]) min = arr[i];
	  }return min;
  }
  double Max(int arr[], const int n) 
  {
	  int max = arr[0];
	  for (int i = 0; i < n; i++)
	  {
		  if (max < arr[i]) max = arr[i];
	  }return max;
  }
  void ShiftLeft(int arr[], const int n,int tab)
  {
	  tab = tab % n;
	  for (int i = 0; i < tab; i++)
	  {
		  int a = arr[0];

		  for (int j = 0; j < n - 1; j++)
		  {
			  arr[j] = arr[j + 1];
		  }
		  arr[n - 1] = a;
	  }	  
  }
  void ShiftRight(int arr[], const int n, int tab) 
  {
	  tab = tab % n;
	for (int i = 0; i < tab; i++)
	{
		int a = arr[n-1];
	
		for (int j = n-1; j > 0 ; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = a;
	}
  }