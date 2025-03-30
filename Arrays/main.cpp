#include<iostream>
#include<conio.h>
#define SORTING
//#define HOME WORK
#define DELIMITER ;
const int ROWS = 3;
const int COLS = 4;
int tab;
using namespace std;
using std::cin;
using std::cout;
using std::endl;
void FILLRand(int arr[], const int n);
void FILLRand(double arr[], const int n);
void FILLRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS] [COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

double Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

double Min(int arr[], const int n);
double Min(double arr[], const int n);

double Max(int arr[], const int n);
double Max(double arr[], const int n);

void Rev(int arr[], const int n);
void Rev(double arr[], const int n);

void ShiftLeft(int arr[], const int n,int tab);
void ShiftLeft(double arr[], const int n,int tab);

void ShiftRight(int arr[], const int n,int tab);
void ShiftRight(double arr[], const int n,int tab);


void main()
{
	setlocale(LC_ALL, "");
#ifdef SORTING
	const int n = 5;
	int arr[n];
	FILLRand(arr, n);
	cout << "Вывод массива arr :  "; 
	Print(arr, n); cout << endl;
	cout << "Вывод массива в обратном порядке :  ";
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
	cout << "Вывод массива в обратном порядке :  ";
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
	Print(brr, size);

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
	cout << "\n\n";
	
	int i_arr_2[ROWS][COLS] =
	{
		{ 3, 5, 8 },
		{ 13,21,34 },
		{ 55,89,144 },
	};
	FILLRand(i_arr_2, ROWS, COLS);

	Print(i_arr_2, ROWS, COLS);

#endif // DELIMITER


}
  void FILLRand(int arr[], const int n)
  {
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
  }
  void FILLRand(double arr[], const int n)
  {
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;arr[i] /= 100;
	}
  }
  void FILLRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
  {
	  for (int i = 0; i < ROWS; i++)
	  {
		  for (int j = 0; j < COLS; j++)
		  {
			  arr[i][j] = rand();
		  }
		  
	  }
  }
  void Print(int arr[], const int n)
  {
	  for (int i = 0; i < n; i++)
	  {
		  cout << arr[i] << "  ";
	  } 
  }
  void Print(double arr[], const int n)
  {
	  for (int i = 0; i < n; i++)
	  {
		  cout << arr[i] << "  ";
	  } 
  }
  void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
  {	  
  for (int i = 0; i < ROWS; i++)
  {


	  for (int j = 0; j < COLS; j++)
	  {
		  cout << arr[i][j] << "\t";
	  }
	  cout << endl;
  }
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
  void Sort(double arr[], const int n)
  {
	  for (int i = 0; i < n; i++)
	  {
		  for (int j = i + 1; j < n; j++)
		  {
			  if (arr[j] < arr[i])
			  {
				  double buffer = arr[i];
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
	  }
	  return sum;
  }
  double Sum(double arr[], const int n)
  {
	  double sum = 0;
	  for (int i = 0; i < n; i++)
	  {
		   sum += arr[i];
	  }
	  return sum;
  }
  double Avg(int arr[], const int n)
  {
	  return (double) Sum(arr, n) / n;
  }
  double Avg(double arr[], const int n)
  {
	  return (double) Sum(arr, n) / n;
  }
  void Rev(int arr[], const int n) 
  {
	  for (int i = n - 1; i >= 0; i--)
	  {
		  cout << arr[i] << " ";
	  }cout << endl;
  }
  void Rev(double arr[], const int n)
  {
	  for (int i = n - 1; i >= 0; i--)
	  {
		  cout << arr[i] << " ";
	  }cout << endl;
  }
  double Min(int arr[], const int n)
  {
	  double min = arr[0];
	  for (int i = 0; i < n; i++)
	  {
		  if (min > arr[i]) min = arr[i];
	  }return min;
  }
  double Min(double arr[], const int n)
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
  double Max(double arr[], const int n)
  {
	  double max = arr[0];
	  for (int i = 0; i < n; i++)
	  {
		  if (max < arr[i]) max = arr[i];
	  }return max; cout << endl;
  }
  void ShiftLeft(int arr[], const int n,int tab)
  {
	 
	  for (int i = 0; i < tab; i++)
	  {
		  int a = arr[0];

		  for (int j = 1; j < n ; j++)
		  {
			   arr[j - 1] = arr[j];
		  }
		  arr[n - 1] = a;
	  }	  
  }
  void ShiftLeft(double arr[], const int n,  int tab)
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
  void ShiftRight(int arr[], const int n, int tab)
  {
	  
	  for (int i = 0; i < tab; i++)
	  {
		  int a = arr[n-1];

		  for (int i = n-1 ; i > 0; i--)
		  {
			 arr[i]=  arr[i - 1]  ;
		  }
		  arr[0] = a;
	  }
  }
  void ShiftRight(double arr[], const int n, int tab)
  {
	 
	for (int i = 0; i < tab; i++)
	{
		double a = arr[n-1];
	
		for (int i = n-1; i > 0 ; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = a;
	}
  }