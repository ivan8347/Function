#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
int Sum(int a, int b);
int Diff(int a, int b);
int Prod(int a, int b);
double Quotient(int a, int b);
int Sum(int arr[], const int n);
void main()
{

	setlocale(LC_ALL, "");

	cout << "Hello Function" << endl;
	int a = 2;
	int b = 3;
	int c = Sum(a, b);
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Diff(a, b) << endl;
	cout << a << "*" << b << "=" << Prod(a, b) << endl;
	cout << a << "/" << b << "=" << Quotient(a, b) << endl;
	
}
	int Sum(int a, int b)
   {
	int c = a + b;
	return c;
   }
   int Diff(int a, int b)
    {
    	return a - b;
    }
	int Prod(int a, int b)
	{
		return a * b;
	}
	double Quotient(int a, int b)
	{
		return (double) a / b;
	}
	int Sum(int arr[], const int n)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}return sum;
	}
