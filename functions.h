#pragma once
#pragma warning
#include<iostream>

using namespace std;

const int ROWS = 8;
const int COLS = 10;
template <class T>
void Sort(int arr[], const int n);
void Sort(int arr[ROWS][COLS], const int m, const int n);
void Sort(double arr[], const int n);
void Sort(double arr[ROWS][COLS], const int m, const int n);
void Sort(char arr[], const int n);
void Sort(char arr[ROWS][COLS], const int m, const int n);

//int Sum(int arr[], const int n);
//int Sum(int arr[ROWS][COLS], const int m, const int n);
//double Sum(double arr[], const int n);
//double Sum(double arr[ROWS][COLS], const int m, const int n);
T Sum(T arr[], const int n);
T Sum(T arr[ROWS][COLS], const int m, const int n);

