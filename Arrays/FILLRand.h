#pragma once
#include"stdafx.h"
#include"constants.h"
void FILLRand(int arr[], const int n);
void FILLRand(double arr[], const int n);
void FILLRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int  minRand = 0, int maxRand = 100);
void FILLRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int  minRand = 0, int maxRand = 100);
