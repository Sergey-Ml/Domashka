#include<iostream>
#include<conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
#define ZD_1

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
		if (otvet == 1)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
#ifdef ZD_1
			{
				cout << OFFSET << "=================================================++=====\n\n";
				cout << OFFSET << "          Вывод массива в прямом порядке \n\n";
				cout << OFFSET << "======================================================\n\n\n";
				cout << OFFSET << "               Введите размер массива\n                     ";
				int razm;
				cin >> razm;
				const int size = 100;
				int array[size] = { 0 };
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
#endif //ZD_1
			}
		}
		key = _getch();
    } while (key != 27);
	
}
