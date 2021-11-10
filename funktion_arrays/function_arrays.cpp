#include<iostream>
using namespace std;
#define OFFSET "\t\t\t\t"
//int ReservePrint(int n);
//float Sum(int i, int razm, float array[]);
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
	float array[size] = { 0 };
	for (int i = 0; i < razm; i++)
	{
		cout << "Введите " << i + 1 << "-й элемент массива : ";
		cin >> array[i];
	}
	cout << "--------------------------------------------\n\n";
	cout << "Введенный массив: ";
	for (int i = 0; i < razm; i++)
	{

		//cout << array[i] << " ";
	}

	//cout << endl;

	//cout << "Сумма элементов массива: " <<  << endl;
}

/*int ReservePrint(int n)
{

}
*/
//float Sum(int i, int razm, float array[])
//{
	// float summa=0;
	 //for (i = 0; i < razm; i++)
	 //{
		// summa += array[i];
	 //}
	 //return summa;
//}
