#include<iostream>
#include<conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"

int main()
{
	setlocale(LC_ALL, "Russian");
	char key; //Код клавиши
	int otvet; // пункт меню
	cout << OFFSET << "======================================================\n\n";
	cout << OFFSET << "            Домашнее задание № 6 (Массивы)\n\n";
	cout << OFFSET << "            (Милькин Сергей, группа СБД121)\n\n";
	cout << OFFSET << "======================================================\n\n\n";
	cout << "\t\t\t\t\t" << "   Выберите пункт меню и нажмите Enter\n";
	cout << "\t\t\t\t\t" << "   Для выхода из программы нажмите Esc\n\n";

	do
	{
		cout << OFFSET << "======================================================\n\n";
		cout << OFFSET << "1.    Вывести массив в прямом порядке  \n\n";
		cout << OFFSET << "2.    Вывести массив в обратном порядке \n\n";
		cout << OFFSET << "3.    Найти сумму элементов массива \n\n";
		cout << OFFSET << "4.    Найти среднее арифметическое элементов массива \n\n";
		cout << OFFSET << "5.    Найти минимальное и максимальное значение в массиве \n\n";
		cout << OFFSET << "6.    Циклический сдвиг \n\n";
		cout << OFFSET << "Esc.  Выход\n\n";
		cout << OFFSET << "======================================================\n\n\n";
		
		
		otvet = _getch() - 48;
		
		// Задача 1
		if (otvet == 1)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "========================================================\n\n";
				cout << OFFSET << "          Вывод массива в прямом порядке \n\n";
				cout << OFFSET << "======================================================\n\n\n";
				cout << OFFSET << "          Введите размер массива (не больше 100):\n         ";
				int razm;
				cin >> razm;
				const int size = 100;
				float array[size] = { 0 };
				for (int i = 0; i < razm; i++)
				{
					cout <<"Введите элементы массива:\n";
					cin >> array[i];
				}
				cout <<OFFSET    << "-----------------------\n\n";
				cout <<"Прямой вывод: ";

				for (int i = 0; i < razm; i++)
				{
					cout<< array[i] << " ";
				}

				cout << endl;


			}
		}
		// Задача 2
		if (otvet == 2)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "========================================================\n\n";
				cout << OFFSET << "          Вывод массива в обратном порядке \n\n";
				cout << OFFSET << "======================================================\n\n\n";
				cout << OFFSET << "          Введите размер массива (не больше 100):\n         ";
				int razm;
				cin >> razm;
				const int size = 100;
				float array[size] = { 0 };
				for (int i = 0; i < razm; i++)
				{
					cout << "Введите элементы массива:\n";
					cin >> array[i];
				}
				cout << OFFSET << "-----------------------\n\n";
				cout << "Обратный вывод: ";
				float b;
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
		}
		// Задача 3
		if (otvet == 3)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "========================================================\n\n";
				cout << OFFSET << "          Найти сумму элементов массива  \n\n";
				cout << OFFSET << "======================================================\n\n\n";
				cout << OFFSET << "        Введите размер массива (не больше 100):\n            ";
				int razm;
				cin >> razm;
				const int size = 100;
				float array[size] = { 0 };
				for (int i = 0; i < razm; i++)
				{
					cout << "Введите элементы массива:\n";
					cin >> array[i];
				}
				cout << OFFSET << "-----------------------\n\n";
				cout << "Сумма элементов массива: ";
				float summa=0;
				
				for (int i = 0; i < razm; i++)
				{
					
					summa += array[i];
				}
				cout << summa;
				cout << endl;


			}
		}
		// Задача 4
		if (otvet == 4)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "========================================================\n\n";
				cout << OFFSET << "        Найти среднее арифметическое элементов массива  \n\n";
				cout << OFFSET << "======================================================\n\n\n";
				cout << OFFSET << "        Введите размер массива (не больше 100):\n            ";
				int razm;
				cin >> razm;
				const int size = 100;
				float array[size] = { 0 };
				for (int i = 0; i < razm; i++)
				{
					cout << "Введите элементы массива:\n";
					cin >> array[i];
				}
				cout << OFFSET << "-----------------------\n\n";
				cout << "Cреднее арифметическое элементов массива: ";
				float summa = 0, srednee;

				for (int i = 0; i < razm; i++)
				{

					summa += array[i];

				}
				srednee = summa / razm;
				cout << srednee;
				cout << endl;


			}
		}
		key = _getch();
    } while (key != 27);
	
}
