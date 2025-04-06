#pragma once
#include"stdafx.h"
#include"constants.h"
double Sum(int arr[], const int n);
double Sum(double arr[], const int n);
double Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);

double Min(int arr[], const int n);
double Min(double arr[], const int n);
double Min(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Min(double arr[ROWS][COLS], const int ROWS, const int COLS);

double Max(int arr[], const int n);
double Max(double arr[], const int n);
double Max(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Max(double arr[ROWS][COLS], const int ROWS, const int COLS);
