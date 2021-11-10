#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i;
	int num[100];
	float sum = 0.0, Avg;
	cout << "Количество элементов массива (не более 100):  ";
	cin >> n;
	while (n > 100 || n < 0)
	{
		cout << "Количество может быть от 1 до 100" << endl;
		cout << "Введите количество снова ";
		cin >> n;
	}
	for (i = 0; i < n; i++)
	{
		cout << i + 1 << ". Введите "<<i+1<< " - й элемент массива : ";
		cin >> num[i];
		sum += num[i];
	}
	Avg = sum / n;
	cout << num[i] << endl;
	cout << "Среднее = " << Avg << endl;
}
