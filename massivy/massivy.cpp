#include<iostream>
#include<conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
#define ZD_6

int main()
{
	setlocale(LC_ALL, "Russian");
	char key; //Код клавиши
	int otvet; // пункт меню
	cout << OFFSET << "======================================================\n\n";
	cout << OFFSET << "            Домашнее задание № 7 (Массивы)\n\n";
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
					cout << "Введите элементы массива:\n";
					cin >> array[i];
				}
				cout <<"-----------------------\n\n";
				cout << "Прямой вывод: ";

				for (int i = 0; i < razm; i++)
				{
					cout << array[i] << " ";
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
					cout << "Введите элементы массива:\n";
					cin >> array[i];
				}
				cout <<"-----------------------\n\n";
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
					cout << "Введите элементы массива:\n";
					cin >> array[i];
				}
				cout << "-----------------------\n\n";
				cout << "Сумма элементов массива: ";
				float summa = 0;

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
					cout << "Введите элементы массива:\n";
					cin >> array[i];
				}
				cout <<"-----------------------\n\n";
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
		// Задача 5
		if (otvet == 5)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "=================================================++=====\n\n";
				cout << OFFSET << "   Найти минимальное и максимальное значение в массиве  \n\n";
				cout << OFFSET << "======================================================\n\n\n";
				cout << OFFSET << "        Введите размер массива (не больше 100):\n            ";
				int razm;
				cin >> razm;
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
					cout << "Введите элементы массива:\n";
					cin >> array[i];
				}
				cout << "-----------------------\n\n";
				cout << "Минимальное значение в массиве: ";

				for (int i = 0; i < razm; i++)
				{
					if (array[0] > array[i])
						array[0] = array[i];
				}
				cout << array[0];
				cout << endl;
				cout << "Максимальное значение в массиве: ";

				for (int i = 0; i < razm; i++)
				{
					if (array[0] < array[i])
						array[0] = array[i];
				}
				cout << array[0];
				cout << endl;


			}
		}
#ifdef ZD_6

		// Задача 6
		if (otvet == 6)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "========================================================\n\n";
				cout << OFFSET << "          Циклический сдвиг \n\n";
				cout << OFFSET << "======================================================\n\n\n";
				cout << "Дан массив из 10 элементов :\n\n";
				const int size = 10;
				int array[size] = { 1,2,3,4,5,6,7,8,9,10 };

				for (int i = 0; i < size; i++)
				{
					cout << array[i] << " ";

				}
				cout << "\n" << endl;
				cout << "Введите число сдвига :\n\n";
				int sdvig;
				cin >> sdvig;
				cout << "-----------------------\n\n";
				cout << "Циклический сдвиг на " << sdvig << " элемента(ов):\n\n";
				for (int i = 0; i < sdvig; i++)
				{
					array[i] = array[size - sdvig + i];

				}

				int array_1[size] = { 1,2,3,4,5,6,7,8,9,10 };

				for (int i = 1; i < size - sdvig + 1; i++)
				{
					array[i + sdvig - 1] = array_1[i - 1];
				}


				for (int i = 0; i < size; i++)
				{
					cout << array[i] << " ";
				}

				cout << "\n" << endl;
#endif
				
			}
			}
	key = _getch();
	} while (key != 27);
	
}
	
