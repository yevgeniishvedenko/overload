#include "functions.h"
#include "functions.cpp"

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n];
	double arr_d[n];
	char arr_c[n];
	//const int D_SIZE = 8;
	//double d_arr[D_SIZE];
	int arr_2d[ROWS][COLS];
	double arr_2d_d[ROWS][COLS];
	char arr_2d_c[ROWS][COLS];
	cout << "================================================" << endl;
	cout << "���������� ����������� ��������������:" << endl;
	Sort(arr, n);
	cout << "================================================" << endl;
	cout << "���������� ���������� ��������������:" << endl;
	Sort(arr_2d, ROWS, COLS);
	cout << "================================================" << endl;
	cout << "���������� ����������� � ��������� ������:" << endl;
	Sort(arr_d, n);
	cout << "================================================" << endl;
	cout << "���������� ���������� � ��������� ������:" << endl;
	Sort(arr_2d_d, ROWS, COLS);
	cout << "================================================" << endl;
	cout << "���������� ����������� �����������:" << endl;
	Sort(arr_c, n);
	cout << "================================================" << endl;
	cout << "���������� ���������� �����������:" << endl;
	Sort(arr_2d_c, ROWS, COLS);
	cout << "================================================" << endl;
	cout << "����� ����������� ��������������:" << endl;
	cout << Sum<int>(arr, n) << endl;
	cout << "================================================" << endl;
	cout << "����� ���������� ��������������:" << endl;
	cout << Sum<int>(arr_2d, ROWS, COLS) << endl;
	cout << "================================================" << endl;
	cout << "����� ����������� � ��������� ������:" << endl;
	cout << Sum<double>(arr_d, n) << endl;
	cout << "================================================" << endl;
	cout << "����� ���������� � ��������� ������:" << endl;
	cout << Sum<double>(arr_2d_d, ROWS, COLS) << endl;
	cout << "================================================" << endl;
}

