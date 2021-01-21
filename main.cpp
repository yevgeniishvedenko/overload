#include<iostream>
using namespace std;

const int ROWS = 8;
const int COLS = 10;

void Sort(int arr[], const int n);
void Sort(int arr[ROWS][COLS], const int m, const int n);
void Sort(double arr[], const int n);
void Sort(double arr[ROWS][COLS], const int m, const int n);
void Sort(char arr[], const int n);
void Sort(char arr[ROWS][COLS], const int m, const int n);
int Sum(int arr[], const int n);
int Sum(int arr[ROWS][COLS], const int m, const int n);
double Sum(double arr[], const int n);
double Sum(double arr[ROWS][COLS], const int m, const int n);

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
	cout << Sum(arr, n) << endl;
	cout << "================================================" << endl;
	cout << "����� ���������� ��������������:" << endl;
	cout << Sum(arr_2d, ROWS, COLS) << endl;
	cout << "================================================" << endl;
	cout << "����� ����������� � ��������� ������:" << endl;
	cout << Sum(arr_d, n) << endl;
	cout << "================================================" << endl;
	cout << "����� ���������� � ��������� ������:" << endl;
	cout << Sum(arr_2d_d, ROWS, COLS) << endl;
	cout << "================================================" << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++) arr[i] = rand() % n;
	for (int i = 0; i < n; i++) cout << arr[i] << "  ";
	cout << endl;
	//���������
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				int buf = arr[i];
				arr[i] = arr[j];
				arr[j] = buf;
			}
		}
	}
	for (int i = 0; i < n; i++) cout << arr[i] << "  ";
	cout << endl;
}

void Sort(int arr[ROWS][COLS], const int m, const int n)
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
	cout << endl;
	//����������
	for (int c = 0; c <= (m * n); c++)//�������
	{
		//������ ������
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n - 1; j++)
			{
				if (arr[i][j] > arr[i][j + 1])
				{
					int buf = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = buf;
				}
			}
		}
		//������ ������
		for (int x = 0; x < n; x++)
		{
			for (int z = 0; z < m - 1; z++)
			{
				if (arr[z][x] > arr[z][x + 1])
				{
					int buf = arr[z][x];
					arr[z][x] = arr[z][x + 1];
					arr[z][x + 1] = buf;
				}
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) cout << arr[i][j] << "  ";
		cout << endl;
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (n*100);
		arr[i] /= 10;
	}
	for (int i = 0; i < n; i++) cout << arr[i] << "  ";
	cout << endl;
	//���������
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				double buf = arr[i];
				arr[i] = arr[j];
				arr[j] = buf;
			}
		}
	}
	for (int i = 0; i < n; i++) cout << arr[i] << "  ";
	cout << endl;
}
void Sort(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 1000;
			arr[i][j] /= 10;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) cout << arr[i][j] << "  ";
		cout << endl;
	}
	cout << endl;
	//����������
	for (int c = 0; c <= (m * n); c++)//�������
	{
		//������ ������
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n - 1; j++)
			{
				if (arr[i][j] > arr[i][j + 1])
				{
					double buf = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = buf;
				}
			}
		}
		//������ ������
		for (int x = 0; x < n; x++)
		{
			for (int z = 0; z < m - 1; z++)
			{
				if (arr[z][x] > arr[z][x + 1])
				{
					double buf = arr[z][x];
					arr[z][x] = arr[z][x + 1];
					arr[z][x + 1] = buf;
				}
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) cout << arr[i][j] << "  ";
		cout << endl;
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++) arr[i] = rand() % 256;
	for (int i = 0; i < n; i++) cout << arr[i] << "  ";
	cout << endl;
	//���������
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				char buf = arr[i];
				arr[i] = arr[j];
				arr[j] = buf;
			}
		}
	}
	for (int i = 0; i < n; i++) cout << arr[i] << "  ";
	cout << endl;
}
void Sort(char arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) arr[i][j] = rand() % 256;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) cout << arr[i][j] << "  ";
		cout << endl;
	}
	cout << endl;
	//����������
	for (int c = 0; c <= (m * n); c++)//�������
	{
		//������ ������
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n - 1; j++)
			{
				if (arr[i][j] > arr[i][j + 1])
				{
					char buf = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = buf;
				}
			}
		}
		//������ ������
		for (int x = 0; x < n; x++)
		{
			for (int z = 0; z < m - 1; z++)
			{
				if (arr[z][x] > arr[z][x + 1])
				{
					char buf = arr[z][x];
					arr[z][x] = arr[z][x + 1];
					arr[z][x + 1] = buf;
				}
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) cout << arr[i][j] << "  ";
		cout << endl;
	}
}
int Sum(int arr[], const int n)
{
	for (int i = 0; i < n; i++) arr[i] = rand() % n;
	for (int i = 0; i < n; i++) cout << arr[i] << "  ";
	cout << endl; cout << "����� ������� �����: ";
	int s = 0;
	for (int i = 0; i < n; i++) s += arr[i];
	return s;
}
int Sum(int arr[ROWS][COLS], const int m, const int n)
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
	cout << endl; cout << "����� ������� �����: ";
	int s = 0; 
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) s += arr[i][j];
	}
	return s;
}
double Sum(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (n * 100);
		arr[i] /= 10;
	}
	for (int i = 0; i < n; i++) cout << arr[i] << "  ";
	cout << endl; cout << "����� ������� �����: ";
	double s = 0.00;
	for (int i = 0; i < n; i++) s += arr[i];
	return s;
}
double Sum(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 1000;
			arr[i][j] /= 10;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) cout << arr[i][j] << "  ";
		cout << endl;
	}
	cout << endl; cout << "����� ������� �����: ";
	double s = 0.00;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) s += arr[i][j];
	}
	return s;
}