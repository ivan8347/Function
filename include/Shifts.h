#pragma once
#include"stdafx.h"
#include"constants.h"

void ShiftLeft(int arr[], const int n, int tab);
void ShiftLeft(double arr[], const int n, int tab);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int tab);
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int tab);

void ShiftRight(int arr[], const int n, int tab);
void ShiftRight(double arr[], const int n, int tab);
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int tab);
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int tab);