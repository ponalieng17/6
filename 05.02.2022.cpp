#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <chrono>

using namespace std;

int32_t getRandomNum(int32_t min, int32_t max)
{
	const static auto seed = chrono::system_clock::now().time_since_epoch().count();
	static mt19937_64 generator(seed);
	uniform_int_distribution<int32_t> dis(min, max);
	return dis(generator);
}//нашёл интересную функцию, решил попробовать

void ShowMatrix(int matr[][5], int rows, int cols) {
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << matr[i][j] << "\t";
		}
		cout << endl << endl;
	}
	
	cout << endl;
	int max = matr[0][0];
	int min = matr[0][0];
	cout << "Числа по диагонали: ";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i == j)
				cout << matr[i][j] << "  ";
			if (i == j)
				if (matr[i][j] > max)
					max = matr[i][j];
			if (i == j)
			if (matr[i][j] < min)
				min = matr[i][j];
				

		}
		
	}
	cout << endl;
	cout << "Максимальное число диагонали: " << max << endl;
	cout << "Минимальное число диагонали: " << min;
	cout << endl << endl;
	int x, y;
	cout << "Сортировка по возрастанию отдельно для каждой строки матрицы: " << endl;
	for (x = 0; x < rows; x++) {
		for (i = 0; i < rows; i++) {
			for (j = cols - 1; j > i; j--)
				if (matr[x][j] < matr[x][j - 1]) {
					y = matr[x][j];
					matr[x][j] = matr[x][j - 1];
					matr[x][j - 1] = y;
				}
			cout << matr[x][i] << "\t";
		}
		cout << endl << endl;
	}
	cout << endl << endl;
}
void InitMatrix(int matr[][5], int rows, int cols) {
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matr[i][j] = getRandomNum(1, 100);// rand() % 10;
		}
	}
	cout << endl;
	
}
void ShowMatrix(double matr[][5], int rows, int cols) {
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << matr[i][j] << "\t";
		}
		cout << endl << endl;
	}
	cout << endl;
	double max = matr[0][0];
	double min = matr[0][0];
	cout << "Числа по диагонали: ";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i == j)
				cout << matr[i][j] << "  ";
			if (i == j)
				if (matr[i][j] > max)
					max = matr[i][j];
			if (i == j)
				if (matr[i][j] < min)
					min = matr[i][j];
		}
	}
    cout << endl;
	cout << "Максимальное число диагонали: " << max << endl;
	cout << "Минимальное число диагонали: " << min;
	cout << endl << endl;
	int x; double y;
	cout << "Сортировка по возрастанию отдельно для каждой строки матрицы: " << endl;
	for (x = 0; x < rows; x++) {
		for (i = 0; i < rows; i++) {
			for (j = cols - 1; j > i; j--)
				if (matr[x][j] < matr[x][j - 1]) {
					y = matr[x][j];
					matr[x][j] = matr[x][j - 1];
					matr[x][j - 1] = y;
				}
			cout << matr[x][i] << "\t";
		}
		cout << endl << endl;
	}
	cout << endl << endl;
}
void InitMatrix(double matr[][5], int rows, int cols) {
	int a = 0;
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matr[i][j] = (double)(((double)rand() / 100)); 
			
		}
		 
	}
	
	cout << endl;
}
void ShowMatrix(char symb, int count) {
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			cout << symb << "\t";
		}
		cout << endl << endl;
	}
	cout << endl;
}
long max_element(int n, int array[])
{
	int value = array[0];
	for (int i = 1; i < n; i++)
		value = value > array[i] ? value : array[i];
	
	return long(value);
}
long max_element(int n, int t, int array[][4])
{
	int value = array[0][0];
	for (int i = 1; i < n; i++)
		for(int j = 0; j < t; j++)
		value = value > array[i][j] ? value : array[i][j];
	
	return long(value);
}
long max_element(int n, int t, int v, int array[][3][4])
{
	int value = array[0][0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < t; j++) {
			for (int k = 0; k < v; k++) {
				value = value > array[i][j][k] ? value : array[i][j][k];
				
				
			}
		}
	}
	return long(value);
}
void max_element(int n, int t) {
	if (n == t)
		cout << "Введённые числа равны" << endl;
	else if (n > t)
		cout << "Максимальное значение: " << n << endl;
	else
		cout << "Максимальное значение: " << t << endl;
}
void max_element(int n, int m, int k) {
	int max;
	if (n == m == k)
		cout << "Введённые числа равны" << endl;
	max = n;
	m > max&& m > k ? max = m : k > max ? max = k : max = n;
	cout << "Максимальное значение: " << max << endl;
}
// шаблоны для задания 2
template<typename T, typename T1> T1 max_element(T n, T1 array[]) {
	int value = array[0];
	for (int i = 1; i < n; i++)
		value = value > array[i] ? value : array[i];

	return value;
}//нахождение макс. знач. в одномер. мас.
template<typename T, typename T1> T1 max_element(T n, T t, T1 array[][4]) {
	int value = array[0][0];
	for (int i = 1; i < n; i++)
		for (int j = 0; j < t; j++)
			value = value > array[i][j] ? value : array[i][j];

	return value;
}
template<typename T, typename T1> T1 max_element(T n, T t, T v, T1 array[][3][4]) {
	int value = array[0][0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < t; j++) {
			for (int k = 0; k < v; k++) {
				value = value > array[i][j][k] ? value : array[i][j][k];


			}
		}
	}
	return value;
}
template <typename T> T max_element(T num1, T num2) {
	return (num1 < num2) ? num2 : num1;
}//шаблон для поиска максимального значения двух целых
template <typename T> T max_element(T n, T m, T k) {
	int max;
	if (n == m == k)
		cout << "Введённые числа равны" << endl;
	max = n;
	m > max&& m > k ? max = m : k > max ? max = k : max = n;
	return max;
}//шаблон для поиска максимального значения трёх целых
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	const int mRows = 5;
	const int mCols = 5;
	int iMatr[mRows][mCols];
	InitMatrix(iMatr, mRows, mCols);
	ShowMatrix(iMatr, mRows, mCols);

	ShowMatrix('#',5);
	double Matr[mRows][mCols];
	InitMatrix(Matr, mRows, mCols);
	ShowMatrix(Matr, mRows, mCols);
	int a[] = { 10, 20, 30, 40, 50, 60 };
	cout << "Максимальный элемент: " << max_element(6, a) << endl;
	int b[][4] = { {10, 20, 30, 40}, {50, 60, 100, 120}, {130, 150, 170, 20} };
	cout << "Максимальный элемент двумерного массива: " << max_element(3, 4, b) << endl;
	int c[][3][4] = { { {3, 4, 2, 3}, {0, -3, 0, 11}, {23, 12, 23, 2} },
		              { {13, 4, 56, 3}, {5, 0, 3, 5}, {5, 1, 4, 0} } };
	cout << "Максимальный элемент трёхмерного массива: " << max_element(2, 3, 4,  c) << endl;
	cout << endl;
	int x, y;
	cout << "Введите два числа для сравнения и поиска максимального: ";
	cin >> x >> y;
	max_element(x, y);
	cout << endl;
	int n, m, k;
	cout << "Введите три числа для сравнения и поиска максимального: ";
	cin >> n >> m >> k;
	max_element(n, m, k);
	cout << endl << endl;
	return 0;
}
