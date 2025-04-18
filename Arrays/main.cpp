#include<iostream>
#include<conio.h>
//#define SORTING
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
void FILLRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int  minRand = 0, int maxRand = 100);
template<typename T>
void Print(T arr[], const int n);
template<typename T>
void Print(T arr[ROWS] [COLS], const int ROWS, const int COLS);
template<typename T>
void Sort(T arr[], const int n);
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
T Sum(T arr[], const int n);
template<typename T>

T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>

T Avg(T arr[], const int n);
template<typename T>

T Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
T Min(T arr[], const int n);

template<typename T>
T Min(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>

T Max(T arr[], const int n);
template<typename T>

T Max(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Rev(T arr[], const int n);

template<typename T>
void Rev(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void ShiftLeft(T arr[], const int n,int tab);
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void ShiftRight(T arr[], const int n,int tab);
template<typename T>
void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS);


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
	cout << "\n\n";	
	//cout << "����� ���������� ������� : " << "\n" << endl;
	/*int i_arr_2[ROWS][COLS] =
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
	system("PAUSE");*/

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
  void FILLRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int  minRand , int maxRand )
  {
	  for (int i = 0; i < ROWS; i++)
	  {
		  for (int j = 0; j < COLS; j++)
		  {
			  arr[i][j] = rand() % (maxRand - minRand) + minRand;
			  arr[i][j] /= 100;
		  }
		  
		  
	  }
  }

  template<typename T>
  void Print(T arr[], const int n)
  {
	  for (int i = 0; i < n; i++)
	  {
		  cout << arr[i] << "  ";
	  } 
  }
  template<typename T>
  void Print(T arr [ROWS][COLS], const int ROWS, const int COLS)
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

  template<typename T>
  void Sort(T arr[], const int n) 
  {
	  for (int i = 0; i < n; i++)
	  {
		  for (int j = i + 1; j < n; j++)
		  {
			  if (arr[j] < arr[i])
			  {
				  T buffer = arr[i];
				  arr[i] = arr[j];
				  arr[j] = buffer;
			  }
		  }
	  } 
  }  
  template<typename T> 
  void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
  {
	  for (int i = 0; i < COLS; i++)
	  {
		  for (int j = 0; j < ROWS  ; j++)
		  
		  {
			  for (int k = 0; k < COLS; k++)
			  {
				  if (arr[k][i] < arr[k][j])
				  {
					  T  buffer = arr[k][i];
					  arr[k][i] = arr[k][j];
					  arr[k][j] = buffer;
				  }
			  }
		  }
	  }
  }

  template<typename T>  
  T Sum(T arr[], const int n)
  {
	  T sum = 0;
	  for (int i = 0; i < n; i++)
	  {
		   sum += arr[i];
	  }
	  return sum;
  }
  template<typename T> 
  T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
  {
	  T sum = 0;
	  for (int i = 0; i < ROWS; i++)
	  {
		  for (int j = 0; j < COLS; j++)
		  {
			  sum += arr[i][j];
		  }
	  } return sum;
  }

  template<typename T> 
  T Avg(T arr[], const int n)
  {
	  return (double) Sum(arr, n) / n;
  }
  template<typename T> 
  T Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
  {
	  return (double)Sum(arr, ROWS, COLS) / (COLS*ROWS);
  }

  template<typename T> 
  void Rev(T arr[], const int n) 
  {
	  for (int i = n - 1; i >= 0; i--)
	  {
		  cout << arr[i] << " ";
	  }cout << endl;
  }
  template<typename T> 
  void Rev(T arr[ROWS][COLS], const int ROWS, const int COLS)
  {
	  for (int i = 0; i < ROWS; i++)
	  {
		  for (int j = COLS - 1; j >= 0; j--)
		  {
			  cout << arr[i][j] << "\t";
		  }cout << endl;
	  }
  }   

  template<typename T> 
  T Min(T arr[], const int n)
  {
	  T min = arr[0];
	  for (int i = 0; i < n; i++)
	  {
		  if (min > arr[i]) min = arr[i];
	  }return min;
  }  
  template<typename T> 
  T Min(T arr[ROWS][COLS], const int ROWS, const int COLS)
  {
	  T min = arr[0][0];
	  for (int i = 0; i < ROWS; i++)
	  {
		  for (int j = 0; j < COLS; j++)
		  {
			  if (min > arr[i][j]) min = arr[i][j];
		  }
	  }return min;
  }

  template<typename T>   
  T Max(T arr[], const int n) 
  {
	  T max = arr[0];
	  for (int i = 0; i < n; i++)
	  {
		  if (max < arr[i]) max = arr[i];
	  }return max;
  } 
  template<typename T>  
  T Max(T arr[ROWS][COLS], const int ROWS, const int COLS)
  {
	  double max = arr[0][0];
	  for (int i = 0; i < ROWS; i++)
	  {
		  for (int j = 0; j < COLS; j++)
		  {
			  if (max < arr[i][j]) max = arr[i][j];
		  }
	  }return max;
  }
  
  template<typename T>
  void ShiftLeft(T arr[], const int n,int tab)
  {
	 
	  for (int i = 0; i < tab; i++)
	  {
		  T a = arr[0];

		  for (int j = 1; j < n; j++)
		  {
			  arr[j - 1] = arr[j];
		  }
		  arr[n - 1] = a;
	  }
  }
  template <typename T>
  void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS)
  {
  
  
	  ShiftLeft(arr[0], ROWS * COLS, tab);
    
 }

  template<typename T>
  void ShiftRight(T arr[], const int n, int tab)
  {  
	  ShiftRight(arr, n, n - tab);
  }
  template<typename T>
  void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS)
  {
	  ShiftLeft(arr[0], ROWS * COLS, ROWS * COLS - tab);	  
  }
  