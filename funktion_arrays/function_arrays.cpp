#include<iostream>
using namespace std;
#define OFFSET "\t\t\t\t"
//int ReservePrint(int n);
void Sum(int[]);


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << OFFSET << "========================================================\n\n";
	cout << OFFSET << "          Проект Function/Arrays \n\n  ";
	cout << OFFSET << "========================================================\n\n\n";
	cout << "Введите размер массива (не больше 100):  ";
	int razm;
	cin >> razm;
	cout << endl;
	while (razm > 100 || razm <= 0)
	{
		cout << "Размер массива может быть от 1 до 100!" << endl;
		cout << "Введите снова: ";
		cin >> razm;
	}
	const int size = 100;
	int array[size] = { 0 };
	for (int i = 0; i < razm; i++)
	{
		cout << "Введите " << i + 1 << "-й элемент массива : ";
		cin >> array[i];
	}
	cout << "--------------------------------------------\n\n";
	cout << "Введенный массив: ";
	for (int i = 0; i < razm; i++)
	{

		cout << array[i] << " ";
	}

	cout << "\n\n";

	Sum(array);
}

/*int ReservePrint(int n)
{

}
*/
void Sum(int arrays[])
{
	 int summa=0;
	 for (int i = 0; i < 100; i++)
	 {
		 summa += arrays[i];
	 }
	 cout << "Сумма элементов массива: " << summa << endl;
}
