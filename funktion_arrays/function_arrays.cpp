#include<iostream>
using namespace std;
#define OFFSET "\t\t\t\t"
void ReservePrint(int[], int);
//void Sum(int[], int);


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << OFFSET << "========================================================\n\n";
	cout << OFFSET << "          Проект Function/Arrays111 \n\n  ";
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
	ReservePrint(array, razm);
	cout << "\n\n";
	//Sum(array, razm);
}

void ReservePrint(int arrays[], int razm)
{
	//float b=0;
	//for (int i = 0; i < (razm / 2); i++)
	//{
		//b = arrays[razm - i - 1];
		//arrays[razm - i - 1] = arrays[i];
		//arrays[i] = b;
	//}
	//for (int i = 0; i < razm; i++)
	//{
		//cout <<"Обратный вывод: " << arrays[i] << " ";
	//}

	cout << "rhg;uqeh4;gohj";
}

//void Sum(int arrays[], int razm)
//{
	// int summa=0;
	 //for (int i = 0; i < razm; i++)
	 //{
		// summa += arrays[i];
	 //}
	 //cout << "Сумма элементов массива: " << summa << endl;
//}
