#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>

using namespace std;

void array1(int* r, const int n, const int min, const int max, int i)
{
	r[i] = min + rand() % (max - min + 1);
	if (i < n - 1)
		array1(r, n, min, max, i + 1);
}

void mas(int* r, const int n, int i)
{
	cout << " " << r[i] << "; ";
	if (i < n - 1)
		mas(r, n, i + 1);
	else
		cout << endl;
}

int max1(int* r, const int n, int max, int imax, int i)
{
	if (r[i] > max)
	{
		max = r[i];
		imax = i;
	}
	if (i < n - 1)
		return max1(r, n, max, imax, i + 1);
	else
		return imax;
}


int min1(int* a, const int n, int min, int imin, int i)
{
	if (a[i] < min)
	{
		min = a[i];
		imin = i;
	}
	if (i < n - 1)
		return min1(a, n, min, imin, i + 1);
	else
		return imin;
}

int sum(int* a, const int n, int S, int i, int max, int min, int imax, int imin)
{
	S = max1(a, n, max, imax, i) + min1(a, n, min, imin, i);
	return S;
}

int main()
{
	srand((unsigned)time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int a = 17;
	int r[a];
	int Low = -12;
	int High = 30;
	int S = 0;
	int min = 100;
	int max = -100;
	int imin = -100;
	int imax = 100;

	array1(r, a, Low, High, 0);
	cout << "Масив із рандомних чисел:" << endl;
	mas(r, a, 0);
	cout << "Індекс найбільшого числа: " << max1(r, a, max, imax, 0) << endl;
	cout << "Індекс найменшого числа: " << min1(r, a, min, imin, 0) << endl;
	cout << "Сума індексів: " << sum(r, a, 0, 0, max, min, imax, imin) << endl;
	system("pause");
}