#include<iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размер массива\n";
	int razm;
	cin >> razm;
	const int size = 100;
	int array[size] = { 0 };
	for (int i = 0; i < razm; i++)
	{
		cout << "Введите элементы массива:\n";
		cin >> array[i];
	}
	cout << "-----------------------\n\n";
	cout << "Обратный вывод: ";
	int b;
	for (int i = 0; i < (razm / 2); i++)
	{
		b = array[razm - i - 1];
		array[razm - i - 1] = array[i];
			array[i] = b;
	}
	for (int i = 0; i < razm; i++)
	{
		cout << array[i] << " ";
	}
	
	cout << endl;
}