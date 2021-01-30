#include "functions.h"

template <class T>
T Sum(T arr[], const int n)
{
	for (int i = 0; i < n; i++) arr[i] = rand() % n;
	for (int i = 0; i < n; i++) cout << arr[i] << "  ";
	cout << endl; cout << "Сумма массива равна: ";
	T s = 0;
	for (int i = 0; i < n; i++) s += arr[i];
	return s;
}
template <class T>
T Sum(T arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) arr[i][j] = rand() % 100;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) cout << arr[i][j] << "  ";
		cout << endl;
	}
	cout << endl; cout << "Сумма массива равна: ";
	T s = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) s += arr[i][j];
	}
	return s;
}
//T Sum(T arr[], const int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % (n * 100);
//		arr[i] /= 10;
//	}
//	for (int i = 0; i < n; i++) cout << arr[i] << "  ";
//	cout << endl; cout << "Сумма массива равна: ";
//	T s = 0.00;
//	for (int i = 0; i < n; i++) s += arr[i];
//	return s;
//}
//T Sum(T arr[ROWS][COLS], const int m, const int n)
//{
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr[i][j] = rand() % 1000;
//			arr[i][j] /= 10;
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++) cout << arr[i][j] << "  ";
//		cout << endl;
//	}
//	cout << endl; cout << "Сумма массива равна: ";
//	T s = 0.00;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++) s += arr[i][j];
//	}
//	return s;
//}